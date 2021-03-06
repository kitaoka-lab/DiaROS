from scipy.io.wavfile import read
import pyworld as pw
import numpy as np
import matplotlib.pyplot as plt
from aubio import pitch

# Pitch
tolerance = 0.8
downsample = 1
win_s = 4096 # fft size
hop_s = 1024 # hop size
f0_upper = 600.0

class AcousticAnalysis:
    def __init__( self, rate ):
        self.rate = rate
        self.pitch_o = pitch("fcomb", win_s, hop_s, rate) # "fcomb"
        self.pitch_o.set_unit("Hz")
        self.pitch_o.set_tolerance(tolerance)
        self.prev = 0.0
        self.count = 0
        self.f0_list = []
        self.zc_list = []
        self.grad = 0.0

    def outputHarvest(self, inputs):
        signal = np.fromstring(inputs, dtype='int16')
        signal = signal.astype(np.float)
        f0, time = pw.harvest(signal, self.rate)
        f0 = pw.stonemask(signal, f0, time, self.rate)
        f0 = f0.tolist()
        #print(f0)
        #self.df = np.gradient(self.f0)
        #self.df = self.df.tolist()
        #print("aa", self.f0, self.time)
        return f0

    def outputAubio(self, inputs):
        self.count += 1
        signal = np.fromstring(inputs, dtype=np.int16)

        power = signal.max() / 32768.0  # it is wrong! must be fix to RMS!
        signal = signal.astype(np.float32)

        zerocross = self.zeroCrossing(signal)
        self.zc_list.append(zerocross)

        f0 = float(self.pitch_o(signal)[0])
        confidence = self.pitch_o.get_confidence()
        # if confidence < 0.8: f0 = 0.
        if f0 > f0_upper: f0 = 0.0

        self.f0_list.append(f0)
        if self.count == 30:
            x = np.array(list(range(30)))
            y = np.array(self.f0_list)
            self.grad = np.polyfit(x, y, 1)[0]
            self.f0_list = []
            self.count = 0
        self.prev = f0 
        return [ f0, self.grad, power, zerocross ]

    def zeroCrossing(self, signal):
        return np.count_nonzero(np.diff(np.signbit(signal)))
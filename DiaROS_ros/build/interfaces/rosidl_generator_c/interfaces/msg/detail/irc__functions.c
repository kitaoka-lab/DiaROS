// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Irc.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/irc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `word`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__Irc__init(interfaces__msg__Irc * msg)
{
  if (!msg) {
    return false;
  }
  // word
  if (!rosidl_runtime_c__String__init(&msg->word)) {
    interfaces__msg__Irc__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Irc__fini(interfaces__msg__Irc * msg)
{
  if (!msg) {
    return;
  }
  // word
  rosidl_runtime_c__String__fini(&msg->word);
}

interfaces__msg__Irc *
interfaces__msg__Irc__create()
{
  interfaces__msg__Irc * msg = (interfaces__msg__Irc *)malloc(sizeof(interfaces__msg__Irc));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Irc));
  bool success = interfaces__msg__Irc__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Irc__destroy(interfaces__msg__Irc * msg)
{
  if (msg) {
    interfaces__msg__Irc__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__Irc__Sequence__init(interfaces__msg__Irc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__Irc * data = NULL;
  if (size) {
    data = (interfaces__msg__Irc *)calloc(size, sizeof(interfaces__msg__Irc));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Irc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Irc__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__Irc__Sequence__fini(interfaces__msg__Irc__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__Irc__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__Irc__Sequence *
interfaces__msg__Irc__Sequence__create(size_t size)
{
  interfaces__msg__Irc__Sequence * array = (interfaces__msg__Irc__Sequence *)malloc(sizeof(interfaces__msg__Irc__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Irc__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Irc__Sequence__destroy(interfaces__msg__Irc__Sequence * array)
{
  if (array) {
    interfaces__msg__Irc__Sequence__fini(array);
  }
  free(array);
}

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/Iasr.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/iasr__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/iasr__struct.h"
#include "interfaces/msg/detail/iasr__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // you
#include "rosidl_runtime_c/string_functions.h"  // you

// forward declare type support functions


using _Iasr__ros_msg_type = interfaces__msg__Iasr;

static bool _Iasr__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Iasr__ros_msg_type * ros_message = static_cast<const _Iasr__ros_msg_type *>(untyped_ros_message);
  // Field name: you
  {
    const rosidl_runtime_c__String * str = &ros_message->you;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: is_final
  {
    cdr << (ros_message->is_final ? true : false);
  }

  return true;
}

static bool _Iasr__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Iasr__ros_msg_type * ros_message = static_cast<_Iasr__ros_msg_type *>(untyped_ros_message);
  // Field name: you
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->you.data) {
      rosidl_runtime_c__String__init(&ros_message->you);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->you,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'you'\n");
      return false;
    }
  }

  // Field name: is_final
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_final = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__Iasr(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Iasr__ros_msg_type * ros_message = static_cast<const _Iasr__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name you
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->you.size + 1);
  // field.name is_final
  {
    size_t item_size = sizeof(ros_message->is_final);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Iasr__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__Iasr(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__Iasr(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: you
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_final
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Iasr__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__msg__Iasr(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Iasr = {
  "interfaces::msg",
  "Iasr",
  _Iasr__cdr_serialize,
  _Iasr__cdr_deserialize,
  _Iasr__get_serialized_size,
  _Iasr__max_serialized_size
};

static rosidl_message_type_support_t _Iasr__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Iasr,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, Iasr)() {
  return &_Iasr__type_support;
}

#if defined(__cplusplus)
}
#endif

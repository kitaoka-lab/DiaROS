// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Iasr.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/iasr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `you`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__Iasr__init(interfaces__msg__Iasr * msg)
{
  if (!msg) {
    return false;
  }
  // you
  if (!rosidl_runtime_c__String__init(&msg->you)) {
    interfaces__msg__Iasr__fini(msg);
    return false;
  }
  // is_final
  return true;
}

void
interfaces__msg__Iasr__fini(interfaces__msg__Iasr * msg)
{
  if (!msg) {
    return;
  }
  // you
  rosidl_runtime_c__String__fini(&msg->you);
  // is_final
}

interfaces__msg__Iasr *
interfaces__msg__Iasr__create()
{
  interfaces__msg__Iasr * msg = (interfaces__msg__Iasr *)malloc(sizeof(interfaces__msg__Iasr));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Iasr));
  bool success = interfaces__msg__Iasr__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Iasr__destroy(interfaces__msg__Iasr * msg)
{
  if (msg) {
    interfaces__msg__Iasr__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__Iasr__Sequence__init(interfaces__msg__Iasr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__Iasr * data = NULL;
  if (size) {
    data = (interfaces__msg__Iasr *)calloc(size, sizeof(interfaces__msg__Iasr));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Iasr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Iasr__fini(&data[i - 1]);
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
interfaces__msg__Iasr__Sequence__fini(interfaces__msg__Iasr__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__Iasr__fini(&array->data[i]);
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

interfaces__msg__Iasr__Sequence *
interfaces__msg__Iasr__Sequence__create(size_t size)
{
  interfaces__msg__Iasr__Sequence * array = (interfaces__msg__Iasr__Sequence *)malloc(sizeof(interfaces__msg__Iasr__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Iasr__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Iasr__Sequence__destroy(interfaces__msg__Iasr__Sequence * array)
{
  if (array) {
    interfaces__msg__Iasr__Sequence__fini(array);
  }
  free(array);
}

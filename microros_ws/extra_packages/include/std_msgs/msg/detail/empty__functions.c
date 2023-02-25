// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/Empty.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
std_msgs__msg__Empty__init(std_msgs__msg__Empty * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
std_msgs__msg__Empty__fini(std_msgs__msg__Empty * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
std_msgs__msg__Empty__are_equal(const std_msgs__msg__Empty * lhs, const std_msgs__msg__Empty * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
std_msgs__msg__Empty__copy(
  const std_msgs__msg__Empty * input,
  std_msgs__msg__Empty * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

std_msgs__msg__Empty *
std_msgs__msg__Empty__create()
{
  std_msgs__msg__Empty * msg = (std_msgs__msg__Empty *)malloc(sizeof(std_msgs__msg__Empty));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__Empty));
  bool success = std_msgs__msg__Empty__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__Empty__destroy(std_msgs__msg__Empty * msg)
{
  if (msg) {
    std_msgs__msg__Empty__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__Empty__Sequence__init(std_msgs__msg__Empty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__Empty * data = NULL;
  if (size) {
    data = (std_msgs__msg__Empty *)calloc(size, sizeof(std_msgs__msg__Empty));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__Empty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__Empty__fini(&data[i - 1]);
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
std_msgs__msg__Empty__Sequence__fini(std_msgs__msg__Empty__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__Empty__fini(&array->data[i]);
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

std_msgs__msg__Empty__Sequence *
std_msgs__msg__Empty__Sequence__create(size_t size)
{
  std_msgs__msg__Empty__Sequence * array = (std_msgs__msg__Empty__Sequence *)malloc(sizeof(std_msgs__msg__Empty__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__Empty__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__Empty__Sequence__destroy(std_msgs__msg__Empty__Sequence * array)
{
  if (array) {
    std_msgs__msg__Empty__Sequence__fini(array);
  }
  free(array);
}

bool
std_msgs__msg__Empty__Sequence__are_equal(const std_msgs__msg__Empty__Sequence * lhs, const std_msgs__msg__Empty__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!std_msgs__msg__Empty__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
std_msgs__msg__Empty__Sequence__copy(
  const std_msgs__msg__Empty__Sequence * input,
  std_msgs__msg__Empty__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(std_msgs__msg__Empty);
    std_msgs__msg__Empty * data =
      (std_msgs__msg__Empty *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!std_msgs__msg__Empty__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          std_msgs__msg__Empty__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!std_msgs__msg__Empty__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

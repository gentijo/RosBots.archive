// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/int16_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `layout`
#include "example_interfaces/msg/detail/multi_array_layout__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
example_interfaces__msg__Int16MultiArray__init(example_interfaces__msg__Int16MultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // layout
  if (!example_interfaces__msg__MultiArrayLayout__init(&msg->layout)) {
    example_interfaces__msg__Int16MultiArray__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->data, 0)) {
    example_interfaces__msg__Int16MultiArray__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__msg__Int16MultiArray__fini(example_interfaces__msg__Int16MultiArray * msg)
{
  if (!msg) {
    return;
  }
  // layout
  example_interfaces__msg__MultiArrayLayout__fini(&msg->layout);
  // data
  rosidl_runtime_c__int16__Sequence__fini(&msg->data);
}

bool
example_interfaces__msg__Int16MultiArray__are_equal(const example_interfaces__msg__Int16MultiArray * lhs, const example_interfaces__msg__Int16MultiArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // layout
  if (!example_interfaces__msg__MultiArrayLayout__are_equal(
      &(lhs->layout), &(rhs->layout)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
example_interfaces__msg__Int16MultiArray__copy(
  const example_interfaces__msg__Int16MultiArray * input,
  example_interfaces__msg__Int16MultiArray * output)
{
  if (!input || !output) {
    return false;
  }
  // layout
  if (!example_interfaces__msg__MultiArrayLayout__copy(
      &(input->layout), &(output->layout)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

example_interfaces__msg__Int16MultiArray *
example_interfaces__msg__Int16MultiArray__create()
{
  example_interfaces__msg__Int16MultiArray * msg = (example_interfaces__msg__Int16MultiArray *)malloc(sizeof(example_interfaces__msg__Int16MultiArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__msg__Int16MultiArray));
  bool success = example_interfaces__msg__Int16MultiArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__msg__Int16MultiArray__destroy(example_interfaces__msg__Int16MultiArray * msg)
{
  if (msg) {
    example_interfaces__msg__Int16MultiArray__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__msg__Int16MultiArray__Sequence__init(example_interfaces__msg__Int16MultiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__msg__Int16MultiArray * data = NULL;
  if (size) {
    data = (example_interfaces__msg__Int16MultiArray *)calloc(size, sizeof(example_interfaces__msg__Int16MultiArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__msg__Int16MultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__msg__Int16MultiArray__fini(&data[i - 1]);
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
example_interfaces__msg__Int16MultiArray__Sequence__fini(example_interfaces__msg__Int16MultiArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__msg__Int16MultiArray__fini(&array->data[i]);
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

example_interfaces__msg__Int16MultiArray__Sequence *
example_interfaces__msg__Int16MultiArray__Sequence__create(size_t size)
{
  example_interfaces__msg__Int16MultiArray__Sequence * array = (example_interfaces__msg__Int16MultiArray__Sequence *)malloc(sizeof(example_interfaces__msg__Int16MultiArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__msg__Int16MultiArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__msg__Int16MultiArray__Sequence__destroy(example_interfaces__msg__Int16MultiArray__Sequence * array)
{
  if (array) {
    example_interfaces__msg__Int16MultiArray__Sequence__fini(array);
  }
  free(array);
}

bool
example_interfaces__msg__Int16MultiArray__Sequence__are_equal(const example_interfaces__msg__Int16MultiArray__Sequence * lhs, const example_interfaces__msg__Int16MultiArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__msg__Int16MultiArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__msg__Int16MultiArray__Sequence__copy(
  const example_interfaces__msg__Int16MultiArray__Sequence * input,
  example_interfaces__msg__Int16MultiArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__msg__Int16MultiArray);
    example_interfaces__msg__Int16MultiArray * data =
      (example_interfaces__msg__Int16MultiArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__msg__Int16MultiArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_interfaces__msg__Int16MultiArray__fini(&data[i]);
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
    if (!example_interfaces__msg__Int16MultiArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:msg/UnboundedSequences.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/msg/detail/unbounded_sequences__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/msg/detail/unbounded_sequences__functions.h"
#include "test_msgs/msg/detail/unbounded_sequences__struct.h"


// Include directives for member types
// Member `bool_values`
// Member `byte_values`
// Member `char_values`
// Member `float32_values`
// Member `float64_values`
// Member `int8_values`
// Member `uint8_values`
// Member `int16_values`
// Member `uint16_values`
// Member `int32_values`
// Member `uint32_values`
// Member `int64_values`
// Member `uint64_values`
// Member `bool_values_default`
// Member `byte_values_default`
// Member `char_values_default`
// Member `float32_values_default`
// Member `float64_values_default`
// Member `int8_values_default`
// Member `uint8_values_default`
// Member `int16_values_default`
// Member `uint16_values_default`
// Member `int32_values_default`
// Member `uint32_values_default`
// Member `int64_values_default`
// Member `uint64_values_default`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `string_values`
// Member `string_values_default`
#include "rosidl_runtime_c/string_functions.h"
// Member `basic_types_values`
#include "test_msgs/msg/basic_types.h"
// Member `basic_types_values`
#include "test_msgs/msg/detail/basic_types__rosidl_typesupport_introspection_c.h"
// Member `constants_values`
#include "test_msgs/msg/constants.h"
// Member `constants_values`
#include "test_msgs/msg/detail/constants__rosidl_typesupport_introspection_c.h"
// Member `defaults_values`
#include "test_msgs/msg/defaults.h"
// Member `defaults_values`
#include "test_msgs/msg/detail/defaults__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_msgs__msg__UnboundedSequences__init(message_memory);
}

void UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_fini_function(void * message_memory)
{
  test_msgs__msg__UnboundedSequences__fini(message_memory);
}

size_t UnboundedSequences__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values(
  const void * untyped_member)
{
  const test_msgs__msg__BasicTypes__Sequence * member =
    (const test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  return member->size;
}

const void * UnboundedSequences__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BasicTypes__Sequence * member =
    (const test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  return &member->data[index];
}

void * UnboundedSequences__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BasicTypes__Sequence * member =
    (test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  return &member->data[index];
}

bool UnboundedSequences__rosidl_typesupport_introspection_c__resize_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t size)
{
  test_msgs__msg__BasicTypes__Sequence * member =
    (test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  test_msgs__msg__BasicTypes__Sequence__fini(member);
  return test_msgs__msg__BasicTypes__Sequence__init(member, size);
}

size_t UnboundedSequences__rosidl_typesupport_introspection_c__size_function__Constants__constants_values(
  const void * untyped_member)
{
  const test_msgs__msg__Constants__Sequence * member =
    (const test_msgs__msg__Constants__Sequence *)(untyped_member);
  return member->size;
}

const void * UnboundedSequences__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Constants__Sequence * member =
    (const test_msgs__msg__Constants__Sequence *)(untyped_member);
  return &member->data[index];
}

void * UnboundedSequences__rosidl_typesupport_introspection_c__get_function__Constants__constants_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Constants__Sequence * member =
    (test_msgs__msg__Constants__Sequence *)(untyped_member);
  return &member->data[index];
}

bool UnboundedSequences__rosidl_typesupport_introspection_c__resize_function__Constants__constants_values(
  void * untyped_member, size_t size)
{
  test_msgs__msg__Constants__Sequence * member =
    (test_msgs__msg__Constants__Sequence *)(untyped_member);
  test_msgs__msg__Constants__Sequence__fini(member);
  return test_msgs__msg__Constants__Sequence__init(member, size);
}

size_t UnboundedSequences__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values(
  const void * untyped_member)
{
  const test_msgs__msg__Defaults__Sequence * member =
    (const test_msgs__msg__Defaults__Sequence *)(untyped_member);
  return member->size;
}

const void * UnboundedSequences__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Defaults__Sequence * member =
    (const test_msgs__msg__Defaults__Sequence *)(untyped_member);
  return &member->data[index];
}

void * UnboundedSequences__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Defaults__Sequence * member =
    (test_msgs__msg__Defaults__Sequence *)(untyped_member);
  return &member->data[index];
}

bool UnboundedSequences__rosidl_typesupport_introspection_c__resize_function__Defaults__defaults_values(
  void * untyped_member, size_t size)
{
  test_msgs__msg__Defaults__Sequence * member =
    (test_msgs__msg__Defaults__Sequence *)(untyped_member);
  test_msgs__msg__Defaults__Sequence__fini(member);
  return test_msgs__msg__Defaults__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_member_array[32] = {
  {
    "bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, bool_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, byte_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, char_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, float32_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float64_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, float64_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int8_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint8_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int16_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint16_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int32_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint32_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int64_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint64_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, string_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basic_types_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, basic_types_values),  // bytes offset in struct
    NULL,  // default value
    UnboundedSequences__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values,  // size() function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values,  // get_const(index) function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values,  // get(index) function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__resize_function__BasicTypes__basic_types_values  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, constants_values),  // bytes offset in struct
    NULL,  // default value
    UnboundedSequences__rosidl_typesupport_introspection_c__size_function__Constants__constants_values,  // size() function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values,  // get_const(index) function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__get_function__Constants__constants_values,  // get(index) function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__resize_function__Constants__constants_values  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, defaults_values),  // bytes offset in struct
    NULL,  // default value
    UnboundedSequences__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values,  // size() function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values,  // get_const(index) function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values,  // get(index) function pointer
    UnboundedSequences__rosidl_typesupport_introspection_c__resize_function__Defaults__defaults_values  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, bool_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, byte_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, char_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, float32_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float64_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, float64_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int8_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint8_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int16_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint16_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int32_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint32_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, int64_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, uint64_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, string_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alignment_check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__UnboundedSequences, alignment_check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_members = {
  "test_msgs__msg",  // message namespace
  "UnboundedSequences",  // message name
  32,  // number of fields
  sizeof(test_msgs__msg__UnboundedSequences),
  UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_member_array,  // message members
  UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_init_function,  // function to initialize message memory (memory has to be allocated)
  UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_type_support_handle = {
  0,
  &UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, UnboundedSequences)() {
  UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Constants)();
  UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Defaults)();
  if (!UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_type_support_handle.typesupport_identifier) {
    UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnboundedSequences__rosidl_typesupport_introspection_c__UnboundedSequences_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

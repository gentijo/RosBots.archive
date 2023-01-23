// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:msg/Arrays.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/msg/detail/arrays__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/msg/detail/arrays__functions.h"
#include "test_msgs/msg/detail/arrays__struct.h"


// Include directives for member types
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

void Arrays__rosidl_typesupport_introspection_c__Arrays_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_msgs__msg__Arrays__init(message_memory);
}

void Arrays__rosidl_typesupport_introspection_c__Arrays_fini_function(void * message_memory)
{
  test_msgs__msg__Arrays__fini(message_memory);
}

size_t Arrays__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BasicTypes * member =
    (const test_msgs__msg__BasicTypes *)(untyped_member);
  return &member[index];
}

void * Arrays__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BasicTypes * member =
    (test_msgs__msg__BasicTypes *)(untyped_member);
  return &member[index];
}

size_t Arrays__rosidl_typesupport_introspection_c__size_function__Constants__constants_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Constants * member =
    (const test_msgs__msg__Constants *)(untyped_member);
  return &member[index];
}

void * Arrays__rosidl_typesupport_introspection_c__get_function__Constants__constants_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Constants * member =
    (test_msgs__msg__Constants *)(untyped_member);
  return &member[index];
}

size_t Arrays__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Defaults * member =
    (const test_msgs__msg__Defaults *)(untyped_member);
  return &member[index];
}

void * Arrays__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Defaults * member =
    (test_msgs__msg__Defaults *)(untyped_member);
  return &member[index];
}

static rosidl_typesupport_introspection_c__MessageMember Arrays__rosidl_typesupport_introspection_c__Arrays_message_member_array[32] = {
  {
    "bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, bool_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, byte_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, char_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, float32_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, float64_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int8_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint8_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int16_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint16_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int32_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint32_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int64_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint64_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, string_values),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, basic_types_values),  // bytes offset in struct
    NULL,  // default value
    Arrays__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values,  // size() function pointer
    Arrays__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values,  // get_const(index) function pointer
    Arrays__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, constants_values),  // bytes offset in struct
    NULL,  // default value
    Arrays__rosidl_typesupport_introspection_c__size_function__Constants__constants_values,  // size() function pointer
    Arrays__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values,  // get_const(index) function pointer
    Arrays__rosidl_typesupport_introspection_c__get_function__Constants__constants_values,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, defaults_values),  // bytes offset in struct
    NULL,  // default value
    Arrays__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values,  // size() function pointer
    Arrays__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values,  // get_const(index) function pointer
    Arrays__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, bool_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, byte_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, char_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, float32_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, float64_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int8_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint8_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int16_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint16_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int32_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint32_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, int64_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, uint64_values_default),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Arrays, string_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__msg__Arrays, alignment_check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Arrays__rosidl_typesupport_introspection_c__Arrays_message_members = {
  "test_msgs__msg",  // message namespace
  "Arrays",  // message name
  32,  // number of fields
  sizeof(test_msgs__msg__Arrays),
  Arrays__rosidl_typesupport_introspection_c__Arrays_message_member_array,  // message members
  Arrays__rosidl_typesupport_introspection_c__Arrays_init_function,  // function to initialize message memory (memory has to be allocated)
  Arrays__rosidl_typesupport_introspection_c__Arrays_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Arrays__rosidl_typesupport_introspection_c__Arrays_message_type_support_handle = {
  0,
  &Arrays__rosidl_typesupport_introspection_c__Arrays_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Arrays)() {
  Arrays__rosidl_typesupport_introspection_c__Arrays_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  Arrays__rosidl_typesupport_introspection_c__Arrays_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Constants)();
  Arrays__rosidl_typesupport_introspection_c__Arrays_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Defaults)();
  if (!Arrays__rosidl_typesupport_introspection_c__Arrays_message_type_support_handle.typesupport_identifier) {
    Arrays__rosidl_typesupport_introspection_c__Arrays_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Arrays__rosidl_typesupport_introspection_c__Arrays_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

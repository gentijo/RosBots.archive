// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/srv/detail/arrays__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/srv/detail/arrays__functions.h"
#include "test_msgs/srv/detail/arrays__struct.h"


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

void Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_msgs__srv__Arrays_Request__init(message_memory);
}

void Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_fini_function(void * message_memory)
{
  test_msgs__srv__Arrays_Request__fini(message_memory);
}

size_t Arrays_Request__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays_Request__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BasicTypes * member =
    (const test_msgs__msg__BasicTypes *)(untyped_member);
  return &member[index];
}

void * Arrays_Request__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BasicTypes * member =
    (test_msgs__msg__BasicTypes *)(untyped_member);
  return &member[index];
}

size_t Arrays_Request__rosidl_typesupport_introspection_c__size_function__Constants__constants_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays_Request__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Constants * member =
    (const test_msgs__msg__Constants *)(untyped_member);
  return &member[index];
}

void * Arrays_Request__rosidl_typesupport_introspection_c__get_function__Constants__constants_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Constants * member =
    (test_msgs__msg__Constants *)(untyped_member);
  return &member[index];
}

size_t Arrays_Request__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays_Request__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Defaults * member =
    (const test_msgs__msg__Defaults *)(untyped_member);
  return &member[index];
}

void * Arrays_Request__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Defaults * member =
    (test_msgs__msg__Defaults *)(untyped_member);
  return &member[index];
}

static rosidl_typesupport_introspection_c__MessageMember Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_member_array[31] = {
  {
    "bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__srv__Arrays_Request, bool_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, byte_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, char_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, float32_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, float64_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int8_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint8_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int16_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint16_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int32_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint32_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int64_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint64_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, string_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, basic_types_values),  // bytes offset in struct
    NULL,  // default value
    Arrays_Request__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values,  // size() function pointer
    Arrays_Request__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values,  // get_const(index) function pointer
    Arrays_Request__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values,  // get(index) function pointer
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
    offsetof(test_msgs__srv__Arrays_Request, constants_values),  // bytes offset in struct
    NULL,  // default value
    Arrays_Request__rosidl_typesupport_introspection_c__size_function__Constants__constants_values,  // size() function pointer
    Arrays_Request__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values,  // get_const(index) function pointer
    Arrays_Request__rosidl_typesupport_introspection_c__get_function__Constants__constants_values,  // get(index) function pointer
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
    offsetof(test_msgs__srv__Arrays_Request, defaults_values),  // bytes offset in struct
    NULL,  // default value
    Arrays_Request__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values,  // size() function pointer
    Arrays_Request__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values,  // get_const(index) function pointer
    Arrays_Request__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values,  // get(index) function pointer
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
    offsetof(test_msgs__srv__Arrays_Request, bool_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, byte_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, char_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, float32_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, float64_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int8_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint8_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int16_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint16_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int32_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint32_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, int64_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, uint64_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Request, string_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_members = {
  "test_msgs__srv",  // message namespace
  "Arrays_Request",  // message name
  31,  // number of fields
  sizeof(test_msgs__srv__Arrays_Request),
  Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_member_array,  // message members
  Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_type_support_handle = {
  0,
  &Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Request)() {
  Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Constants)();
  Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Defaults)();
  if (!Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_type_support_handle.typesupport_identifier) {
    Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Arrays_Request__rosidl_typesupport_introspection_c__Arrays_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "test_msgs/srv/detail/arrays__rosidl_typesupport_introspection_c.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "test_msgs/srv/detail/arrays__functions.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.h"


// Include directives for member types
// Member `string_values`
// Member `string_values_default`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `basic_types_values`
// already included above
// #include "test_msgs/msg/basic_types.h"
// Member `basic_types_values`
// already included above
// #include "test_msgs/msg/detail/basic_types__rosidl_typesupport_introspection_c.h"
// Member `constants_values`
// already included above
// #include "test_msgs/msg/constants.h"
// Member `constants_values`
// already included above
// #include "test_msgs/msg/detail/constants__rosidl_typesupport_introspection_c.h"
// Member `defaults_values`
// already included above
// #include "test_msgs/msg/defaults.h"
// Member `defaults_values`
// already included above
// #include "test_msgs/msg/detail/defaults__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_msgs__srv__Arrays_Response__init(message_memory);
}

void Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_fini_function(void * message_memory)
{
  test_msgs__srv__Arrays_Response__fini(message_memory);
}

size_t Arrays_Response__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays_Response__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BasicTypes * member =
    (const test_msgs__msg__BasicTypes *)(untyped_member);
  return &member[index];
}

void * Arrays_Response__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BasicTypes * member =
    (test_msgs__msg__BasicTypes *)(untyped_member);
  return &member[index];
}

size_t Arrays_Response__rosidl_typesupport_introspection_c__size_function__Constants__constants_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays_Response__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Constants * member =
    (const test_msgs__msg__Constants *)(untyped_member);
  return &member[index];
}

void * Arrays_Response__rosidl_typesupport_introspection_c__get_function__Constants__constants_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Constants * member =
    (test_msgs__msg__Constants *)(untyped_member);
  return &member[index];
}

size_t Arrays_Response__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Arrays_Response__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Defaults * member =
    (const test_msgs__msg__Defaults *)(untyped_member);
  return &member[index];
}

void * Arrays_Response__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Defaults * member =
    (test_msgs__msg__Defaults *)(untyped_member);
  return &member[index];
}

static rosidl_typesupport_introspection_c__MessageMember Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_member_array[31] = {
  {
    "bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__srv__Arrays_Response, bool_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, byte_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, char_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, float32_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, float64_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int8_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint8_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int16_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint16_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int32_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint32_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int64_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint64_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, string_values),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, basic_types_values),  // bytes offset in struct
    NULL,  // default value
    Arrays_Response__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values,  // size() function pointer
    Arrays_Response__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values,  // get_const(index) function pointer
    Arrays_Response__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values,  // get(index) function pointer
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
    offsetof(test_msgs__srv__Arrays_Response, constants_values),  // bytes offset in struct
    NULL,  // default value
    Arrays_Response__rosidl_typesupport_introspection_c__size_function__Constants__constants_values,  // size() function pointer
    Arrays_Response__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values,  // get_const(index) function pointer
    Arrays_Response__rosidl_typesupport_introspection_c__get_function__Constants__constants_values,  // get(index) function pointer
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
    offsetof(test_msgs__srv__Arrays_Response, defaults_values),  // bytes offset in struct
    NULL,  // default value
    Arrays_Response__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values,  // size() function pointer
    Arrays_Response__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values,  // get_const(index) function pointer
    Arrays_Response__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values,  // get(index) function pointer
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
    offsetof(test_msgs__srv__Arrays_Response, bool_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, byte_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, char_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, float32_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, float64_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int8_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint8_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int16_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint16_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int32_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint32_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, int64_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, uint64_values_default),  // bytes offset in struct
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
    offsetof(test_msgs__srv__Arrays_Response, string_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_members = {
  "test_msgs__srv",  // message namespace
  "Arrays_Response",  // message name
  31,  // number of fields
  sizeof(test_msgs__srv__Arrays_Response),
  Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_member_array,  // message members
  Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_type_support_handle = {
  0,
  &Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Response)() {
  Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Constants)();
  Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Defaults)();
  if (!Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_type_support_handle.typesupport_identifier) {
    Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Arrays_Response__rosidl_typesupport_introspection_c__Arrays_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "test_msgs/srv/detail/arrays__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_members = {
  "test_msgs__srv",  // service namespace
  "Arrays",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_Request_message_type_support_handle,
  NULL  // response message
  // test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_Response_message_type_support_handle
};

static rosidl_service_type_support_t test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_type_support_handle = {
  0,
  &test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays)() {
  if (!test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_type_support_handle.typesupport_identifier) {
    test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Response)()->data;
  }

  return &test_msgs__srv__detail__arrays__rosidl_typesupport_introspection_c__Arrays_service_type_support_handle;
}

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:msg/WStrings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/msg/detail/w_strings__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/msg/detail/w_strings__functions.h"
#include "test_msgs/msg/detail/w_strings__struct.h"


// Include directives for member types
// Member `wstring_value`
// Member `wstring_value_default1`
// Member `wstring_value_default2`
// Member `wstring_value_default3`
// Member `array_of_wstrings`
// Member `bounded_sequence_of_wstrings`
// Member `unbounded_sequence_of_wstrings`
#include "rosidl_runtime_c/u16string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WStrings__rosidl_typesupport_introspection_c__WStrings_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_msgs__msg__WStrings__init(message_memory);
}

void WStrings__rosidl_typesupport_introspection_c__WStrings_fini_function(void * message_memory)
{
  test_msgs__msg__WStrings__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WStrings__rosidl_typesupport_introspection_c__WStrings_message_member_array[7] = {
  {
    "wstring_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__WStrings, wstring_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wstring_value_default1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__WStrings, wstring_value_default1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wstring_value_default2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__WStrings, wstring_value_default2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wstring_value_default3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__WStrings, wstring_value_default3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "array_of_wstrings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__WStrings, array_of_wstrings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_wstrings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__WStrings, bounded_sequence_of_wstrings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_wstrings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__WStrings, unbounded_sequence_of_wstrings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WStrings__rosidl_typesupport_introspection_c__WStrings_message_members = {
  "test_msgs__msg",  // message namespace
  "WStrings",  // message name
  7,  // number of fields
  sizeof(test_msgs__msg__WStrings),
  WStrings__rosidl_typesupport_introspection_c__WStrings_message_member_array,  // message members
  WStrings__rosidl_typesupport_introspection_c__WStrings_init_function,  // function to initialize message memory (memory has to be allocated)
  WStrings__rosidl_typesupport_introspection_c__WStrings_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WStrings__rosidl_typesupport_introspection_c__WStrings_message_type_support_handle = {
  0,
  &WStrings__rosidl_typesupport_introspection_c__WStrings_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, WStrings)() {
  if (!WStrings__rosidl_typesupport_introspection_c__WStrings_message_type_support_handle.typesupport_identifier) {
    WStrings__rosidl_typesupport_introspection_c__WStrings_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WStrings__rosidl_typesupport_introspection_c__WStrings_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

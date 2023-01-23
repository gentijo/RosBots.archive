// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "micro_ros_msgs/msg/detail/entity__rosidl_typesupport_introspection_c.h"
#include "micro_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "micro_ros_msgs/msg/detail/entity__functions.h"
#include "micro_ros_msgs/msg/detail/entity__struct.h"


// Include directives for member types
// Member `name`
// Member `types`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Entity__rosidl_typesupport_introspection_c__Entity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  micro_ros_msgs__msg__Entity__init(message_memory);
}

void Entity__rosidl_typesupport_introspection_c__Entity_fini_function(void * message_memory)
{
  micro_ros_msgs__msg__Entity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Entity__rosidl_typesupport_introspection_c__Entity_message_member_array[3] = {
  {
    "entity_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs__msg__Entity, entity_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs__msg__Entity, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs__msg__Entity, types),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Entity__rosidl_typesupport_introspection_c__Entity_message_members = {
  "micro_ros_msgs__msg",  // message namespace
  "Entity",  // message name
  3,  // number of fields
  sizeof(micro_ros_msgs__msg__Entity),
  Entity__rosidl_typesupport_introspection_c__Entity_message_member_array,  // message members
  Entity__rosidl_typesupport_introspection_c__Entity_init_function,  // function to initialize message memory (memory has to be allocated)
  Entity__rosidl_typesupport_introspection_c__Entity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Entity__rosidl_typesupport_introspection_c__Entity_message_type_support_handle = {
  0,
  &Entity__rosidl_typesupport_introspection_c__Entity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_micro_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, micro_ros_msgs, msg, Entity)() {
  if (!Entity__rosidl_typesupport_introspection_c__Entity_message_type_support_handle.typesupport_identifier) {
    Entity__rosidl_typesupport_introspection_c__Entity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Entity__rosidl_typesupport_introspection_c__Entity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

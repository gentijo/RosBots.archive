// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "micro_ros_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"
#include "micro_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "micro_ros_msgs/msg/detail/graph__functions.h"
#include "micro_ros_msgs/msg/detail/graph__struct.h"


// Include directives for member types
// Member `nodes`
#include "micro_ros_msgs/msg/node.h"
// Member `nodes`
#include "micro_ros_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Graph__rosidl_typesupport_introspection_c__Graph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  micro_ros_msgs__msg__Graph__init(message_memory);
}

void Graph__rosidl_typesupport_introspection_c__Graph_fini_function(void * message_memory)
{
  micro_ros_msgs__msg__Graph__fini(message_memory);
}

size_t Graph__rosidl_typesupport_introspection_c__size_function__Node__nodes(
  const void * untyped_member)
{
  const micro_ros_msgs__msg__Node__Sequence * member =
    (const micro_ros_msgs__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * Graph__rosidl_typesupport_introspection_c__get_const_function__Node__nodes(
  const void * untyped_member, size_t index)
{
  const micro_ros_msgs__msg__Node__Sequence * member =
    (const micro_ros_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Graph__rosidl_typesupport_introspection_c__get_function__Node__nodes(
  void * untyped_member, size_t index)
{
  micro_ros_msgs__msg__Node__Sequence * member =
    (micro_ros_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Graph__rosidl_typesupport_introspection_c__resize_function__Node__nodes(
  void * untyped_member, size_t size)
{
  micro_ros_msgs__msg__Node__Sequence * member =
    (micro_ros_msgs__msg__Node__Sequence *)(untyped_member);
  micro_ros_msgs__msg__Node__Sequence__fini(member);
  return micro_ros_msgs__msg__Node__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[1] = {
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs__msg__Graph, nodes),  // bytes offset in struct
    NULL,  // default value
    Graph__rosidl_typesupport_introspection_c__size_function__Node__nodes,  // size() function pointer
    Graph__rosidl_typesupport_introspection_c__get_const_function__Node__nodes,  // get_const(index) function pointer
    Graph__rosidl_typesupport_introspection_c__get_function__Node__nodes,  // get(index) function pointer
    Graph__rosidl_typesupport_introspection_c__resize_function__Node__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Graph__rosidl_typesupport_introspection_c__Graph_message_members = {
  "micro_ros_msgs__msg",  // message namespace
  "Graph",  // message name
  1,  // number of fields
  sizeof(micro_ros_msgs__msg__Graph),
  Graph__rosidl_typesupport_introspection_c__Graph_message_member_array,  // message members
  Graph__rosidl_typesupport_introspection_c__Graph_init_function,  // function to initialize message memory (memory has to be allocated)
  Graph__rosidl_typesupport_introspection_c__Graph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle = {
  0,
  &Graph__rosidl_typesupport_introspection_c__Graph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_micro_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, micro_ros_msgs, msg, Graph)() {
  Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, micro_ros_msgs, msg, Node)();
  if (!Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle.typesupport_identifier) {
    Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

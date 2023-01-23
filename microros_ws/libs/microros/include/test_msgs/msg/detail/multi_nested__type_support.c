// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/msg/detail/multi_nested__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/msg/detail/multi_nested__functions.h"
#include "test_msgs/msg/detail/multi_nested__struct.h"


// Include directives for member types
// Member `array_of_arrays`
// Member `bounded_sequence_of_arrays`
// Member `unbounded_sequence_of_arrays`
#include "test_msgs/msg/arrays.h"
// Member `array_of_arrays`
// Member `bounded_sequence_of_arrays`
// Member `unbounded_sequence_of_arrays`
#include "test_msgs/msg/detail/arrays__rosidl_typesupport_introspection_c.h"
// Member `array_of_bounded_sequences`
// Member `bounded_sequence_of_bounded_sequences`
// Member `unbounded_sequence_of_bounded_sequences`
#include "test_msgs/msg/bounded_sequences.h"
// Member `array_of_bounded_sequences`
// Member `bounded_sequence_of_bounded_sequences`
// Member `unbounded_sequence_of_bounded_sequences`
#include "test_msgs/msg/detail/bounded_sequences__rosidl_typesupport_introspection_c.h"
// Member `array_of_unbounded_sequences`
// Member `bounded_sequence_of_unbounded_sequences`
// Member `unbounded_sequence_of_unbounded_sequences`
#include "test_msgs/msg/unbounded_sequences.h"
// Member `array_of_unbounded_sequences`
// Member `bounded_sequence_of_unbounded_sequences`
// Member `unbounded_sequence_of_unbounded_sequences`
#include "test_msgs/msg/detail/unbounded_sequences__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultiNested__rosidl_typesupport_introspection_c__MultiNested_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_msgs__msg__MultiNested__init(message_memory);
}

void MultiNested__rosidl_typesupport_introspection_c__MultiNested_fini_function(void * message_memory)
{
  test_msgs__msg__MultiNested__fini(message_memory);
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__Arrays__array_of_arrays(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__Arrays__array_of_arrays(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Arrays * member =
    (const test_msgs__msg__Arrays *)(untyped_member);
  return &member[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__Arrays__array_of_arrays(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Arrays * member =
    (test_msgs__msg__Arrays *)(untyped_member);
  return &member[index];
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__BoundedSequences__array_of_bounded_sequences(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__BoundedSequences__array_of_bounded_sequences(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BoundedSequences * member =
    (const test_msgs__msg__BoundedSequences *)(untyped_member);
  return &member[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__BoundedSequences__array_of_bounded_sequences(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BoundedSequences * member =
    (test_msgs__msg__BoundedSequences *)(untyped_member);
  return &member[index];
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__UnboundedSequences__array_of_unbounded_sequences(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__UnboundedSequences__array_of_unbounded_sequences(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__UnboundedSequences * member =
    (const test_msgs__msg__UnboundedSequences *)(untyped_member);
  return &member[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__UnboundedSequences__array_of_unbounded_sequences(
  void * untyped_member, size_t index)
{
  test_msgs__msg__UnboundedSequences * member =
    (test_msgs__msg__UnboundedSequences *)(untyped_member);
  return &member[index];
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__Arrays__bounded_sequence_of_arrays(
  const void * untyped_member)
{
  const test_msgs__msg__Arrays__Sequence * member =
    (const test_msgs__msg__Arrays__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__Arrays__bounded_sequence_of_arrays(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Arrays__Sequence * member =
    (const test_msgs__msg__Arrays__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__Arrays__bounded_sequence_of_arrays(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Arrays__Sequence * member =
    (test_msgs__msg__Arrays__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiNested__rosidl_typesupport_introspection_c__resize_function__Arrays__bounded_sequence_of_arrays(
  void * untyped_member, size_t size)
{
  test_msgs__msg__Arrays__Sequence * member =
    (test_msgs__msg__Arrays__Sequence *)(untyped_member);
  test_msgs__msg__Arrays__Sequence__fini(member);
  return test_msgs__msg__Arrays__Sequence__init(member, size);
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__BoundedSequences__bounded_sequence_of_bounded_sequences(
  const void * untyped_member)
{
  const test_msgs__msg__BoundedSequences__Sequence * member =
    (const test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__BoundedSequences__bounded_sequence_of_bounded_sequences(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BoundedSequences__Sequence * member =
    (const test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__BoundedSequences__bounded_sequence_of_bounded_sequences(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BoundedSequences__Sequence * member =
    (test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiNested__rosidl_typesupport_introspection_c__resize_function__BoundedSequences__bounded_sequence_of_bounded_sequences(
  void * untyped_member, size_t size)
{
  test_msgs__msg__BoundedSequences__Sequence * member =
    (test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  test_msgs__msg__BoundedSequences__Sequence__fini(member);
  return test_msgs__msg__BoundedSequences__Sequence__init(member, size);
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences(
  const void * untyped_member)
{
  const test_msgs__msg__UnboundedSequences__Sequence * member =
    (const test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__UnboundedSequences__Sequence * member =
    (const test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences(
  void * untyped_member, size_t index)
{
  test_msgs__msg__UnboundedSequences__Sequence * member =
    (test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiNested__rosidl_typesupport_introspection_c__resize_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences(
  void * untyped_member, size_t size)
{
  test_msgs__msg__UnboundedSequences__Sequence * member =
    (test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  test_msgs__msg__UnboundedSequences__Sequence__fini(member);
  return test_msgs__msg__UnboundedSequences__Sequence__init(member, size);
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__Arrays__unbounded_sequence_of_arrays(
  const void * untyped_member)
{
  const test_msgs__msg__Arrays__Sequence * member =
    (const test_msgs__msg__Arrays__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__Arrays__unbounded_sequence_of_arrays(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Arrays__Sequence * member =
    (const test_msgs__msg__Arrays__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__Arrays__unbounded_sequence_of_arrays(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Arrays__Sequence * member =
    (test_msgs__msg__Arrays__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiNested__rosidl_typesupport_introspection_c__resize_function__Arrays__unbounded_sequence_of_arrays(
  void * untyped_member, size_t size)
{
  test_msgs__msg__Arrays__Sequence * member =
    (test_msgs__msg__Arrays__Sequence *)(untyped_member);
  test_msgs__msg__Arrays__Sequence__fini(member);
  return test_msgs__msg__Arrays__Sequence__init(member, size);
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__BoundedSequences__unbounded_sequence_of_bounded_sequences(
  const void * untyped_member)
{
  const test_msgs__msg__BoundedSequences__Sequence * member =
    (const test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__BoundedSequences__unbounded_sequence_of_bounded_sequences(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BoundedSequences__Sequence * member =
    (const test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__BoundedSequences__unbounded_sequence_of_bounded_sequences(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BoundedSequences__Sequence * member =
    (test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiNested__rosidl_typesupport_introspection_c__resize_function__BoundedSequences__unbounded_sequence_of_bounded_sequences(
  void * untyped_member, size_t size)
{
  test_msgs__msg__BoundedSequences__Sequence * member =
    (test_msgs__msg__BoundedSequences__Sequence *)(untyped_member);
  test_msgs__msg__BoundedSequences__Sequence__fini(member);
  return test_msgs__msg__BoundedSequences__Sequence__init(member, size);
}

size_t MultiNested__rosidl_typesupport_introspection_c__size_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences(
  const void * untyped_member)
{
  const test_msgs__msg__UnboundedSequences__Sequence * member =
    (const test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiNested__rosidl_typesupport_introspection_c__get_const_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__UnboundedSequences__Sequence * member =
    (const test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiNested__rosidl_typesupport_introspection_c__get_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences(
  void * untyped_member, size_t index)
{
  test_msgs__msg__UnboundedSequences__Sequence * member =
    (test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiNested__rosidl_typesupport_introspection_c__resize_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences(
  void * untyped_member, size_t size)
{
  test_msgs__msg__UnboundedSequences__Sequence * member =
    (test_msgs__msg__UnboundedSequences__Sequence *)(untyped_member);
  test_msgs__msg__UnboundedSequences__Sequence__fini(member);
  return test_msgs__msg__UnboundedSequences__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[9] = {
  {
    "array_of_arrays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, array_of_arrays),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__Arrays__array_of_arrays,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__Arrays__array_of_arrays,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__Arrays__array_of_arrays,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "array_of_bounded_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, array_of_bounded_sequences),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__BoundedSequences__array_of_bounded_sequences,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__BoundedSequences__array_of_bounded_sequences,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__BoundedSequences__array_of_bounded_sequences,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "array_of_unbounded_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, array_of_unbounded_sequences),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__UnboundedSequences__array_of_unbounded_sequences,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__UnboundedSequences__array_of_unbounded_sequences,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__UnboundedSequences__array_of_unbounded_sequences,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_arrays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, bounded_sequence_of_arrays),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__Arrays__bounded_sequence_of_arrays,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__Arrays__bounded_sequence_of_arrays,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__Arrays__bounded_sequence_of_arrays,  // get(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__resize_function__Arrays__bounded_sequence_of_arrays  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_bounded_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, bounded_sequence_of_bounded_sequences),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__BoundedSequences__bounded_sequence_of_bounded_sequences,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__BoundedSequences__bounded_sequence_of_bounded_sequences,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__BoundedSequences__bounded_sequence_of_bounded_sequences,  // get(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__resize_function__BoundedSequences__bounded_sequence_of_bounded_sequences  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_unbounded_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, bounded_sequence_of_unbounded_sequences),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences,  // get(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__resize_function__UnboundedSequences__bounded_sequence_of_unbounded_sequences  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_arrays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, unbounded_sequence_of_arrays),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__Arrays__unbounded_sequence_of_arrays,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__Arrays__unbounded_sequence_of_arrays,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__Arrays__unbounded_sequence_of_arrays,  // get(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__resize_function__Arrays__unbounded_sequence_of_arrays  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_bounded_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, unbounded_sequence_of_bounded_sequences),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__BoundedSequences__unbounded_sequence_of_bounded_sequences,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__BoundedSequences__unbounded_sequence_of_bounded_sequences,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__BoundedSequences__unbounded_sequence_of_bounded_sequences,  // get(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__resize_function__BoundedSequences__unbounded_sequence_of_bounded_sequences  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_unbounded_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__MultiNested, unbounded_sequence_of_unbounded_sequences),  // bytes offset in struct
    NULL,  // default value
    MultiNested__rosidl_typesupport_introspection_c__size_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences,  // size() function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_const_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences,  // get_const(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__get_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences,  // get(index) function pointer
    MultiNested__rosidl_typesupport_introspection_c__resize_function__UnboundedSequences__unbounded_sequence_of_unbounded_sequences  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_members = {
  "test_msgs__msg",  // message namespace
  "MultiNested",  // message name
  9,  // number of fields
  sizeof(test_msgs__msg__MultiNested),
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array,  // message members
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_type_support_handle = {
  0,
  &MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, MultiNested)() {
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Arrays)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedSequences)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, UnboundedSequences)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Arrays)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedSequences)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, UnboundedSequences)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Arrays)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedSequences)();
  MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, UnboundedSequences)();
  if (!MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_type_support_handle.typesupport_identifier) {
    MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiNested__rosidl_typesupport_introspection_c__MultiNested_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

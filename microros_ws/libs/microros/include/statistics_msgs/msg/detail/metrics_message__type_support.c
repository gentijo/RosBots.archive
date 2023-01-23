// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "statistics_msgs/msg/detail/metrics_message__rosidl_typesupport_introspection_c.h"
#include "statistics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "statistics_msgs/msg/detail/metrics_message__functions.h"
#include "statistics_msgs/msg/detail/metrics_message__struct.h"


// Include directives for member types
// Member `measurement_source_name`
// Member `metrics_source`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `window_start`
// Member `window_stop`
#include "builtin_interfaces/msg/time.h"
// Member `window_start`
// Member `window_stop`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `statistics`
#include "statistics_msgs/msg/statistic_data_point.h"
// Member `statistics`
#include "statistics_msgs/msg/detail/statistic_data_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  statistics_msgs__msg__MetricsMessage__init(message_memory);
}

void MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_fini_function(void * message_memory)
{
  statistics_msgs__msg__MetricsMessage__fini(message_memory);
}

size_t MetricsMessage__rosidl_typesupport_introspection_c__size_function__StatisticDataPoint__statistics(
  const void * untyped_member)
{
  const statistics_msgs__msg__StatisticDataPoint__Sequence * member =
    (const statistics_msgs__msg__StatisticDataPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * MetricsMessage__rosidl_typesupport_introspection_c__get_const_function__StatisticDataPoint__statistics(
  const void * untyped_member, size_t index)
{
  const statistics_msgs__msg__StatisticDataPoint__Sequence * member =
    (const statistics_msgs__msg__StatisticDataPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MetricsMessage__rosidl_typesupport_introspection_c__get_function__StatisticDataPoint__statistics(
  void * untyped_member, size_t index)
{
  statistics_msgs__msg__StatisticDataPoint__Sequence * member =
    (statistics_msgs__msg__StatisticDataPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MetricsMessage__rosidl_typesupport_introspection_c__resize_function__StatisticDataPoint__statistics(
  void * untyped_member, size_t size)
{
  statistics_msgs__msg__StatisticDataPoint__Sequence * member =
    (statistics_msgs__msg__StatisticDataPoint__Sequence *)(untyped_member);
  statistics_msgs__msg__StatisticDataPoint__Sequence__fini(member);
  return statistics_msgs__msg__StatisticDataPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_member_array[6] = {
  {
    "measurement_source_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(statistics_msgs__msg__MetricsMessage, measurement_source_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metrics_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(statistics_msgs__msg__MetricsMessage, metrics_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(statistics_msgs__msg__MetricsMessage, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "window_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(statistics_msgs__msg__MetricsMessage, window_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "window_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(statistics_msgs__msg__MetricsMessage, window_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statistics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(statistics_msgs__msg__MetricsMessage, statistics),  // bytes offset in struct
    NULL,  // default value
    MetricsMessage__rosidl_typesupport_introspection_c__size_function__StatisticDataPoint__statistics,  // size() function pointer
    MetricsMessage__rosidl_typesupport_introspection_c__get_const_function__StatisticDataPoint__statistics,  // get_const(index) function pointer
    MetricsMessage__rosidl_typesupport_introspection_c__get_function__StatisticDataPoint__statistics,  // get(index) function pointer
    MetricsMessage__rosidl_typesupport_introspection_c__resize_function__StatisticDataPoint__statistics  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_members = {
  "statistics_msgs__msg",  // message namespace
  "MetricsMessage",  // message name
  6,  // number of fields
  sizeof(statistics_msgs__msg__MetricsMessage),
  MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_member_array,  // message members
  MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_type_support_handle = {
  0,
  &MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_statistics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, statistics_msgs, msg, MetricsMessage)() {
  MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, statistics_msgs, msg, StatisticDataPoint)();
  if (!MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_type_support_handle.typesupport_identifier) {
    MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MetricsMessage__rosidl_typesupport_introspection_c__MetricsMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

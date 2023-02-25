// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "composition_interfaces/srv/detail/list_nodes__rosidl_typesupport_introspection_c.h"
#include "composition_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "composition_interfaces/srv/detail/list_nodes__functions.h"
#include "composition_interfaces/srv/detail/list_nodes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  composition_interfaces__srv__ListNodes_Request__init(message_memory);
}

void ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_fini_function(void * message_memory)
{
  composition_interfaces__srv__ListNodes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition_interfaces__srv__ListNodes_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_members = {
  "composition_interfaces__srv",  // message namespace
  "ListNodes_Request",  // message name
  1,  // number of fields
  sizeof(composition_interfaces__srv__ListNodes_Request),
  ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_member_array,  // message members
  ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_type_support_handle = {
  0,
  &ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes_Request)() {
  if (!ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_type_support_handle.typesupport_identifier) {
    ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListNodes_Request__rosidl_typesupport_introspection_c__ListNodes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__functions.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__struct.h"


// Include directives for member types
// Member `full_node_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `unique_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  composition_interfaces__srv__ListNodes_Response__init(message_memory);
}

void ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_fini_function(void * message_memory)
{
  composition_interfaces__srv__ListNodes_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_member_array[2] = {
  {
    "full_node_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition_interfaces__srv__ListNodes_Response, full_node_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unique_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition_interfaces__srv__ListNodes_Response, unique_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_members = {
  "composition_interfaces__srv",  // message namespace
  "ListNodes_Response",  // message name
  2,  // number of fields
  sizeof(composition_interfaces__srv__ListNodes_Response),
  ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_member_array,  // message members
  ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_type_support_handle = {
  0,
  &ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes_Response)() {
  if (!ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_type_support_handle.typesupport_identifier) {
    ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListNodes_Response__rosidl_typesupport_introspection_c__ListNodes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_members = {
  "composition_interfaces__srv",  // service namespace
  "ListNodes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_Request_message_type_support_handle,
  NULL  // response message
  // composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_Response_message_type_support_handle
};

static rosidl_service_type_support_t composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_type_support_handle = {
  0,
  &composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes)() {
  if (!composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_type_support_handle.typesupport_identifier) {
    composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, ListNodes_Response)()->data;
  }

  return &composition_interfaces__srv__detail__list_nodes__rosidl_typesupport_introspection_c__ListNodes_service_type_support_handle;
}

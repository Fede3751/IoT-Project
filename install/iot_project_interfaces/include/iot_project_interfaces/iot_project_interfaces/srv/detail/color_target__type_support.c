// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iot_project_interfaces:srv/ColorTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iot_project_interfaces/srv/detail/color_target__rosidl_typesupport_introspection_c.h"
#include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iot_project_interfaces/srv/detail/color_target__functions.h"
#include "iot_project_interfaces/srv/detail/color_target__struct.h"


// Include directives for member types
// Member `target`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__srv__ColorTarget_Request__init(message_memory);
}

void iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_fini_function(void * message_memory)
{
  iot_project_interfaces__srv__ColorTarget_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_member_array[5] = {
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__srv__ColorTarget_Request, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__srv__ColorTarget_Request, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__srv__ColorTarget_Request, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__srv__ColorTarget_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__srv__ColorTarget_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_members = {
  "iot_project_interfaces__srv",  // message namespace
  "ColorTarget_Request",  // message name
  5,  // number of fields
  sizeof(iot_project_interfaces__srv__ColorTarget_Request),
  iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_member_array,  // message members
  iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_type_support_handle = {
  0,
  &iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget_Request)() {
  if (!iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__srv__ColorTarget_Request__rosidl_typesupport_introspection_c__ColorTarget_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/srv/detail/color_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/srv/detail/color_target__functions.h"
// already included above
// #include "iot_project_interfaces/srv/detail/color_target__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__srv__ColorTarget_Response__init(message_memory);
}

void iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_fini_function(void * message_memory)
{
  iot_project_interfaces__srv__ColorTarget_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__srv__ColorTarget_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_members = {
  "iot_project_interfaces__srv",  // message namespace
  "ColorTarget_Response",  // message name
  1,  // number of fields
  sizeof(iot_project_interfaces__srv__ColorTarget_Response),
  iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_member_array,  // message members
  iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_type_support_handle = {
  0,
  &iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget_Response)() {
  if (!iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__srv__ColorTarget_Response__rosidl_typesupport_introspection_c__ColorTarget_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iot_project_interfaces/srv/detail/color_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_members = {
  "iot_project_interfaces__srv",  // service namespace
  "ColorTarget",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_Request_message_type_support_handle,
  NULL  // response message
  // iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_Response_message_type_support_handle
};

static rosidl_service_type_support_t iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_type_support_handle = {
  0,
  &iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget)() {
  if (!iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, srv, ColorTarget_Response)()->data;
  }

  return &iot_project_interfaces__srv__detail__color_target__rosidl_typesupport_introspection_c__ColorTarget_service_type_support_handle;
}

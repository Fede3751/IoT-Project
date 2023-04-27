// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iot_project_interfaces/srv/detail/target_manager_interface__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace iot_project_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TargetManagerInterface_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iot_project_interfaces::srv::TargetManagerInterface_Request(_init);
}

void TargetManagerInterface_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iot_project_interfaces::srv::TargetManagerInterface_Request *>(message_memory);
  typed_message->~TargetManagerInterface_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetManagerInterface_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces::srv::TargetManagerInterface_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetManagerInterface_Request_message_members = {
  "iot_project_interfaces::srv",  // message namespace
  "TargetManagerInterface_Request",  // message name
  1,  // number of fields
  sizeof(iot_project_interfaces::srv::TargetManagerInterface_Request),
  TargetManagerInterface_Request_message_member_array,  // message members
  TargetManagerInterface_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetManagerInterface_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetManagerInterface_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetManagerInterface_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace iot_project_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iot_project_interfaces::srv::TargetManagerInterface_Request>()
{
  return &::iot_project_interfaces::srv::rosidl_typesupport_introspection_cpp::TargetManagerInterface_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iot_project_interfaces, srv, TargetManagerInterface_Request)() {
  return &::iot_project_interfaces::srv::rosidl_typesupport_introspection_cpp::TargetManagerInterface_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "iot_project_interfaces/srv/detail/target_manager_interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace iot_project_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TargetManagerInterface_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iot_project_interfaces::srv::TargetManagerInterface_Response(_init);
}

void TargetManagerInterface_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iot_project_interfaces::srv::TargetManagerInterface_Response *>(message_memory);
  typed_message->~TargetManagerInterface_Response();
}

size_t size_function__TargetManagerInterface_Response__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TargetManagerInterface_Response__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetManagerInterface_Response__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetManagerInterface_Response__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__TargetManagerInterface_Response__targets(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__TargetManagerInterface_Response__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__TargetManagerInterface_Response__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__TargetManagerInterface_Response__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TargetManagerInterface_Response__expiration_times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TargetManagerInterface_Response__expiration_times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetManagerInterface_Response__expiration_times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetManagerInterface_Response__expiration_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TargetManagerInterface_Response__expiration_times(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TargetManagerInterface_Response__expiration_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TargetManagerInterface_Response__expiration_times(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TargetManagerInterface_Response__expiration_times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TargetManagerInterface_Response__last_visits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TargetManagerInterface_Response__last_visits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetManagerInterface_Response__last_visits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetManagerInterface_Response__last_visits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TargetManagerInterface_Response__last_visits(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TargetManagerInterface_Response__last_visits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TargetManagerInterface_Response__last_visits(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TargetManagerInterface_Response__last_visits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetManagerInterface_Response_message_member_array[3] = {
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces::srv::TargetManagerInterface_Response, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetManagerInterface_Response__targets,  // size() function pointer
    get_const_function__TargetManagerInterface_Response__targets,  // get_const(index) function pointer
    get_function__TargetManagerInterface_Response__targets,  // get(index) function pointer
    fetch_function__TargetManagerInterface_Response__targets,  // fetch(index, &value) function pointer
    assign_function__TargetManagerInterface_Response__targets,  // assign(index, value) function pointer
    resize_function__TargetManagerInterface_Response__targets  // resize(index) function pointer
  },
  {
    "expiration_times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces::srv::TargetManagerInterface_Response, expiration_times),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetManagerInterface_Response__expiration_times,  // size() function pointer
    get_const_function__TargetManagerInterface_Response__expiration_times,  // get_const(index) function pointer
    get_function__TargetManagerInterface_Response__expiration_times,  // get(index) function pointer
    fetch_function__TargetManagerInterface_Response__expiration_times,  // fetch(index, &value) function pointer
    assign_function__TargetManagerInterface_Response__expiration_times,  // assign(index, value) function pointer
    resize_function__TargetManagerInterface_Response__expiration_times  // resize(index) function pointer
  },
  {
    "last_visits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces::srv::TargetManagerInterface_Response, last_visits),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetManagerInterface_Response__last_visits,  // size() function pointer
    get_const_function__TargetManagerInterface_Response__last_visits,  // get_const(index) function pointer
    get_function__TargetManagerInterface_Response__last_visits,  // get(index) function pointer
    fetch_function__TargetManagerInterface_Response__last_visits,  // fetch(index, &value) function pointer
    assign_function__TargetManagerInterface_Response__last_visits,  // assign(index, value) function pointer
    resize_function__TargetManagerInterface_Response__last_visits  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetManagerInterface_Response_message_members = {
  "iot_project_interfaces::srv",  // message namespace
  "TargetManagerInterface_Response",  // message name
  3,  // number of fields
  sizeof(iot_project_interfaces::srv::TargetManagerInterface_Response),
  TargetManagerInterface_Response_message_member_array,  // message members
  TargetManagerInterface_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetManagerInterface_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetManagerInterface_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetManagerInterface_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace iot_project_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iot_project_interfaces::srv::TargetManagerInterface_Response>()
{
  return &::iot_project_interfaces::srv::rosidl_typesupport_introspection_cpp::TargetManagerInterface_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iot_project_interfaces, srv, TargetManagerInterface_Response)() {
  return &::iot_project_interfaces::srv::rosidl_typesupport_introspection_cpp::TargetManagerInterface_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "iot_project_interfaces/srv/detail/target_manager_interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace iot_project_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TargetManagerInterface_service_members = {
  "iot_project_interfaces::srv",  // service namespace
  "TargetManagerInterface",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<iot_project_interfaces::srv::TargetManagerInterface>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TargetManagerInterface_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetManagerInterface_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace iot_project_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<iot_project_interfaces::srv::TargetManagerInterface>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::iot_project_interfaces::srv::rosidl_typesupport_introspection_cpp::TargetManagerInterface_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::iot_project_interfaces::srv::TargetManagerInterface_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::iot_project_interfaces::srv::TargetManagerInterface_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iot_project_interfaces, srv, TargetManagerInterface)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<iot_project_interfaces::srv::TargetManagerInterface>();
}

#ifdef __cplusplus
}
#endif

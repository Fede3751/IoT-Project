// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__BUILDER_HPP_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iot_project_interfaces/srv/detail/target_manager_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iot_project_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::srv::TargetManagerInterface_Request>()
{
  return ::iot_project_interfaces::srv::TargetManagerInterface_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetManagerInterface_Response_last_visits
{
public:
  explicit Init_TargetManagerInterface_Response_last_visits(::iot_project_interfaces::srv::TargetManagerInterface_Response & msg)
  : msg_(msg)
  {}
  ::iot_project_interfaces::srv::TargetManagerInterface_Response last_visits(::iot_project_interfaces::srv::TargetManagerInterface_Response::_last_visits_type arg)
  {
    msg_.last_visits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::srv::TargetManagerInterface_Response msg_;
};

class Init_TargetManagerInterface_Response_expiration_times
{
public:
  explicit Init_TargetManagerInterface_Response_expiration_times(::iot_project_interfaces::srv::TargetManagerInterface_Response & msg)
  : msg_(msg)
  {}
  Init_TargetManagerInterface_Response_last_visits expiration_times(::iot_project_interfaces::srv::TargetManagerInterface_Response::_expiration_times_type arg)
  {
    msg_.expiration_times = std::move(arg);
    return Init_TargetManagerInterface_Response_last_visits(msg_);
  }

private:
  ::iot_project_interfaces::srv::TargetManagerInterface_Response msg_;
};

class Init_TargetManagerInterface_Response_targets
{
public:
  Init_TargetManagerInterface_Response_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetManagerInterface_Response_expiration_times targets(::iot_project_interfaces::srv::TargetManagerInterface_Response::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_TargetManagerInterface_Response_expiration_times(msg_);
  }

private:
  ::iot_project_interfaces::srv::TargetManagerInterface_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::srv::TargetManagerInterface_Response>()
{
  return iot_project_interfaces::srv::builder::Init_TargetManagerInterface_Response_targets();
}

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__BUILDER_HPP_

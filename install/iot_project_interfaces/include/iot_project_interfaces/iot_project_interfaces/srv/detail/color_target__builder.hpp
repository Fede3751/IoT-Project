// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iot_project_interfaces:srv/ColorTarget.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__COLOR_TARGET__BUILDER_HPP_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__COLOR_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iot_project_interfaces/srv/detail/color_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iot_project_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColorTarget_Request_a
{
public:
  explicit Init_ColorTarget_Request_a(::iot_project_interfaces::srv::ColorTarget_Request & msg)
  : msg_(msg)
  {}
  ::iot_project_interfaces::srv::ColorTarget_Request a(::iot_project_interfaces::srv::ColorTarget_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::srv::ColorTarget_Request msg_;
};

class Init_ColorTarget_Request_b
{
public:
  explicit Init_ColorTarget_Request_b(::iot_project_interfaces::srv::ColorTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ColorTarget_Request_a b(::iot_project_interfaces::srv::ColorTarget_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_ColorTarget_Request_a(msg_);
  }

private:
  ::iot_project_interfaces::srv::ColorTarget_Request msg_;
};

class Init_ColorTarget_Request_g
{
public:
  explicit Init_ColorTarget_Request_g(::iot_project_interfaces::srv::ColorTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ColorTarget_Request_b g(::iot_project_interfaces::srv::ColorTarget_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_ColorTarget_Request_b(msg_);
  }

private:
  ::iot_project_interfaces::srv::ColorTarget_Request msg_;
};

class Init_ColorTarget_Request_r
{
public:
  explicit Init_ColorTarget_Request_r(::iot_project_interfaces::srv::ColorTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ColorTarget_Request_g r(::iot_project_interfaces::srv::ColorTarget_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ColorTarget_Request_g(msg_);
  }

private:
  ::iot_project_interfaces::srv::ColorTarget_Request msg_;
};

class Init_ColorTarget_Request_target
{
public:
  Init_ColorTarget_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorTarget_Request_r target(::iot_project_interfaces::srv::ColorTarget_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_ColorTarget_Request_r(msg_);
  }

private:
  ::iot_project_interfaces::srv::ColorTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::srv::ColorTarget_Request>()
{
  return iot_project_interfaces::srv::builder::Init_ColorTarget_Request_target();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColorTarget_Response_result
{
public:
  Init_ColorTarget_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iot_project_interfaces::srv::ColorTarget_Response result(::iot_project_interfaces::srv::ColorTarget_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::srv::ColorTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::srv::ColorTarget_Response>()
{
  return iot_project_interfaces::srv::builder::Init_ColorTarget_Response_result();
}

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__COLOR_TARGET__BUILDER_HPP_

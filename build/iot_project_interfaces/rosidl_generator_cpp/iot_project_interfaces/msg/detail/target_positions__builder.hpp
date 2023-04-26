// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iot_project_interfaces:msg/TargetPositions.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__BUILDER_HPP_
#define IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iot_project_interfaces/msg/detail/target_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iot_project_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetPositions_positions
{
public:
  Init_TargetPositions_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iot_project_interfaces::msg::TargetPositions positions(::iot_project_interfaces::msg::TargetPositions::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::msg::TargetPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::msg::TargetPositions>()
{
  return iot_project_interfaces::msg::builder::Init_TargetPositions_positions();
}

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__BUILDER_HPP_

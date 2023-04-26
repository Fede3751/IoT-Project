// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iot_project_interfaces:msg/TargetPositions.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__STRUCT_HPP_
#define IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'positions'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__msg__TargetPositions __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__msg__TargetPositions __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetPositions_
{
  using Type = TargetPositions_<ContainerAllocator>;

  explicit TargetPositions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TargetPositions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::msg::TargetPositions_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::msg::TargetPositions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::msg::TargetPositions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::msg::TargetPositions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__msg__TargetPositions
    std::shared_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__msg__TargetPositions
    std::shared_ptr<iot_project_interfaces::msg::TargetPositions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPositions_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPositions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPositions_

// alias to use template instance with default allocator
using TargetPositions =
  iot_project_interfaces::msg::TargetPositions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__STRUCT_HPP_

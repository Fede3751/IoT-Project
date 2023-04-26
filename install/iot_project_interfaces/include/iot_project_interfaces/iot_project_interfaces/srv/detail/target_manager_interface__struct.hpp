// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__STRUCT_HPP_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'targets'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Request __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Request __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetManagerInterface_Request_
{
  using Type = TargetManagerInterface_Request_<ContainerAllocator>;

  explicit TargetManagerInterface_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TargetManagerInterface_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Request
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Request
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetManagerInterface_Request_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetManagerInterface_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetManagerInterface_Request_

// alias to use template instance with default allocator
using TargetManagerInterface_Request =
  iot_project_interfaces::srv::TargetManagerInterface_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iot_project_interfaces


// Include directives for member types
// Member 'targets'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Response __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Response __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetManagerInterface_Response_
{
  using Type = TargetManagerInterface_Response_<ContainerAllocator>;

  explicit TargetManagerInterface_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TargetManagerInterface_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _targets_type targets;
  using _last_visits_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _last_visits_type last_visits;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }
  Type & set__last_visits(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->last_visits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Response
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__srv__TargetManagerInterface_Response
    std::shared_ptr<iot_project_interfaces::srv::TargetManagerInterface_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetManagerInterface_Response_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    if (this->last_visits != other.last_visits) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetManagerInterface_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetManagerInterface_Response_

// alias to use template instance with default allocator
using TargetManagerInterface_Response =
  iot_project_interfaces::srv::TargetManagerInterface_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iot_project_interfaces

namespace iot_project_interfaces
{

namespace srv
{

struct TargetManagerInterface
{
  using Request = iot_project_interfaces::srv::TargetManagerInterface_Request;
  using Response = iot_project_interfaces::srv::TargetManagerInterface_Response;
};

}  // namespace srv

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__STRUCT_HPP_

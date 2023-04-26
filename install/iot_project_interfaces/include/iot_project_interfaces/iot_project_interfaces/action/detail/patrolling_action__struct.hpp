// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iot_project_interfaces:action/PatrollingAction.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__STRUCT_HPP_
#define IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__STRUCT_HPP_

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
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_Goal __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_Goal_
{
  using Type = PatrollingAction_Goal_<ContainerAllocator>;

  explicit PatrollingAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PatrollingAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_Goal
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_Goal
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_Goal_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_Goal_

// alias to use template instance with default allocator
using PatrollingAction_Goal =
  iot_project_interfaces::action::PatrollingAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces


#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_Result __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_Result_
{
  using Type = PatrollingAction_Result_<ContainerAllocator>;

  explicit PatrollingAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = "";
    }
  }

  explicit PatrollingAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : progress(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = "";
    }
  }

  // field types and members
  using _progress_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__progress(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_Result
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_Result
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_Result_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_Result_

// alias to use template instance with default allocator
using PatrollingAction_Result =
  iot_project_interfaces::action::PatrollingAction_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces


#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_Feedback __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_Feedback_
{
  using Type = PatrollingAction_Feedback_<ContainerAllocator>;

  explicit PatrollingAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = "";
    }
  }

  explicit PatrollingAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = "";
    }
  }

  // field types and members
  using _success_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_Feedback
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_Feedback
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_Feedback_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_Feedback_

// alias to use template instance with default allocator
using PatrollingAction_Feedback =
  iot_project_interfaces::action::PatrollingAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "iot_project_interfaces/action/detail/patrolling_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Request __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_SendGoal_Request_
{
  using Type = PatrollingAction_SendGoal_Request_<ContainerAllocator>;

  explicit PatrollingAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PatrollingAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const iot_project_interfaces::action::PatrollingAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Request
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Request
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_SendGoal_Request_

// alias to use template instance with default allocator
using PatrollingAction_SendGoal_Request =
  iot_project_interfaces::action::PatrollingAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Response __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_SendGoal_Response_
{
  using Type = PatrollingAction_SendGoal_Response_<ContainerAllocator>;

  explicit PatrollingAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PatrollingAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Response
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_SendGoal_Response
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_SendGoal_Response_

// alias to use template instance with default allocator
using PatrollingAction_SendGoal_Response =
  iot_project_interfaces::action::PatrollingAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces

namespace iot_project_interfaces
{

namespace action
{

struct PatrollingAction_SendGoal
{
  using Request = iot_project_interfaces::action::PatrollingAction_SendGoal_Request;
  using Response = iot_project_interfaces::action::PatrollingAction_SendGoal_Response;
};

}  // namespace action

}  // namespace iot_project_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Request __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_GetResult_Request_
{
  using Type = PatrollingAction_GetResult_Request_<ContainerAllocator>;

  explicit PatrollingAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PatrollingAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Request
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Request
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_GetResult_Request_

// alias to use template instance with default allocator
using PatrollingAction_GetResult_Request =
  iot_project_interfaces::action::PatrollingAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Response __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_GetResult_Response_
{
  using Type = PatrollingAction_GetResult_Response_<ContainerAllocator>;

  explicit PatrollingAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PatrollingAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const iot_project_interfaces::action::PatrollingAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Response
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_GetResult_Response
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_GetResult_Response_

// alias to use template instance with default allocator
using PatrollingAction_GetResult_Response =
  iot_project_interfaces::action::PatrollingAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces

namespace iot_project_interfaces
{

namespace action
{

struct PatrollingAction_GetResult
{
  using Request = iot_project_interfaces::action::PatrollingAction_GetResult_Request;
  using Response = iot_project_interfaces::action::PatrollingAction_GetResult_Response;
};

}  // namespace action

}  // namespace iot_project_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__iot_project_interfaces__action__PatrollingAction_FeedbackMessage __declspec(deprecated)
#endif

namespace iot_project_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PatrollingAction_FeedbackMessage_
{
  using Type = PatrollingAction_FeedbackMessage_<ContainerAllocator>;

  explicit PatrollingAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PatrollingAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const iot_project_interfaces::action::PatrollingAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_FeedbackMessage
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iot_project_interfaces__action__PatrollingAction_FeedbackMessage
    std::shared_ptr<iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrollingAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrollingAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrollingAction_FeedbackMessage_

// alias to use template instance with default allocator
using PatrollingAction_FeedbackMessage =
  iot_project_interfaces::action::PatrollingAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iot_project_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace iot_project_interfaces
{

namespace action
{

struct PatrollingAction
{
  /// The goal message defined in the action definition.
  using Goal = iot_project_interfaces::action::PatrollingAction_Goal;
  /// The result message defined in the action definition.
  using Result = iot_project_interfaces::action::PatrollingAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = iot_project_interfaces::action::PatrollingAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = iot_project_interfaces::action::PatrollingAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = iot_project_interfaces::action::PatrollingAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = iot_project_interfaces::action::PatrollingAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PatrollingAction PatrollingAction;

}  // namespace action

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__STRUCT_HPP_

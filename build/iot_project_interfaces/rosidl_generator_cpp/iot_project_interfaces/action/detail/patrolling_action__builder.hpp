// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iot_project_interfaces:action/PatrollingAction.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__BUILDER_HPP_
#define IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iot_project_interfaces/action/detail/patrolling_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_Goal_targets
{
public:
  Init_PatrollingAction_Goal_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iot_project_interfaces::action::PatrollingAction_Goal targets(::iot_project_interfaces::action::PatrollingAction_Goal::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_Goal>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_Goal_targets();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_Result_progress
{
public:
  Init_PatrollingAction_Result_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iot_project_interfaces::action::PatrollingAction_Result progress(::iot_project_interfaces::action::PatrollingAction_Result::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_Result>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_Result_progress();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_Feedback_success
{
public:
  Init_PatrollingAction_Feedback_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iot_project_interfaces::action::PatrollingAction_Feedback success(::iot_project_interfaces::action::PatrollingAction_Feedback::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_Feedback>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_Feedback_success();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_SendGoal_Request_goal
{
public:
  explicit Init_PatrollingAction_SendGoal_Request_goal(::iot_project_interfaces::action::PatrollingAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::iot_project_interfaces::action::PatrollingAction_SendGoal_Request goal(::iot_project_interfaces::action::PatrollingAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_SendGoal_Request msg_;
};

class Init_PatrollingAction_SendGoal_Request_goal_id
{
public:
  Init_PatrollingAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrollingAction_SendGoal_Request_goal goal_id(::iot_project_interfaces::action::PatrollingAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PatrollingAction_SendGoal_Request_goal(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_SendGoal_Request>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_SendGoal_Request_goal_id();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_SendGoal_Response_stamp
{
public:
  explicit Init_PatrollingAction_SendGoal_Response_stamp(::iot_project_interfaces::action::PatrollingAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::iot_project_interfaces::action::PatrollingAction_SendGoal_Response stamp(::iot_project_interfaces::action::PatrollingAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_SendGoal_Response msg_;
};

class Init_PatrollingAction_SendGoal_Response_accepted
{
public:
  Init_PatrollingAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrollingAction_SendGoal_Response_stamp accepted(::iot_project_interfaces::action::PatrollingAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PatrollingAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_SendGoal_Response>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_SendGoal_Response_accepted();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_GetResult_Request_goal_id
{
public:
  Init_PatrollingAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iot_project_interfaces::action::PatrollingAction_GetResult_Request goal_id(::iot_project_interfaces::action::PatrollingAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_GetResult_Request>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_GetResult_Request_goal_id();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_GetResult_Response_result
{
public:
  explicit Init_PatrollingAction_GetResult_Response_result(::iot_project_interfaces::action::PatrollingAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::iot_project_interfaces::action::PatrollingAction_GetResult_Response result(::iot_project_interfaces::action::PatrollingAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_GetResult_Response msg_;
};

class Init_PatrollingAction_GetResult_Response_status
{
public:
  Init_PatrollingAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrollingAction_GetResult_Response_result status(::iot_project_interfaces::action::PatrollingAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PatrollingAction_GetResult_Response_result(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_GetResult_Response>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_GetResult_Response_status();
}

}  // namespace iot_project_interfaces


namespace iot_project_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrollingAction_FeedbackMessage_feedback
{
public:
  explicit Init_PatrollingAction_FeedbackMessage_feedback(::iot_project_interfaces::action::PatrollingAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::iot_project_interfaces::action::PatrollingAction_FeedbackMessage feedback(::iot_project_interfaces::action::PatrollingAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_FeedbackMessage msg_;
};

class Init_PatrollingAction_FeedbackMessage_goal_id
{
public:
  Init_PatrollingAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrollingAction_FeedbackMessage_feedback goal_id(::iot_project_interfaces::action::PatrollingAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PatrollingAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::iot_project_interfaces::action::PatrollingAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iot_project_interfaces::action::PatrollingAction_FeedbackMessage>()
{
  return iot_project_interfaces::action::builder::Init_PatrollingAction_FeedbackMessage_goal_id();
}

}  // namespace iot_project_interfaces

#endif  // IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__BUILDER_HPP_

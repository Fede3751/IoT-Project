// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iot_project_interfaces:action/PatrollingAction.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__STRUCT_H_
#define IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'targets'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_Goal
{
  geometry_msgs__msg__Point__Sequence targets;
} iot_project_interfaces__action__PatrollingAction_Goal;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_Goal.
typedef struct iot_project_interfaces__action__PatrollingAction_Goal__Sequence
{
  iot_project_interfaces__action__PatrollingAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'progress'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_Result
{
  rosidl_runtime_c__String progress;
} iot_project_interfaces__action__PatrollingAction_Result;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_Result.
typedef struct iot_project_interfaces__action__PatrollingAction_Result__Sequence
{
  iot_project_interfaces__action__PatrollingAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_Feedback
{
  rosidl_runtime_c__String success;
} iot_project_interfaces__action__PatrollingAction_Feedback;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_Feedback.
typedef struct iot_project_interfaces__action__PatrollingAction_Feedback__Sequence
{
  iot_project_interfaces__action__PatrollingAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "iot_project_interfaces/action/detail/patrolling_action__struct.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  iot_project_interfaces__action__PatrollingAction_Goal goal;
} iot_project_interfaces__action__PatrollingAction_SendGoal_Request;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_SendGoal_Request.
typedef struct iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence
{
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} iot_project_interfaces__action__PatrollingAction_SendGoal_Response;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_SendGoal_Response.
typedef struct iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence
{
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} iot_project_interfaces__action__PatrollingAction_GetResult_Request;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_GetResult_Request.
typedef struct iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence
{
  iot_project_interfaces__action__PatrollingAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_GetResult_Response
{
  int8_t status;
  iot_project_interfaces__action__PatrollingAction_Result result;
} iot_project_interfaces__action__PatrollingAction_GetResult_Response;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_GetResult_Response.
typedef struct iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence
{
  iot_project_interfaces__action__PatrollingAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"

/// Struct defined in action/PatrollingAction in the package iot_project_interfaces.
typedef struct iot_project_interfaces__action__PatrollingAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  iot_project_interfaces__action__PatrollingAction_Feedback feedback;
} iot_project_interfaces__action__PatrollingAction_FeedbackMessage;

// Struct for a sequence of iot_project_interfaces__action__PatrollingAction_FeedbackMessage.
typedef struct iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence
{
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__STRUCT_H_

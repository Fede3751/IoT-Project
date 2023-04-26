// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iot_project_interfaces:action/PatrollingAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
#include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
#include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `targets`
#include "geometry_msgs/msg/point.h"
// Member `targets`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_Goal__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_Goal__fini(message_memory);
}

size_t iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__size_function__PatrollingAction_Goal__targets(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__get_const_function__PatrollingAction_Goal__targets(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__get_function__PatrollingAction_Goal__targets(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__fetch_function__PatrollingAction_Goal__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__get_const_function__PatrollingAction_Goal__targets(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__assign_function__PatrollingAction_Goal__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__get_function__PatrollingAction_Goal__targets(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__resize_function__PatrollingAction_Goal__targets(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_member_array[1] = {
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_Goal, targets),  // bytes offset in struct
    NULL,  // default value
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__size_function__PatrollingAction_Goal__targets,  // size() function pointer
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__get_const_function__PatrollingAction_Goal__targets,  // get_const(index) function pointer
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__get_function__PatrollingAction_Goal__targets,  // get(index) function pointer
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__fetch_function__PatrollingAction_Goal__targets,  // fetch(index, &value) function pointer
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__assign_function__PatrollingAction_Goal__targets,  // assign(index, value) function pointer
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__resize_function__PatrollingAction_Goal__targets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_Goal",  // message name
  1,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_Goal),
  iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_Goal)() {
  iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_Goal__rosidl_typesupport_introspection_c__PatrollingAction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `progress`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_Result__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_member_array[1] = {
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_Result, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_Result",  // message name
  1,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_Result),
  iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_Result)() {
  if (!iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_Result__rosidl_typesupport_introspection_c__PatrollingAction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `success`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_Feedback__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_Feedback, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_Feedback",  // message name
  1,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_Feedback),
  iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_Feedback)() {
  if (!iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_Feedback__rosidl_typesupport_introspection_c__PatrollingAction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "iot_project_interfaces/action/patrolling_action.h"
// Member `goal`
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_SendGoal_Request),
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal_Request)() {
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_Goal)();
  if (!iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_SendGoal_Request__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_SendGoal_Response),
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal_Response)() {
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_SendGoal_Response__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_members = {
  "iot_project_interfaces__action",  // service namespace
  "PatrollingAction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_type_support_handle = {
  0,
  &iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal)() {
  if (!iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_SendGoal_Response)()->data;
  }

  return &iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_GetResult_Request),
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult_Request)() {
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_GetResult_Request__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "iot_project_interfaces/action/patrolling_action.h"
// Member `result`
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_GetResult_Response),
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult_Response)() {
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_Result)();
  if (!iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_GetResult_Response__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_members = {
  "iot_project_interfaces__action",  // service namespace
  "PatrollingAction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_type_support_handle = {
  0,
  &iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult)() {
  if (!iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_GetResult_Response)()->data;
  }

  return &iot_project_interfaces__action__detail__patrolling_action__rosidl_typesupport_introspection_c__PatrollingAction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__functions.h"
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "iot_project_interfaces/action/patrolling_action.h"
// Member `feedback`
// already included above
// #include "iot_project_interfaces/action/detail/patrolling_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__init(message_memory);
}

void iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_fini_function(void * message_memory)
{
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iot_project_interfaces__action__PatrollingAction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_members = {
  "iot_project_interfaces__action",  // message namespace
  "PatrollingAction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(iot_project_interfaces__action__PatrollingAction_FeedbackMessage),
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_member_array,  // message members
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_type_support_handle = {
  0,
  &iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iot_project_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_FeedbackMessage)() {
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iot_project_interfaces, action, PatrollingAction_Feedback)();
  if (!iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iot_project_interfaces__action__PatrollingAction_FeedbackMessage__rosidl_typesupport_introspection_c__PatrollingAction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

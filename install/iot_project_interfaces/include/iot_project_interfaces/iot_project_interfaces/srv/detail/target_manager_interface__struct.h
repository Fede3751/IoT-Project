// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__STRUCT_H_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__STRUCT_H_

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

/// Struct defined in srv/TargetManagerInterface in the package iot_project_interfaces.
typedef struct iot_project_interfaces__srv__TargetManagerInterface_Request
{
  geometry_msgs__msg__Point__Sequence targets;
} iot_project_interfaces__srv__TargetManagerInterface_Request;

// Struct for a sequence of iot_project_interfaces__srv__TargetManagerInterface_Request.
typedef struct iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence
{
  iot_project_interfaces__srv__TargetManagerInterface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'targets'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'last_visits'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/TargetManagerInterface in the package iot_project_interfaces.
typedef struct iot_project_interfaces__srv__TargetManagerInterface_Response
{
  geometry_msgs__msg__Point__Sequence targets;
  rosidl_runtime_c__double__Sequence last_visits;
} iot_project_interfaces__srv__TargetManagerInterface_Response;

// Struct for a sequence of iot_project_interfaces__srv__TargetManagerInterface_Response.
typedef struct iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence
{
  iot_project_interfaces__srv__TargetManagerInterface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__STRUCT_H_

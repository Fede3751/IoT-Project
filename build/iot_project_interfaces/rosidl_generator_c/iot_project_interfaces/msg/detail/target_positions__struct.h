// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iot_project_interfaces:msg/TargetPositions.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__STRUCT_H_
#define IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/TargetPositions in the package iot_project_interfaces.
typedef struct iot_project_interfaces__msg__TargetPositions
{
  geometry_msgs__msg__Point__Sequence positions;
} iot_project_interfaces__msg__TargetPositions;

// Struct for a sequence of iot_project_interfaces__msg__TargetPositions.
typedef struct iot_project_interfaces__msg__TargetPositions__Sequence
{
  iot_project_interfaces__msg__TargetPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__msg__TargetPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__STRUCT_H_

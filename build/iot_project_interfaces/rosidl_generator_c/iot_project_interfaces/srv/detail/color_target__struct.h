// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iot_project_interfaces:srv/ColorTarget.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__COLOR_TARGET__STRUCT_H_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__COLOR_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ColorTarget in the package iot_project_interfaces.
typedef struct iot_project_interfaces__srv__ColorTarget_Request
{
  rosidl_runtime_c__String target;
  int8_t color_r;
  int8_t color_g;
  int8_t color_b;
} iot_project_interfaces__srv__ColorTarget_Request;

// Struct for a sequence of iot_project_interfaces__srv__ColorTarget_Request.
typedef struct iot_project_interfaces__srv__ColorTarget_Request__Sequence
{
  iot_project_interfaces__srv__ColorTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__srv__ColorTarget_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ColorTarget in the package iot_project_interfaces.
typedef struct iot_project_interfaces__srv__ColorTarget_Response
{
  bool result;
} iot_project_interfaces__srv__ColorTarget_Response;

// Struct for a sequence of iot_project_interfaces__srv__ColorTarget_Response.
typedef struct iot_project_interfaces__srv__ColorTarget_Response__Sequence
{
  iot_project_interfaces__srv__ColorTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iot_project_interfaces__srv__ColorTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__COLOR_TARGET__STRUCT_H_

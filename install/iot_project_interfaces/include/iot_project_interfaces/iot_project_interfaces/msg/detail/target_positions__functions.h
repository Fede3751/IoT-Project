// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iot_project_interfaces:msg/TargetPositions.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__FUNCTIONS_H_
#define IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iot_project_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "iot_project_interfaces/msg/detail/target_positions__struct.h"

/// Initialize msg/TargetPositions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__msg__TargetPositions
 * )) before or use
 * iot_project_interfaces__msg__TargetPositions__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__msg__TargetPositions__init(iot_project_interfaces__msg__TargetPositions * msg);

/// Finalize msg/TargetPositions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__msg__TargetPositions__fini(iot_project_interfaces__msg__TargetPositions * msg);

/// Create msg/TargetPositions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__msg__TargetPositions__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__msg__TargetPositions *
iot_project_interfaces__msg__TargetPositions__create();

/// Destroy msg/TargetPositions message.
/**
 * It calls
 * iot_project_interfaces__msg__TargetPositions__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__msg__TargetPositions__destroy(iot_project_interfaces__msg__TargetPositions * msg);

/// Check for msg/TargetPositions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__msg__TargetPositions__are_equal(const iot_project_interfaces__msg__TargetPositions * lhs, const iot_project_interfaces__msg__TargetPositions * rhs);

/// Copy a msg/TargetPositions message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__msg__TargetPositions__copy(
  const iot_project_interfaces__msg__TargetPositions * input,
  iot_project_interfaces__msg__TargetPositions * output);

/// Initialize array of msg/TargetPositions messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__msg__TargetPositions__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__msg__TargetPositions__Sequence__init(iot_project_interfaces__msg__TargetPositions__Sequence * array, size_t size);

/// Finalize array of msg/TargetPositions messages.
/**
 * It calls
 * iot_project_interfaces__msg__TargetPositions__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__msg__TargetPositions__Sequence__fini(iot_project_interfaces__msg__TargetPositions__Sequence * array);

/// Create array of msg/TargetPositions messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__msg__TargetPositions__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__msg__TargetPositions__Sequence *
iot_project_interfaces__msg__TargetPositions__Sequence__create(size_t size);

/// Destroy array of msg/TargetPositions messages.
/**
 * It calls
 * iot_project_interfaces__msg__TargetPositions__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__msg__TargetPositions__Sequence__destroy(iot_project_interfaces__msg__TargetPositions__Sequence * array);

/// Check for msg/TargetPositions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__msg__TargetPositions__Sequence__are_equal(const iot_project_interfaces__msg__TargetPositions__Sequence * lhs, const iot_project_interfaces__msg__TargetPositions__Sequence * rhs);

/// Copy an array of msg/TargetPositions messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__msg__TargetPositions__Sequence__copy(
  const iot_project_interfaces__msg__TargetPositions__Sequence * input,
  iot_project_interfaces__msg__TargetPositions__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__MSG__DETAIL__TARGET_POSITIONS__FUNCTIONS_H_

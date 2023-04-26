// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iot_project_interfaces:action/PatrollingAction.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__FUNCTIONS_H_
#define IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iot_project_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "iot_project_interfaces/action/detail/patrolling_action__struct.h"

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_Goal
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Goal__init(iot_project_interfaces__action__PatrollingAction_Goal * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Goal__fini(iot_project_interfaces__action__PatrollingAction_Goal * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_Goal *
iot_project_interfaces__action__PatrollingAction_Goal__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Goal__destroy(iot_project_interfaces__action__PatrollingAction_Goal * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Goal__are_equal(const iot_project_interfaces__action__PatrollingAction_Goal * lhs, const iot_project_interfaces__action__PatrollingAction_Goal * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_Goal__copy(
  const iot_project_interfaces__action__PatrollingAction_Goal * input,
  iot_project_interfaces__action__PatrollingAction_Goal * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Goal__Sequence__init(iot_project_interfaces__action__PatrollingAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Goal__Sequence__fini(iot_project_interfaces__action__PatrollingAction_Goal__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_Goal__Sequence *
iot_project_interfaces__action__PatrollingAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Goal__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_Goal__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Goal__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_Goal__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_Goal__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_Goal__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_Goal__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_Goal__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_Result
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Result__init(iot_project_interfaces__action__PatrollingAction_Result * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Result__fini(iot_project_interfaces__action__PatrollingAction_Result * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_Result *
iot_project_interfaces__action__PatrollingAction_Result__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Result__destroy(iot_project_interfaces__action__PatrollingAction_Result * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Result__are_equal(const iot_project_interfaces__action__PatrollingAction_Result * lhs, const iot_project_interfaces__action__PatrollingAction_Result * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_Result__copy(
  const iot_project_interfaces__action__PatrollingAction_Result * input,
  iot_project_interfaces__action__PatrollingAction_Result * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Result__Sequence__init(iot_project_interfaces__action__PatrollingAction_Result__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Result__Sequence__fini(iot_project_interfaces__action__PatrollingAction_Result__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_Result__Sequence *
iot_project_interfaces__action__PatrollingAction_Result__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Result__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_Result__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Result__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_Result__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_Result__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_Result__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_Result__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_Result__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_Feedback
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Feedback__init(iot_project_interfaces__action__PatrollingAction_Feedback * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Feedback__fini(iot_project_interfaces__action__PatrollingAction_Feedback * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_Feedback *
iot_project_interfaces__action__PatrollingAction_Feedback__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Feedback__destroy(iot_project_interfaces__action__PatrollingAction_Feedback * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Feedback__are_equal(const iot_project_interfaces__action__PatrollingAction_Feedback * lhs, const iot_project_interfaces__action__PatrollingAction_Feedback * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_Feedback__copy(
  const iot_project_interfaces__action__PatrollingAction_Feedback * input,
  iot_project_interfaces__action__PatrollingAction_Feedback * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__init(iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__fini(iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence *
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_Feedback__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_Feedback__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__init(iot_project_interfaces__action__PatrollingAction_SendGoal_Request * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__fini(iot_project_interfaces__action__PatrollingAction_SendGoal_Request * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_SendGoal_Request *
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__destroy(iot_project_interfaces__action__PatrollingAction_SendGoal_Request * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__are_equal(const iot_project_interfaces__action__PatrollingAction_SendGoal_Request * lhs, const iot_project_interfaces__action__PatrollingAction_SendGoal_Request * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__copy(
  const iot_project_interfaces__action__PatrollingAction_SendGoal_Request * input,
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__init(iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__fini(iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence *
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_SendGoal_Request__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__init(iot_project_interfaces__action__PatrollingAction_SendGoal_Response * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__fini(iot_project_interfaces__action__PatrollingAction_SendGoal_Response * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_SendGoal_Response *
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__destroy(iot_project_interfaces__action__PatrollingAction_SendGoal_Response * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__are_equal(const iot_project_interfaces__action__PatrollingAction_SendGoal_Response * lhs, const iot_project_interfaces__action__PatrollingAction_SendGoal_Response * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__copy(
  const iot_project_interfaces__action__PatrollingAction_SendGoal_Response * input,
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__init(iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__fini(iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence *
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_SendGoal_Response__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Request__init(iot_project_interfaces__action__PatrollingAction_GetResult_Request * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Request__fini(iot_project_interfaces__action__PatrollingAction_GetResult_Request * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_GetResult_Request *
iot_project_interfaces__action__PatrollingAction_GetResult_Request__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Request__destroy(iot_project_interfaces__action__PatrollingAction_GetResult_Request * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Request__are_equal(const iot_project_interfaces__action__PatrollingAction_GetResult_Request * lhs, const iot_project_interfaces__action__PatrollingAction_GetResult_Request * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_GetResult_Request__copy(
  const iot_project_interfaces__action__PatrollingAction_GetResult_Request * input,
  iot_project_interfaces__action__PatrollingAction_GetResult_Request * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__init(iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__fini(iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence *
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_GetResult_Request__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Response__init(iot_project_interfaces__action__PatrollingAction_GetResult_Response * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Response__fini(iot_project_interfaces__action__PatrollingAction_GetResult_Response * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_GetResult_Response *
iot_project_interfaces__action__PatrollingAction_GetResult_Response__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Response__destroy(iot_project_interfaces__action__PatrollingAction_GetResult_Response * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Response__are_equal(const iot_project_interfaces__action__PatrollingAction_GetResult_Response * lhs, const iot_project_interfaces__action__PatrollingAction_GetResult_Response * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_GetResult_Response__copy(
  const iot_project_interfaces__action__PatrollingAction_GetResult_Response * input,
  iot_project_interfaces__action__PatrollingAction_GetResult_Response * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__init(iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__fini(iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence *
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_GetResult_Response__Sequence * output);

/// Initialize action/PatrollingAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage
 * )) before or use
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__init(iot_project_interfaces__action__PatrollingAction_FeedbackMessage * msg);

/// Finalize action/PatrollingAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__fini(iot_project_interfaces__action__PatrollingAction_FeedbackMessage * msg);

/// Create action/PatrollingAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_FeedbackMessage *
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__create();

/// Destroy action/PatrollingAction message.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__destroy(iot_project_interfaces__action__PatrollingAction_FeedbackMessage * msg);

/// Check for action/PatrollingAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__are_equal(const iot_project_interfaces__action__PatrollingAction_FeedbackMessage * lhs, const iot_project_interfaces__action__PatrollingAction_FeedbackMessage * rhs);

/// Copy a action/PatrollingAction message.
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
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__copy(
  const iot_project_interfaces__action__PatrollingAction_FeedbackMessage * input,
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage * output);

/// Initialize array of action/PatrollingAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__init(iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__fini(iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * array);

/// Create array of action/PatrollingAction messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence *
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PatrollingAction messages.
/**
 * It calls
 * iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__destroy(iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * array);

/// Check for action/PatrollingAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__are_equal(const iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * lhs, const iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/PatrollingAction messages.
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
iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence__copy(
  const iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * input,
  iot_project_interfaces__action__PatrollingAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__ACTION__DETAIL__PATROLLING_ACTION__FUNCTIONS_H_

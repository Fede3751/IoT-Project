// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__FUNCTIONS_H_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iot_project_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "iot_project_interfaces/srv/detail/target_manager_interface__struct.h"

/// Initialize srv/TargetManagerInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__srv__TargetManagerInterface_Request
 * )) before or use
 * iot_project_interfaces__srv__TargetManagerInterface_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Request__init(iot_project_interfaces__srv__TargetManagerInterface_Request * msg);

/// Finalize srv/TargetManagerInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Request__fini(iot_project_interfaces__srv__TargetManagerInterface_Request * msg);

/// Create srv/TargetManagerInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__srv__TargetManagerInterface_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__srv__TargetManagerInterface_Request *
iot_project_interfaces__srv__TargetManagerInterface_Request__create();

/// Destroy srv/TargetManagerInterface message.
/**
 * It calls
 * iot_project_interfaces__srv__TargetManagerInterface_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Request__destroy(iot_project_interfaces__srv__TargetManagerInterface_Request * msg);

/// Check for srv/TargetManagerInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Request__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Request * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Request * rhs);

/// Copy a srv/TargetManagerInterface message.
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
iot_project_interfaces__srv__TargetManagerInterface_Request__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Request * input,
  iot_project_interfaces__srv__TargetManagerInterface_Request * output);

/// Initialize array of srv/TargetManagerInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__srv__TargetManagerInterface_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__init(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array, size_t size);

/// Finalize array of srv/TargetManagerInterface messages.
/**
 * It calls
 * iot_project_interfaces__srv__TargetManagerInterface_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__fini(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array);

/// Create array of srv/TargetManagerInterface messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence *
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__create(size_t size);

/// Destroy array of srv/TargetManagerInterface messages.
/**
 * It calls
 * iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__destroy(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array);

/// Check for srv/TargetManagerInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * rhs);

/// Copy an array of srv/TargetManagerInterface messages.
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
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * input,
  iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * output);

/// Initialize srv/TargetManagerInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iot_project_interfaces__srv__TargetManagerInterface_Response
 * )) before or use
 * iot_project_interfaces__srv__TargetManagerInterface_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Response__init(iot_project_interfaces__srv__TargetManagerInterface_Response * msg);

/// Finalize srv/TargetManagerInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Response__fini(iot_project_interfaces__srv__TargetManagerInterface_Response * msg);

/// Create srv/TargetManagerInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iot_project_interfaces__srv__TargetManagerInterface_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__srv__TargetManagerInterface_Response *
iot_project_interfaces__srv__TargetManagerInterface_Response__create();

/// Destroy srv/TargetManagerInterface message.
/**
 * It calls
 * iot_project_interfaces__srv__TargetManagerInterface_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Response__destroy(iot_project_interfaces__srv__TargetManagerInterface_Response * msg);

/// Check for srv/TargetManagerInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Response__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Response * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Response * rhs);

/// Copy a srv/TargetManagerInterface message.
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
iot_project_interfaces__srv__TargetManagerInterface_Response__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Response * input,
  iot_project_interfaces__srv__TargetManagerInterface_Response * output);

/// Initialize array of srv/TargetManagerInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * iot_project_interfaces__srv__TargetManagerInterface_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__init(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array, size_t size);

/// Finalize array of srv/TargetManagerInterface messages.
/**
 * It calls
 * iot_project_interfaces__srv__TargetManagerInterface_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__fini(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array);

/// Create array of srv/TargetManagerInterface messages.
/**
 * It allocates the memory for the array and calls
 * iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence *
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__create(size_t size);

/// Destroy array of srv/TargetManagerInterface messages.
/**
 * It calls
 * iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
void
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__destroy(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array);

/// Check for srv/TargetManagerInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iot_project_interfaces
bool
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * rhs);

/// Copy an array of srv/TargetManagerInterface messages.
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
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * input,
  iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__FUNCTIONS_H_

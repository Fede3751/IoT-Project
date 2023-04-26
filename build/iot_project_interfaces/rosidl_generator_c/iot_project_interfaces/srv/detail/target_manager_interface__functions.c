// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice
#include "iot_project_interfaces/srv/detail/target_manager_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `targets`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
iot_project_interfaces__srv__TargetManagerInterface_Request__init(iot_project_interfaces__srv__TargetManagerInterface_Request * msg)
{
  if (!msg) {
    return false;
  }
  // targets
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->targets, 0)) {
    iot_project_interfaces__srv__TargetManagerInterface_Request__fini(msg);
    return false;
  }
  return true;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Request__fini(iot_project_interfaces__srv__TargetManagerInterface_Request * msg)
{
  if (!msg) {
    return;
  }
  // targets
  geometry_msgs__msg__Point__Sequence__fini(&msg->targets);
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Request__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Request * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targets
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->targets), &(rhs->targets)))
  {
    return false;
  }
  return true;
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Request__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Request * input,
  iot_project_interfaces__srv__TargetManagerInterface_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // targets
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->targets), &(output->targets)))
  {
    return false;
  }
  return true;
}

iot_project_interfaces__srv__TargetManagerInterface_Request *
iot_project_interfaces__srv__TargetManagerInterface_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__srv__TargetManagerInterface_Request * msg = (iot_project_interfaces__srv__TargetManagerInterface_Request *)allocator.allocate(sizeof(iot_project_interfaces__srv__TargetManagerInterface_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iot_project_interfaces__srv__TargetManagerInterface_Request));
  bool success = iot_project_interfaces__srv__TargetManagerInterface_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Request__destroy(iot_project_interfaces__srv__TargetManagerInterface_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iot_project_interfaces__srv__TargetManagerInterface_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__init(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__srv__TargetManagerInterface_Request * data = NULL;

  if (size) {
    data = (iot_project_interfaces__srv__TargetManagerInterface_Request *)allocator.zero_allocate(size, sizeof(iot_project_interfaces__srv__TargetManagerInterface_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iot_project_interfaces__srv__TargetManagerInterface_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iot_project_interfaces__srv__TargetManagerInterface_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__fini(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iot_project_interfaces__srv__TargetManagerInterface_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence *
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array = (iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence *)allocator.allocate(sizeof(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__destroy(iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iot_project_interfaces__srv__TargetManagerInterface_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * input,
  iot_project_interfaces__srv__TargetManagerInterface_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iot_project_interfaces__srv__TargetManagerInterface_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iot_project_interfaces__srv__TargetManagerInterface_Request * data =
      (iot_project_interfaces__srv__TargetManagerInterface_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iot_project_interfaces__srv__TargetManagerInterface_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iot_project_interfaces__srv__TargetManagerInterface_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iot_project_interfaces__srv__TargetManagerInterface_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `targets`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `last_visits`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
iot_project_interfaces__srv__TargetManagerInterface_Response__init(iot_project_interfaces__srv__TargetManagerInterface_Response * msg)
{
  if (!msg) {
    return false;
  }
  // targets
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->targets, 0)) {
    iot_project_interfaces__srv__TargetManagerInterface_Response__fini(msg);
    return false;
  }
  // last_visits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->last_visits, 0)) {
    iot_project_interfaces__srv__TargetManagerInterface_Response__fini(msg);
    return false;
  }
  return true;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Response__fini(iot_project_interfaces__srv__TargetManagerInterface_Response * msg)
{
  if (!msg) {
    return;
  }
  // targets
  geometry_msgs__msg__Point__Sequence__fini(&msg->targets);
  // last_visits
  rosidl_runtime_c__double__Sequence__fini(&msg->last_visits);
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Response__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Response * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targets
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->targets), &(rhs->targets)))
  {
    return false;
  }
  // last_visits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->last_visits), &(rhs->last_visits)))
  {
    return false;
  }
  return true;
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Response__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Response * input,
  iot_project_interfaces__srv__TargetManagerInterface_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // targets
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->targets), &(output->targets)))
  {
    return false;
  }
  // last_visits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->last_visits), &(output->last_visits)))
  {
    return false;
  }
  return true;
}

iot_project_interfaces__srv__TargetManagerInterface_Response *
iot_project_interfaces__srv__TargetManagerInterface_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__srv__TargetManagerInterface_Response * msg = (iot_project_interfaces__srv__TargetManagerInterface_Response *)allocator.allocate(sizeof(iot_project_interfaces__srv__TargetManagerInterface_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iot_project_interfaces__srv__TargetManagerInterface_Response));
  bool success = iot_project_interfaces__srv__TargetManagerInterface_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Response__destroy(iot_project_interfaces__srv__TargetManagerInterface_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iot_project_interfaces__srv__TargetManagerInterface_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__init(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__srv__TargetManagerInterface_Response * data = NULL;

  if (size) {
    data = (iot_project_interfaces__srv__TargetManagerInterface_Response *)allocator.zero_allocate(size, sizeof(iot_project_interfaces__srv__TargetManagerInterface_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iot_project_interfaces__srv__TargetManagerInterface_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iot_project_interfaces__srv__TargetManagerInterface_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__fini(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iot_project_interfaces__srv__TargetManagerInterface_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence *
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array = (iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence *)allocator.allocate(sizeof(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__destroy(iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__are_equal(const iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * lhs, const iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iot_project_interfaces__srv__TargetManagerInterface_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence__copy(
  const iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * input,
  iot_project_interfaces__srv__TargetManagerInterface_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iot_project_interfaces__srv__TargetManagerInterface_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iot_project_interfaces__srv__TargetManagerInterface_Response * data =
      (iot_project_interfaces__srv__TargetManagerInterface_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iot_project_interfaces__srv__TargetManagerInterface_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iot_project_interfaces__srv__TargetManagerInterface_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iot_project_interfaces__srv__TargetManagerInterface_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

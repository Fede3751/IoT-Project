// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iot_project_interfaces:msg/TargetPositions.idl
// generated code does not contain a copyright notice
#include "iot_project_interfaces/msg/detail/target_positions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
iot_project_interfaces__msg__TargetPositions__init(iot_project_interfaces__msg__TargetPositions * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->positions, 0)) {
    iot_project_interfaces__msg__TargetPositions__fini(msg);
    return false;
  }
  return true;
}

void
iot_project_interfaces__msg__TargetPositions__fini(iot_project_interfaces__msg__TargetPositions * msg)
{
  if (!msg) {
    return;
  }
  // positions
  geometry_msgs__msg__Point__Sequence__fini(&msg->positions);
}

bool
iot_project_interfaces__msg__TargetPositions__are_equal(const iot_project_interfaces__msg__TargetPositions * lhs, const iot_project_interfaces__msg__TargetPositions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  return true;
}

bool
iot_project_interfaces__msg__TargetPositions__copy(
  const iot_project_interfaces__msg__TargetPositions * input,
  iot_project_interfaces__msg__TargetPositions * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  return true;
}

iot_project_interfaces__msg__TargetPositions *
iot_project_interfaces__msg__TargetPositions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__msg__TargetPositions * msg = (iot_project_interfaces__msg__TargetPositions *)allocator.allocate(sizeof(iot_project_interfaces__msg__TargetPositions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iot_project_interfaces__msg__TargetPositions));
  bool success = iot_project_interfaces__msg__TargetPositions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iot_project_interfaces__msg__TargetPositions__destroy(iot_project_interfaces__msg__TargetPositions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iot_project_interfaces__msg__TargetPositions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iot_project_interfaces__msg__TargetPositions__Sequence__init(iot_project_interfaces__msg__TargetPositions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__msg__TargetPositions * data = NULL;

  if (size) {
    data = (iot_project_interfaces__msg__TargetPositions *)allocator.zero_allocate(size, sizeof(iot_project_interfaces__msg__TargetPositions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iot_project_interfaces__msg__TargetPositions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iot_project_interfaces__msg__TargetPositions__fini(&data[i - 1]);
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
iot_project_interfaces__msg__TargetPositions__Sequence__fini(iot_project_interfaces__msg__TargetPositions__Sequence * array)
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
      iot_project_interfaces__msg__TargetPositions__fini(&array->data[i]);
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

iot_project_interfaces__msg__TargetPositions__Sequence *
iot_project_interfaces__msg__TargetPositions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iot_project_interfaces__msg__TargetPositions__Sequence * array = (iot_project_interfaces__msg__TargetPositions__Sequence *)allocator.allocate(sizeof(iot_project_interfaces__msg__TargetPositions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iot_project_interfaces__msg__TargetPositions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iot_project_interfaces__msg__TargetPositions__Sequence__destroy(iot_project_interfaces__msg__TargetPositions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iot_project_interfaces__msg__TargetPositions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iot_project_interfaces__msg__TargetPositions__Sequence__are_equal(const iot_project_interfaces__msg__TargetPositions__Sequence * lhs, const iot_project_interfaces__msg__TargetPositions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iot_project_interfaces__msg__TargetPositions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iot_project_interfaces__msg__TargetPositions__Sequence__copy(
  const iot_project_interfaces__msg__TargetPositions__Sequence * input,
  iot_project_interfaces__msg__TargetPositions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iot_project_interfaces__msg__TargetPositions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iot_project_interfaces__msg__TargetPositions * data =
      (iot_project_interfaces__msg__TargetPositions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iot_project_interfaces__msg__TargetPositions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iot_project_interfaces__msg__TargetPositions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iot_project_interfaces__msg__TargetPositions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

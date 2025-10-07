// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mav_planning_msgs:srv/PolygonService.idl
// generated code does not contain a copyright notice
#include "mav_planning_msgs/srv/detail/polygon_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `polygon`
#include "mav_planning_msgs/msg/detail/polygon_with_holes_stamped__functions.h"

bool
mav_planning_msgs__srv__PolygonService_Request__init(mav_planning_msgs__srv__PolygonService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // polygon
  if (!mav_planning_msgs__msg__PolygonWithHolesStamped__init(&msg->polygon)) {
    mav_planning_msgs__srv__PolygonService_Request__fini(msg);
    return false;
  }
  return true;
}

void
mav_planning_msgs__srv__PolygonService_Request__fini(mav_planning_msgs__srv__PolygonService_Request * msg)
{
  if (!msg) {
    return;
  }
  // polygon
  mav_planning_msgs__msg__PolygonWithHolesStamped__fini(&msg->polygon);
}

bool
mav_planning_msgs__srv__PolygonService_Request__are_equal(const mav_planning_msgs__srv__PolygonService_Request * lhs, const mav_planning_msgs__srv__PolygonService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // polygon
  if (!mav_planning_msgs__msg__PolygonWithHolesStamped__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
mav_planning_msgs__srv__PolygonService_Request__copy(
  const mav_planning_msgs__srv__PolygonService_Request * input,
  mav_planning_msgs__srv__PolygonService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // polygon
  if (!mav_planning_msgs__msg__PolygonWithHolesStamped__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

mav_planning_msgs__srv__PolygonService_Request *
mav_planning_msgs__srv__PolygonService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_planning_msgs__srv__PolygonService_Request * msg = (mav_planning_msgs__srv__PolygonService_Request *)allocator.allocate(sizeof(mav_planning_msgs__srv__PolygonService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mav_planning_msgs__srv__PolygonService_Request));
  bool success = mav_planning_msgs__srv__PolygonService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mav_planning_msgs__srv__PolygonService_Request__destroy(mav_planning_msgs__srv__PolygonService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mav_planning_msgs__srv__PolygonService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mav_planning_msgs__srv__PolygonService_Request__Sequence__init(mav_planning_msgs__srv__PolygonService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_planning_msgs__srv__PolygonService_Request * data = NULL;

  if (size) {
    data = (mav_planning_msgs__srv__PolygonService_Request *)allocator.zero_allocate(size, sizeof(mav_planning_msgs__srv__PolygonService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mav_planning_msgs__srv__PolygonService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mav_planning_msgs__srv__PolygonService_Request__fini(&data[i - 1]);
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
mav_planning_msgs__srv__PolygonService_Request__Sequence__fini(mav_planning_msgs__srv__PolygonService_Request__Sequence * array)
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
      mav_planning_msgs__srv__PolygonService_Request__fini(&array->data[i]);
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

mav_planning_msgs__srv__PolygonService_Request__Sequence *
mav_planning_msgs__srv__PolygonService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_planning_msgs__srv__PolygonService_Request__Sequence * array = (mav_planning_msgs__srv__PolygonService_Request__Sequence *)allocator.allocate(sizeof(mav_planning_msgs__srv__PolygonService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mav_planning_msgs__srv__PolygonService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mav_planning_msgs__srv__PolygonService_Request__Sequence__destroy(mav_planning_msgs__srv__PolygonService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mav_planning_msgs__srv__PolygonService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mav_planning_msgs__srv__PolygonService_Request__Sequence__are_equal(const mav_planning_msgs__srv__PolygonService_Request__Sequence * lhs, const mav_planning_msgs__srv__PolygonService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mav_planning_msgs__srv__PolygonService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mav_planning_msgs__srv__PolygonService_Request__Sequence__copy(
  const mav_planning_msgs__srv__PolygonService_Request__Sequence * input,
  mav_planning_msgs__srv__PolygonService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mav_planning_msgs__srv__PolygonService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mav_planning_msgs__srv__PolygonService_Request * data =
      (mav_planning_msgs__srv__PolygonService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mav_planning_msgs__srv__PolygonService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mav_planning_msgs__srv__PolygonService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mav_planning_msgs__srv__PolygonService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mav_planning_msgs__srv__PolygonService_Response__init(mav_planning_msgs__srv__PolygonService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mav_planning_msgs__srv__PolygonService_Response__fini(mav_planning_msgs__srv__PolygonService_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mav_planning_msgs__srv__PolygonService_Response__are_equal(const mav_planning_msgs__srv__PolygonService_Response * lhs, const mav_planning_msgs__srv__PolygonService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mav_planning_msgs__srv__PolygonService_Response__copy(
  const mav_planning_msgs__srv__PolygonService_Response * input,
  mav_planning_msgs__srv__PolygonService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mav_planning_msgs__srv__PolygonService_Response *
mav_planning_msgs__srv__PolygonService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_planning_msgs__srv__PolygonService_Response * msg = (mav_planning_msgs__srv__PolygonService_Response *)allocator.allocate(sizeof(mav_planning_msgs__srv__PolygonService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mav_planning_msgs__srv__PolygonService_Response));
  bool success = mav_planning_msgs__srv__PolygonService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mav_planning_msgs__srv__PolygonService_Response__destroy(mav_planning_msgs__srv__PolygonService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mav_planning_msgs__srv__PolygonService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mav_planning_msgs__srv__PolygonService_Response__Sequence__init(mav_planning_msgs__srv__PolygonService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_planning_msgs__srv__PolygonService_Response * data = NULL;

  if (size) {
    data = (mav_planning_msgs__srv__PolygonService_Response *)allocator.zero_allocate(size, sizeof(mav_planning_msgs__srv__PolygonService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mav_planning_msgs__srv__PolygonService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mav_planning_msgs__srv__PolygonService_Response__fini(&data[i - 1]);
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
mav_planning_msgs__srv__PolygonService_Response__Sequence__fini(mav_planning_msgs__srv__PolygonService_Response__Sequence * array)
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
      mav_planning_msgs__srv__PolygonService_Response__fini(&array->data[i]);
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

mav_planning_msgs__srv__PolygonService_Response__Sequence *
mav_planning_msgs__srv__PolygonService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_planning_msgs__srv__PolygonService_Response__Sequence * array = (mav_planning_msgs__srv__PolygonService_Response__Sequence *)allocator.allocate(sizeof(mav_planning_msgs__srv__PolygonService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mav_planning_msgs__srv__PolygonService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mav_planning_msgs__srv__PolygonService_Response__Sequence__destroy(mav_planning_msgs__srv__PolygonService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mav_planning_msgs__srv__PolygonService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mav_planning_msgs__srv__PolygonService_Response__Sequence__are_equal(const mav_planning_msgs__srv__PolygonService_Response__Sequence * lhs, const mav_planning_msgs__srv__PolygonService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mav_planning_msgs__srv__PolygonService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mav_planning_msgs__srv__PolygonService_Response__Sequence__copy(
  const mav_planning_msgs__srv__PolygonService_Response__Sequence * input,
  mav_planning_msgs__srv__PolygonService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mav_planning_msgs__srv__PolygonService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mav_planning_msgs__srv__PolygonService_Response * data =
      (mav_planning_msgs__srv__PolygonService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mav_planning_msgs__srv__PolygonService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mav_planning_msgs__srv__PolygonService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mav_planning_msgs__srv__PolygonService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

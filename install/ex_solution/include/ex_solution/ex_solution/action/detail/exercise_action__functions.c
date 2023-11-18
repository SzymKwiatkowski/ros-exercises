// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ex_solution:action/ExerciseAction.idl
// generated code does not contain a copyright notice
#include "ex_solution/action/detail/exercise_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ex_solution__action__ExerciseAction_Goal__init(ex_solution__action__ExerciseAction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_distance
  // timeout
  // precision
  return true;
}

void
ex_solution__action__ExerciseAction_Goal__fini(ex_solution__action__ExerciseAction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_distance
  // timeout
  // precision
}

bool
ex_solution__action__ExerciseAction_Goal__are_equal(const ex_solution__action__ExerciseAction_Goal * lhs, const ex_solution__action__ExerciseAction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_distance
  if (lhs->goal_distance != rhs->goal_distance) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // precision
  if (lhs->precision != rhs->precision) {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_Goal__copy(
  const ex_solution__action__ExerciseAction_Goal * input,
  ex_solution__action__ExerciseAction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_distance
  output->goal_distance = input->goal_distance;
  // timeout
  output->timeout = input->timeout;
  // precision
  output->precision = input->precision;
  return true;
}

ex_solution__action__ExerciseAction_Goal *
ex_solution__action__ExerciseAction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Goal * msg = (ex_solution__action__ExerciseAction_Goal *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_Goal));
  bool success = ex_solution__action__ExerciseAction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_Goal__destroy(ex_solution__action__ExerciseAction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_Goal__Sequence__init(ex_solution__action__ExerciseAction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Goal * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_Goal *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_Goal__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_Goal__Sequence__fini(ex_solution__action__ExerciseAction_Goal__Sequence * array)
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
      ex_solution__action__ExerciseAction_Goal__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_Goal__Sequence *
ex_solution__action__ExerciseAction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Goal__Sequence * array = (ex_solution__action__ExerciseAction_Goal__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_Goal__Sequence__destroy(ex_solution__action__ExerciseAction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_Goal__Sequence__are_equal(const ex_solution__action__ExerciseAction_Goal__Sequence * lhs, const ex_solution__action__ExerciseAction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_Goal__Sequence__copy(
  const ex_solution__action__ExerciseAction_Goal__Sequence * input,
  ex_solution__action__ExerciseAction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_Goal * data =
      (ex_solution__action__ExerciseAction_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ex_solution__action__ExerciseAction_Result__init(ex_solution__action__ExerciseAction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // succeeded
  // final_precision
  // total_time
  return true;
}

void
ex_solution__action__ExerciseAction_Result__fini(ex_solution__action__ExerciseAction_Result * msg)
{
  if (!msg) {
    return;
  }
  // succeeded
  // final_precision
  // total_time
}

bool
ex_solution__action__ExerciseAction_Result__are_equal(const ex_solution__action__ExerciseAction_Result * lhs, const ex_solution__action__ExerciseAction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // succeeded
  if (lhs->succeeded != rhs->succeeded) {
    return false;
  }
  // final_precision
  if (lhs->final_precision != rhs->final_precision) {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_Result__copy(
  const ex_solution__action__ExerciseAction_Result * input,
  ex_solution__action__ExerciseAction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // succeeded
  output->succeeded = input->succeeded;
  // final_precision
  output->final_precision = input->final_precision;
  // total_time
  output->total_time = input->total_time;
  return true;
}

ex_solution__action__ExerciseAction_Result *
ex_solution__action__ExerciseAction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Result * msg = (ex_solution__action__ExerciseAction_Result *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_Result));
  bool success = ex_solution__action__ExerciseAction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_Result__destroy(ex_solution__action__ExerciseAction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_Result__Sequence__init(ex_solution__action__ExerciseAction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Result * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_Result *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_Result__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_Result__Sequence__fini(ex_solution__action__ExerciseAction_Result__Sequence * array)
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
      ex_solution__action__ExerciseAction_Result__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_Result__Sequence *
ex_solution__action__ExerciseAction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Result__Sequence * array = (ex_solution__action__ExerciseAction_Result__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_Result__Sequence__destroy(ex_solution__action__ExerciseAction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_Result__Sequence__are_equal(const ex_solution__action__ExerciseAction_Result__Sequence * lhs, const ex_solution__action__ExerciseAction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_Result__Sequence__copy(
  const ex_solution__action__ExerciseAction_Result__Sequence * input,
  ex_solution__action__ExerciseAction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_Result * data =
      (ex_solution__action__ExerciseAction_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ex_solution__action__ExerciseAction_Feedback__init(ex_solution__action__ExerciseAction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_distance
  // estimated_time
  return true;
}

void
ex_solution__action__ExerciseAction_Feedback__fini(ex_solution__action__ExerciseAction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_distance
  // estimated_time
}

bool
ex_solution__action__ExerciseAction_Feedback__are_equal(const ex_solution__action__ExerciseAction_Feedback * lhs, const ex_solution__action__ExerciseAction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_distance
  if (lhs->current_distance != rhs->current_distance) {
    return false;
  }
  // estimated_time
  if (lhs->estimated_time != rhs->estimated_time) {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_Feedback__copy(
  const ex_solution__action__ExerciseAction_Feedback * input,
  ex_solution__action__ExerciseAction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_distance
  output->current_distance = input->current_distance;
  // estimated_time
  output->estimated_time = input->estimated_time;
  return true;
}

ex_solution__action__ExerciseAction_Feedback *
ex_solution__action__ExerciseAction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Feedback * msg = (ex_solution__action__ExerciseAction_Feedback *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_Feedback));
  bool success = ex_solution__action__ExerciseAction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_Feedback__destroy(ex_solution__action__ExerciseAction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_Feedback__Sequence__init(ex_solution__action__ExerciseAction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Feedback * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_Feedback *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_Feedback__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_Feedback__Sequence__fini(ex_solution__action__ExerciseAction_Feedback__Sequence * array)
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
      ex_solution__action__ExerciseAction_Feedback__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_Feedback__Sequence *
ex_solution__action__ExerciseAction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_Feedback__Sequence * array = (ex_solution__action__ExerciseAction_Feedback__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_Feedback__Sequence__destroy(ex_solution__action__ExerciseAction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_Feedback__Sequence__are_equal(const ex_solution__action__ExerciseAction_Feedback__Sequence * lhs, const ex_solution__action__ExerciseAction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_Feedback__Sequence__copy(
  const ex_solution__action__ExerciseAction_Feedback__Sequence * input,
  ex_solution__action__ExerciseAction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_Feedback * data =
      (ex_solution__action__ExerciseAction_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ex_solution/action/detail/exercise_action__functions.h"

bool
ex_solution__action__ExerciseAction_SendGoal_Request__init(ex_solution__action__ExerciseAction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ex_solution__action__ExerciseAction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ex_solution__action__ExerciseAction_Goal__init(&msg->goal)) {
    ex_solution__action__ExerciseAction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ex_solution__action__ExerciseAction_SendGoal_Request__fini(ex_solution__action__ExerciseAction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ex_solution__action__ExerciseAction_Goal__fini(&msg->goal);
}

bool
ex_solution__action__ExerciseAction_SendGoal_Request__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Request * lhs, const ex_solution__action__ExerciseAction_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ex_solution__action__ExerciseAction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_SendGoal_Request__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Request * input,
  ex_solution__action__ExerciseAction_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ex_solution__action__ExerciseAction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ex_solution__action__ExerciseAction_SendGoal_Request *
ex_solution__action__ExerciseAction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_SendGoal_Request * msg = (ex_solution__action__ExerciseAction_SendGoal_Request *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_SendGoal_Request));
  bool success = ex_solution__action__ExerciseAction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_SendGoal_Request__destroy(ex_solution__action__ExerciseAction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__init(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_SendGoal_Request * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_SendGoal_Request__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__fini(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array)
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
      ex_solution__action__ExerciseAction_SendGoal_Request__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_SendGoal_Request__Sequence *
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array = (ex_solution__action__ExerciseAction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__destroy(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * lhs, const ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * input,
  ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_SendGoal_Request * data =
      (ex_solution__action__ExerciseAction_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ex_solution__action__ExerciseAction_SendGoal_Response__init(ex_solution__action__ExerciseAction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ex_solution__action__ExerciseAction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ex_solution__action__ExerciseAction_SendGoal_Response__fini(ex_solution__action__ExerciseAction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ex_solution__action__ExerciseAction_SendGoal_Response__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Response * lhs, const ex_solution__action__ExerciseAction_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_SendGoal_Response__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Response * input,
  ex_solution__action__ExerciseAction_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ex_solution__action__ExerciseAction_SendGoal_Response *
ex_solution__action__ExerciseAction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_SendGoal_Response * msg = (ex_solution__action__ExerciseAction_SendGoal_Response *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_SendGoal_Response));
  bool success = ex_solution__action__ExerciseAction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_SendGoal_Response__destroy(ex_solution__action__ExerciseAction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__init(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_SendGoal_Response * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_SendGoal_Response__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__fini(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array)
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
      ex_solution__action__ExerciseAction_SendGoal_Response__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_SendGoal_Response__Sequence *
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array = (ex_solution__action__ExerciseAction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__destroy(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * lhs, const ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * input,
  ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_SendGoal_Response * data =
      (ex_solution__action__ExerciseAction_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ex_solution__action__ExerciseAction_GetResult_Request__init(ex_solution__action__ExerciseAction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ex_solution__action__ExerciseAction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ex_solution__action__ExerciseAction_GetResult_Request__fini(ex_solution__action__ExerciseAction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ex_solution__action__ExerciseAction_GetResult_Request__are_equal(const ex_solution__action__ExerciseAction_GetResult_Request * lhs, const ex_solution__action__ExerciseAction_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_GetResult_Request__copy(
  const ex_solution__action__ExerciseAction_GetResult_Request * input,
  ex_solution__action__ExerciseAction_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ex_solution__action__ExerciseAction_GetResult_Request *
ex_solution__action__ExerciseAction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_GetResult_Request * msg = (ex_solution__action__ExerciseAction_GetResult_Request *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_GetResult_Request));
  bool success = ex_solution__action__ExerciseAction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_GetResult_Request__destroy(ex_solution__action__ExerciseAction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__init(ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_GetResult_Request * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_GetResult_Request *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_GetResult_Request__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__fini(ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array)
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
      ex_solution__action__ExerciseAction_GetResult_Request__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_GetResult_Request__Sequence *
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array = (ex_solution__action__ExerciseAction_GetResult_Request__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__destroy(ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__are_equal(const ex_solution__action__ExerciseAction_GetResult_Request__Sequence * lhs, const ex_solution__action__ExerciseAction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__copy(
  const ex_solution__action__ExerciseAction_GetResult_Request__Sequence * input,
  ex_solution__action__ExerciseAction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_GetResult_Request * data =
      (ex_solution__action__ExerciseAction_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ex_solution/action/detail/exercise_action__functions.h"

bool
ex_solution__action__ExerciseAction_GetResult_Response__init(ex_solution__action__ExerciseAction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ex_solution__action__ExerciseAction_Result__init(&msg->result)) {
    ex_solution__action__ExerciseAction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ex_solution__action__ExerciseAction_GetResult_Response__fini(ex_solution__action__ExerciseAction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ex_solution__action__ExerciseAction_Result__fini(&msg->result);
}

bool
ex_solution__action__ExerciseAction_GetResult_Response__are_equal(const ex_solution__action__ExerciseAction_GetResult_Response * lhs, const ex_solution__action__ExerciseAction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ex_solution__action__ExerciseAction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_GetResult_Response__copy(
  const ex_solution__action__ExerciseAction_GetResult_Response * input,
  ex_solution__action__ExerciseAction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ex_solution__action__ExerciseAction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ex_solution__action__ExerciseAction_GetResult_Response *
ex_solution__action__ExerciseAction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_GetResult_Response * msg = (ex_solution__action__ExerciseAction_GetResult_Response *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_GetResult_Response));
  bool success = ex_solution__action__ExerciseAction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_GetResult_Response__destroy(ex_solution__action__ExerciseAction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__init(ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_GetResult_Response * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_GetResult_Response *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_GetResult_Response__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__fini(ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array)
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
      ex_solution__action__ExerciseAction_GetResult_Response__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_GetResult_Response__Sequence *
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array = (ex_solution__action__ExerciseAction_GetResult_Response__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__destroy(ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__are_equal(const ex_solution__action__ExerciseAction_GetResult_Response__Sequence * lhs, const ex_solution__action__ExerciseAction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__copy(
  const ex_solution__action__ExerciseAction_GetResult_Response__Sequence * input,
  ex_solution__action__ExerciseAction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_GetResult_Response * data =
      (ex_solution__action__ExerciseAction_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ex_solution/action/detail/exercise_action__functions.h"

bool
ex_solution__action__ExerciseAction_FeedbackMessage__init(ex_solution__action__ExerciseAction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ex_solution__action__ExerciseAction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ex_solution__action__ExerciseAction_Feedback__init(&msg->feedback)) {
    ex_solution__action__ExerciseAction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ex_solution__action__ExerciseAction_FeedbackMessage__fini(ex_solution__action__ExerciseAction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ex_solution__action__ExerciseAction_Feedback__fini(&msg->feedback);
}

bool
ex_solution__action__ExerciseAction_FeedbackMessage__are_equal(const ex_solution__action__ExerciseAction_FeedbackMessage * lhs, const ex_solution__action__ExerciseAction_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ex_solution__action__ExerciseAction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_FeedbackMessage__copy(
  const ex_solution__action__ExerciseAction_FeedbackMessage * input,
  ex_solution__action__ExerciseAction_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ex_solution__action__ExerciseAction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ex_solution__action__ExerciseAction_FeedbackMessage *
ex_solution__action__ExerciseAction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_FeedbackMessage * msg = (ex_solution__action__ExerciseAction_FeedbackMessage *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_solution__action__ExerciseAction_FeedbackMessage));
  bool success = ex_solution__action__ExerciseAction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ex_solution__action__ExerciseAction_FeedbackMessage__destroy(ex_solution__action__ExerciseAction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ex_solution__action__ExerciseAction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__init(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_FeedbackMessage * data = NULL;

  if (size) {
    data = (ex_solution__action__ExerciseAction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ex_solution__action__ExerciseAction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_solution__action__ExerciseAction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_solution__action__ExerciseAction_FeedbackMessage__fini(&data[i - 1]);
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
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__fini(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array)
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
      ex_solution__action__ExerciseAction_FeedbackMessage__fini(&array->data[i]);
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

ex_solution__action__ExerciseAction_FeedbackMessage__Sequence *
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array = (ex_solution__action__ExerciseAction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__destroy(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__are_equal(const ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * lhs, const ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ex_solution__action__ExerciseAction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__copy(
  const ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * input,
  ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ex_solution__action__ExerciseAction_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ex_solution__action__ExerciseAction_FeedbackMessage * data =
      (ex_solution__action__ExerciseAction_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ex_solution__action__ExerciseAction_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ex_solution__action__ExerciseAction_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ex_solution__action__ExerciseAction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

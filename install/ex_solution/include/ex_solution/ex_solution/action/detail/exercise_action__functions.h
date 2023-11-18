// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ex_solution:action/ExerciseAction.idl
// generated code does not contain a copyright notice

#ifndef EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__FUNCTIONS_H_
#define EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ex_solution/msg/rosidl_generator_c__visibility_control.h"

#include "ex_solution/action/detail/exercise_action__struct.h"

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_Goal
 * )) before or use
 * ex_solution__action__ExerciseAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Goal__init(ex_solution__action__ExerciseAction_Goal * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Goal__fini(ex_solution__action__ExerciseAction_Goal * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_Goal *
ex_solution__action__ExerciseAction_Goal__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Goal__destroy(ex_solution__action__ExerciseAction_Goal * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Goal__are_equal(const ex_solution__action__ExerciseAction_Goal * lhs, const ex_solution__action__ExerciseAction_Goal * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Goal__copy(
  const ex_solution__action__ExerciseAction_Goal * input,
  ex_solution__action__ExerciseAction_Goal * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Goal__Sequence__init(ex_solution__action__ExerciseAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Goal__Sequence__fini(ex_solution__action__ExerciseAction_Goal__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_Goal__Sequence *
ex_solution__action__ExerciseAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Goal__Sequence__destroy(ex_solution__action__ExerciseAction_Goal__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Goal__Sequence__are_equal(const ex_solution__action__ExerciseAction_Goal__Sequence * lhs, const ex_solution__action__ExerciseAction_Goal__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Goal__Sequence__copy(
  const ex_solution__action__ExerciseAction_Goal__Sequence * input,
  ex_solution__action__ExerciseAction_Goal__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_Result
 * )) before or use
 * ex_solution__action__ExerciseAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Result__init(ex_solution__action__ExerciseAction_Result * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Result__fini(ex_solution__action__ExerciseAction_Result * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_Result *
ex_solution__action__ExerciseAction_Result__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Result__destroy(ex_solution__action__ExerciseAction_Result * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Result__are_equal(const ex_solution__action__ExerciseAction_Result * lhs, const ex_solution__action__ExerciseAction_Result * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Result__copy(
  const ex_solution__action__ExerciseAction_Result * input,
  ex_solution__action__ExerciseAction_Result * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Result__Sequence__init(ex_solution__action__ExerciseAction_Result__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Result__Sequence__fini(ex_solution__action__ExerciseAction_Result__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_Result__Sequence *
ex_solution__action__ExerciseAction_Result__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Result__Sequence__destroy(ex_solution__action__ExerciseAction_Result__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Result__Sequence__are_equal(const ex_solution__action__ExerciseAction_Result__Sequence * lhs, const ex_solution__action__ExerciseAction_Result__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Result__Sequence__copy(
  const ex_solution__action__ExerciseAction_Result__Sequence * input,
  ex_solution__action__ExerciseAction_Result__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_Feedback
 * )) before or use
 * ex_solution__action__ExerciseAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Feedback__init(ex_solution__action__ExerciseAction_Feedback * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Feedback__fini(ex_solution__action__ExerciseAction_Feedback * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_Feedback *
ex_solution__action__ExerciseAction_Feedback__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Feedback__destroy(ex_solution__action__ExerciseAction_Feedback * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Feedback__are_equal(const ex_solution__action__ExerciseAction_Feedback * lhs, const ex_solution__action__ExerciseAction_Feedback * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Feedback__copy(
  const ex_solution__action__ExerciseAction_Feedback * input,
  ex_solution__action__ExerciseAction_Feedback * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Feedback__Sequence__init(ex_solution__action__ExerciseAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Feedback__Sequence__fini(ex_solution__action__ExerciseAction_Feedback__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_Feedback__Sequence *
ex_solution__action__ExerciseAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_Feedback__Sequence__destroy(ex_solution__action__ExerciseAction_Feedback__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Feedback__Sequence__are_equal(const ex_solution__action__ExerciseAction_Feedback__Sequence * lhs, const ex_solution__action__ExerciseAction_Feedback__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_Feedback__Sequence__copy(
  const ex_solution__action__ExerciseAction_Feedback__Sequence * input,
  ex_solution__action__ExerciseAction_Feedback__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_SendGoal_Request
 * )) before or use
 * ex_solution__action__ExerciseAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Request__init(ex_solution__action__ExerciseAction_SendGoal_Request * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Request__fini(ex_solution__action__ExerciseAction_SendGoal_Request * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_SendGoal_Request *
ex_solution__action__ExerciseAction_SendGoal_Request__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Request__destroy(ex_solution__action__ExerciseAction_SendGoal_Request * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Request__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Request * lhs, const ex_solution__action__ExerciseAction_SendGoal_Request * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Request__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Request * input,
  ex_solution__action__ExerciseAction_SendGoal_Request * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__init(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__fini(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence *
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__destroy(ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * lhs, const ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Request__Sequence__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * input,
  ex_solution__action__ExerciseAction_SendGoal_Request__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_SendGoal_Response
 * )) before or use
 * ex_solution__action__ExerciseAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Response__init(ex_solution__action__ExerciseAction_SendGoal_Response * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Response__fini(ex_solution__action__ExerciseAction_SendGoal_Response * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_SendGoal_Response *
ex_solution__action__ExerciseAction_SendGoal_Response__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Response__destroy(ex_solution__action__ExerciseAction_SendGoal_Response * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Response__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Response * lhs, const ex_solution__action__ExerciseAction_SendGoal_Response * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Response__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Response * input,
  ex_solution__action__ExerciseAction_SendGoal_Response * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__init(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__fini(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence *
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__destroy(ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__are_equal(const ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * lhs, const ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_SendGoal_Response__Sequence__copy(
  const ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * input,
  ex_solution__action__ExerciseAction_SendGoal_Response__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_GetResult_Request
 * )) before or use
 * ex_solution__action__ExerciseAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Request__init(ex_solution__action__ExerciseAction_GetResult_Request * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Request__fini(ex_solution__action__ExerciseAction_GetResult_Request * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_GetResult_Request *
ex_solution__action__ExerciseAction_GetResult_Request__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Request__destroy(ex_solution__action__ExerciseAction_GetResult_Request * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Request__are_equal(const ex_solution__action__ExerciseAction_GetResult_Request * lhs, const ex_solution__action__ExerciseAction_GetResult_Request * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Request__copy(
  const ex_solution__action__ExerciseAction_GetResult_Request * input,
  ex_solution__action__ExerciseAction_GetResult_Request * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__init(ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__fini(ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_GetResult_Request__Sequence *
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__destroy(ex_solution__action__ExerciseAction_GetResult_Request__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__are_equal(const ex_solution__action__ExerciseAction_GetResult_Request__Sequence * lhs, const ex_solution__action__ExerciseAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Request__Sequence__copy(
  const ex_solution__action__ExerciseAction_GetResult_Request__Sequence * input,
  ex_solution__action__ExerciseAction_GetResult_Request__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_GetResult_Response
 * )) before or use
 * ex_solution__action__ExerciseAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Response__init(ex_solution__action__ExerciseAction_GetResult_Response * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Response__fini(ex_solution__action__ExerciseAction_GetResult_Response * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_GetResult_Response *
ex_solution__action__ExerciseAction_GetResult_Response__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Response__destroy(ex_solution__action__ExerciseAction_GetResult_Response * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Response__are_equal(const ex_solution__action__ExerciseAction_GetResult_Response * lhs, const ex_solution__action__ExerciseAction_GetResult_Response * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Response__copy(
  const ex_solution__action__ExerciseAction_GetResult_Response * input,
  ex_solution__action__ExerciseAction_GetResult_Response * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__init(ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__fini(ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_GetResult_Response__Sequence *
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__destroy(ex_solution__action__ExerciseAction_GetResult_Response__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__are_equal(const ex_solution__action__ExerciseAction_GetResult_Response__Sequence * lhs, const ex_solution__action__ExerciseAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_GetResult_Response__Sequence__copy(
  const ex_solution__action__ExerciseAction_GetResult_Response__Sequence * input,
  ex_solution__action__ExerciseAction_GetResult_Response__Sequence * output);

/// Initialize action/ExerciseAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_solution__action__ExerciseAction_FeedbackMessage
 * )) before or use
 * ex_solution__action__ExerciseAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_FeedbackMessage__init(ex_solution__action__ExerciseAction_FeedbackMessage * msg);

/// Finalize action/ExerciseAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_FeedbackMessage__fini(ex_solution__action__ExerciseAction_FeedbackMessage * msg);

/// Create action/ExerciseAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_solution__action__ExerciseAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_FeedbackMessage *
ex_solution__action__ExerciseAction_FeedbackMessage__create();

/// Destroy action/ExerciseAction message.
/**
 * It calls
 * ex_solution__action__ExerciseAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_FeedbackMessage__destroy(ex_solution__action__ExerciseAction_FeedbackMessage * msg);

/// Check for action/ExerciseAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_FeedbackMessage__are_equal(const ex_solution__action__ExerciseAction_FeedbackMessage * lhs, const ex_solution__action__ExerciseAction_FeedbackMessage * rhs);

/// Copy a action/ExerciseAction message.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_FeedbackMessage__copy(
  const ex_solution__action__ExerciseAction_FeedbackMessage * input,
  ex_solution__action__ExerciseAction_FeedbackMessage * output);

/// Initialize array of action/ExerciseAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_solution__action__ExerciseAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__init(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__fini(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array);

/// Create array of action/ExerciseAction messages.
/**
 * It allocates the memory for the array and calls
 * ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence *
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExerciseAction messages.
/**
 * It calls
 * ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
void
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__destroy(ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * array);

/// Check for action/ExerciseAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__are_equal(const ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * lhs, const ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ExerciseAction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ex_solution
bool
ex_solution__action__ExerciseAction_FeedbackMessage__Sequence__copy(
  const ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * input,
  ex_solution__action__ExerciseAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__FUNCTIONS_H_

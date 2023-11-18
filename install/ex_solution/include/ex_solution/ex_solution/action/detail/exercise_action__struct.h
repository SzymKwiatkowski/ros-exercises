// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex_solution:action/ExerciseAction.idl
// generated code does not contain a copyright notice

#ifndef EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__STRUCT_H_
#define EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_Goal
{
  float goal_distance;
  float timeout;
  float precision;
} ex_solution__action__ExerciseAction_Goal;

// Struct for a sequence of ex_solution__action__ExerciseAction_Goal.
typedef struct ex_solution__action__ExerciseAction_Goal__Sequence
{
  ex_solution__action__ExerciseAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_Result
{
  bool succeeded;
  float final_precision;
  float total_time;
} ex_solution__action__ExerciseAction_Result;

// Struct for a sequence of ex_solution__action__ExerciseAction_Result.
typedef struct ex_solution__action__ExerciseAction_Result__Sequence
{
  ex_solution__action__ExerciseAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_Feedback
{
  float current_distance;
  float estimated_time;
} ex_solution__action__ExerciseAction_Feedback;

// Struct for a sequence of ex_solution__action__ExerciseAction_Feedback.
typedef struct ex_solution__action__ExerciseAction_Feedback__Sequence
{
  ex_solution__action__ExerciseAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ex_solution/action/detail/exercise_action__struct.h"

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ex_solution__action__ExerciseAction_Goal goal;
} ex_solution__action__ExerciseAction_SendGoal_Request;

// Struct for a sequence of ex_solution__action__ExerciseAction_SendGoal_Request.
typedef struct ex_solution__action__ExerciseAction_SendGoal_Request__Sequence
{
  ex_solution__action__ExerciseAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ex_solution__action__ExerciseAction_SendGoal_Response;

// Struct for a sequence of ex_solution__action__ExerciseAction_SendGoal_Response.
typedef struct ex_solution__action__ExerciseAction_SendGoal_Response__Sequence
{
  ex_solution__action__ExerciseAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ex_solution__action__ExerciseAction_GetResult_Request;

// Struct for a sequence of ex_solution__action__ExerciseAction_GetResult_Request.
typedef struct ex_solution__action__ExerciseAction_GetResult_Request__Sequence
{
  ex_solution__action__ExerciseAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ex_solution/action/detail/exercise_action__struct.h"

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_GetResult_Response
{
  int8_t status;
  ex_solution__action__ExerciseAction_Result result;
} ex_solution__action__ExerciseAction_GetResult_Response;

// Struct for a sequence of ex_solution__action__ExerciseAction_GetResult_Response.
typedef struct ex_solution__action__ExerciseAction_GetResult_Response__Sequence
{
  ex_solution__action__ExerciseAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ex_solution/action/detail/exercise_action__struct.h"

/// Struct defined in action/ExerciseAction in the package ex_solution.
typedef struct ex_solution__action__ExerciseAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ex_solution__action__ExerciseAction_Feedback feedback;
} ex_solution__action__ExerciseAction_FeedbackMessage;

// Struct for a sequence of ex_solution__action__ExerciseAction_FeedbackMessage.
typedef struct ex_solution__action__ExerciseAction_FeedbackMessage__Sequence
{
  ex_solution__action__ExerciseAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_solution__action__ExerciseAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__STRUCT_H_

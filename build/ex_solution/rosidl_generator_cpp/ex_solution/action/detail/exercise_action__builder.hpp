// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ex_solution:action/ExerciseAction.idl
// generated code does not contain a copyright notice

#ifndef EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__BUILDER_HPP_
#define EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ex_solution/action/detail/exercise_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_Goal_precision
{
public:
  explicit Init_ExerciseAction_Goal_precision(::ex_solution::action::ExerciseAction_Goal & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_Goal precision(::ex_solution::action::ExerciseAction_Goal::_precision_type arg)
  {
    msg_.precision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Goal msg_;
};

class Init_ExerciseAction_Goal_timeout
{
public:
  explicit Init_ExerciseAction_Goal_timeout(::ex_solution::action::ExerciseAction_Goal & msg)
  : msg_(msg)
  {}
  Init_ExerciseAction_Goal_precision timeout(::ex_solution::action::ExerciseAction_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_ExerciseAction_Goal_precision(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Goal msg_;
};

class Init_ExerciseAction_Goal_goal_distance
{
public:
  Init_ExerciseAction_Goal_goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_Goal_timeout goal_distance(::ex_solution::action::ExerciseAction_Goal::_goal_distance_type arg)
  {
    msg_.goal_distance = std::move(arg);
    return Init_ExerciseAction_Goal_timeout(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_Goal>()
{
  return ex_solution::action::builder::Init_ExerciseAction_Goal_goal_distance();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_Result_total_time
{
public:
  explicit Init_ExerciseAction_Result_total_time(::ex_solution::action::ExerciseAction_Result & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_Result total_time(::ex_solution::action::ExerciseAction_Result::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Result msg_;
};

class Init_ExerciseAction_Result_final_precision
{
public:
  explicit Init_ExerciseAction_Result_final_precision(::ex_solution::action::ExerciseAction_Result & msg)
  : msg_(msg)
  {}
  Init_ExerciseAction_Result_total_time final_precision(::ex_solution::action::ExerciseAction_Result::_final_precision_type arg)
  {
    msg_.final_precision = std::move(arg);
    return Init_ExerciseAction_Result_total_time(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Result msg_;
};

class Init_ExerciseAction_Result_succeeded
{
public:
  Init_ExerciseAction_Result_succeeded()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_Result_final_precision succeeded(::ex_solution::action::ExerciseAction_Result::_succeeded_type arg)
  {
    msg_.succeeded = std::move(arg);
    return Init_ExerciseAction_Result_final_precision(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_Result>()
{
  return ex_solution::action::builder::Init_ExerciseAction_Result_succeeded();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_Feedback_estimated_time
{
public:
  explicit Init_ExerciseAction_Feedback_estimated_time(::ex_solution::action::ExerciseAction_Feedback & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_Feedback estimated_time(::ex_solution::action::ExerciseAction_Feedback::_estimated_time_type arg)
  {
    msg_.estimated_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Feedback msg_;
};

class Init_ExerciseAction_Feedback_current_distance
{
public:
  Init_ExerciseAction_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_Feedback_estimated_time current_distance(::ex_solution::action::ExerciseAction_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return Init_ExerciseAction_Feedback_estimated_time(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_Feedback>()
{
  return ex_solution::action::builder::Init_ExerciseAction_Feedback_current_distance();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_SendGoal_Request_goal
{
public:
  explicit Init_ExerciseAction_SendGoal_Request_goal(::ex_solution::action::ExerciseAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_SendGoal_Request goal(::ex_solution::action::ExerciseAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_SendGoal_Request msg_;
};

class Init_ExerciseAction_SendGoal_Request_goal_id
{
public:
  Init_ExerciseAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_SendGoal_Request_goal goal_id(::ex_solution::action::ExerciseAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExerciseAction_SendGoal_Request_goal(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_SendGoal_Request>()
{
  return ex_solution::action::builder::Init_ExerciseAction_SendGoal_Request_goal_id();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_SendGoal_Response_stamp
{
public:
  explicit Init_ExerciseAction_SendGoal_Response_stamp(::ex_solution::action::ExerciseAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_SendGoal_Response stamp(::ex_solution::action::ExerciseAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_SendGoal_Response msg_;
};

class Init_ExerciseAction_SendGoal_Response_accepted
{
public:
  Init_ExerciseAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_SendGoal_Response_stamp accepted(::ex_solution::action::ExerciseAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExerciseAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_SendGoal_Response>()
{
  return ex_solution::action::builder::Init_ExerciseAction_SendGoal_Response_accepted();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_GetResult_Request_goal_id
{
public:
  Init_ExerciseAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ex_solution::action::ExerciseAction_GetResult_Request goal_id(::ex_solution::action::ExerciseAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_GetResult_Request>()
{
  return ex_solution::action::builder::Init_ExerciseAction_GetResult_Request_goal_id();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_GetResult_Response_result
{
public:
  explicit Init_ExerciseAction_GetResult_Response_result(::ex_solution::action::ExerciseAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_GetResult_Response result(::ex_solution::action::ExerciseAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_GetResult_Response msg_;
};

class Init_ExerciseAction_GetResult_Response_status
{
public:
  Init_ExerciseAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_GetResult_Response_result status(::ex_solution::action::ExerciseAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExerciseAction_GetResult_Response_result(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_GetResult_Response>()
{
  return ex_solution::action::builder::Init_ExerciseAction_GetResult_Response_status();
}

}  // namespace ex_solution


namespace ex_solution
{

namespace action
{

namespace builder
{

class Init_ExerciseAction_FeedbackMessage_feedback
{
public:
  explicit Init_ExerciseAction_FeedbackMessage_feedback(::ex_solution::action::ExerciseAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ex_solution::action::ExerciseAction_FeedbackMessage feedback(::ex_solution::action::ExerciseAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_FeedbackMessage msg_;
};

class Init_ExerciseAction_FeedbackMessage_goal_id
{
public:
  Init_ExerciseAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseAction_FeedbackMessage_feedback goal_id(::ex_solution::action::ExerciseAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExerciseAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::ex_solution::action::ExerciseAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex_solution::action::ExerciseAction_FeedbackMessage>()
{
  return ex_solution::action::builder::Init_ExerciseAction_FeedbackMessage_goal_id();
}

}  // namespace ex_solution

#endif  // EX_SOLUTION__ACTION__DETAIL__EXERCISE_ACTION__BUILDER_HPP_

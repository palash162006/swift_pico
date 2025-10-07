// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mav_planning_msgs:srv/ChangeNameService.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__SRV__DETAIL__CHANGE_NAME_SERVICE__BUILDER_HPP_
#define MAV_PLANNING_MSGS__SRV__DETAIL__CHANGE_NAME_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mav_planning_msgs/srv/detail/change_name_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mav_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeNameService_Request_name
{
public:
  Init_ChangeNameService_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mav_planning_msgs::srv::ChangeNameService_Request name(::mav_planning_msgs::srv::ChangeNameService_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_planning_msgs::srv::ChangeNameService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_planning_msgs::srv::ChangeNameService_Request>()
{
  return mav_planning_msgs::srv::builder::Init_ChangeNameService_Request_name();
}

}  // namespace mav_planning_msgs


namespace mav_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeNameService_Response_message
{
public:
  explicit Init_ChangeNameService_Response_message(::mav_planning_msgs::srv::ChangeNameService_Response & msg)
  : msg_(msg)
  {}
  ::mav_planning_msgs::srv::ChangeNameService_Response message(::mav_planning_msgs::srv::ChangeNameService_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_planning_msgs::srv::ChangeNameService_Response msg_;
};

class Init_ChangeNameService_Response_success
{
public:
  Init_ChangeNameService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeNameService_Response_message success(::mav_planning_msgs::srv::ChangeNameService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChangeNameService_Response_message(msg_);
  }

private:
  ::mav_planning_msgs::srv::ChangeNameService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_planning_msgs::srv::ChangeNameService_Response>()
{
  return mav_planning_msgs::srv::builder::Init_ChangeNameService_Response_success();
}

}  // namespace mav_planning_msgs

#endif  // MAV_PLANNING_MSGS__SRV__DETAIL__CHANGE_NAME_SERVICE__BUILDER_HPP_

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mav_planning_msgs:msg/PolynomialTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mav_planning_msgs/msg/detail/polynomial_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mav_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PolynomialTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mav_planning_msgs::msg::PolynomialTrajectory(_init);
}

void PolynomialTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mav_planning_msgs::msg::PolynomialTrajectory *>(message_memory);
  typed_message->~PolynomialTrajectory();
}

size_t size_function__PolynomialTrajectory__segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mav_planning_msgs::msg::PolynomialSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolynomialTrajectory__segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mav_planning_msgs::msg::PolynomialSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__PolynomialTrajectory__segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mav_planning_msgs::msg::PolynomialSegment> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolynomialTrajectory__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mav_planning_msgs::msg::PolynomialSegment *>(
    get_const_function__PolynomialTrajectory__segments(untyped_member, index));
  auto & value = *reinterpret_cast<mav_planning_msgs::msg::PolynomialSegment *>(untyped_value);
  value = item;
}

void assign_function__PolynomialTrajectory__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mav_planning_msgs::msg::PolynomialSegment *>(
    get_function__PolynomialTrajectory__segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const mav_planning_msgs::msg::PolynomialSegment *>(untyped_value);
  item = value;
}

void resize_function__PolynomialTrajectory__segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mav_planning_msgs::msg::PolynomialSegment> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PolynomialTrajectory_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_planning_msgs::msg::PolynomialTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mav_planning_msgs::msg::PolynomialSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_planning_msgs::msg::PolynomialTrajectory, segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolynomialTrajectory__segments,  // size() function pointer
    get_const_function__PolynomialTrajectory__segments,  // get_const(index) function pointer
    get_function__PolynomialTrajectory__segments,  // get(index) function pointer
    fetch_function__PolynomialTrajectory__segments,  // fetch(index, &value) function pointer
    assign_function__PolynomialTrajectory__segments,  // assign(index, value) function pointer
    resize_function__PolynomialTrajectory__segments  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PolynomialTrajectory_message_members = {
  "mav_planning_msgs::msg",  // message namespace
  "PolynomialTrajectory",  // message name
  2,  // number of fields
  sizeof(mav_planning_msgs::msg::PolynomialTrajectory),
  PolynomialTrajectory_message_member_array,  // message members
  PolynomialTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  PolynomialTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PolynomialTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PolynomialTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mav_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mav_planning_msgs::msg::PolynomialTrajectory>()
{
  return &::mav_planning_msgs::msg::rosidl_typesupport_introspection_cpp::PolynomialTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mav_planning_msgs, msg, PolynomialTrajectory)() {
  return &::mav_planning_msgs::msg::rosidl_typesupport_introspection_cpp::PolynomialTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

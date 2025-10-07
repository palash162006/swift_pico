// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mav_planning_msgs:msg/PolygonWithHoles.idl
// generated code does not contain a copyright notice
#include "mav_planning_msgs/msg/detail/polygon_with_holes__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mav_planning_msgs/msg/detail/polygon_with_holes__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace mav_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mav_planning_msgs::msg::Polygon2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mav_planning_msgs::msg::Polygon2D &);
size_t get_serialized_size(
  const mav_planning_msgs::msg::Polygon2D &,
  size_t current_alignment);
size_t
max_serialized_size_Polygon2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mav_planning_msgs

// functions for mav_planning_msgs::msg::Polygon2D already declared above


namespace mav_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_planning_msgs
cdr_serialize(
  const mav_planning_msgs::msg::PolygonWithHoles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hull
  mav_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.hull,
    cdr);
  // Member: holes
  {
    size_t size = ros_message.holes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mav_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.holes[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mav_planning_msgs::msg::PolygonWithHoles & ros_message)
{
  // Member: hull
  mav_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.hull);

  // Member: holes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.holes.resize(size);
    for (size_t i = 0; i < size; i++) {
      mav_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.holes[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_planning_msgs
get_serialized_size(
  const mav_planning_msgs::msg::PolygonWithHoles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hull

  current_alignment +=
    mav_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.hull, current_alignment);
  // Member: holes
  {
    size_t array_size = ros_message.holes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mav_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.holes[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_planning_msgs
max_serialized_size_PolygonWithHoles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: hull
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mav_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Polygon2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: holes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mav_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Polygon2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mav_planning_msgs::msg::PolygonWithHoles;
    is_plain =
      (
      offsetof(DataType, holes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PolygonWithHoles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mav_planning_msgs::msg::PolygonWithHoles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PolygonWithHoles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mav_planning_msgs::msg::PolygonWithHoles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PolygonWithHoles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mav_planning_msgs::msg::PolygonWithHoles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PolygonWithHoles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PolygonWithHoles(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PolygonWithHoles__callbacks = {
  "mav_planning_msgs::msg",
  "PolygonWithHoles",
  _PolygonWithHoles__cdr_serialize,
  _PolygonWithHoles__cdr_deserialize,
  _PolygonWithHoles__get_serialized_size,
  _PolygonWithHoles__max_serialized_size
};

static rosidl_message_type_support_t _PolygonWithHoles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PolygonWithHoles__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mav_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mav_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mav_planning_msgs::msg::PolygonWithHoles>()
{
  return &mav_planning_msgs::msg::typesupport_fastrtps_cpp::_PolygonWithHoles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mav_planning_msgs, msg, PolygonWithHoles)() {
  return &mav_planning_msgs::msg::typesupport_fastrtps_cpp::_PolygonWithHoles__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mav_planning_msgs:msg/PolygonWithHolesStamped.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__MSG__DETAIL__POLYGON_WITH_HOLES_STAMPED__STRUCT_HPP_
#define MAV_PLANNING_MSGS__MSG__DETAIL__POLYGON_WITH_HOLES_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'polygon'
#include "mav_planning_msgs/msg/detail/polygon_with_holes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mav_planning_msgs__msg__PolygonWithHolesStamped __attribute__((deprecated))
#else
# define DEPRECATED__mav_planning_msgs__msg__PolygonWithHolesStamped __declspec(deprecated)
#endif

namespace mav_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PolygonWithHolesStamped_
{
  using Type = PolygonWithHolesStamped_<ContainerAllocator>;

  explicit PolygonWithHolesStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    polygon(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
    }
  }

  explicit PolygonWithHolesStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    polygon(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _polygon_type =
    mav_planning_msgs::msg::PolygonWithHoles_<ContainerAllocator>;
  _polygon_type polygon;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__polygon(
    const mav_planning_msgs::msg::PolygonWithHoles_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_planning_msgs__msg__PolygonWithHolesStamped
    std::shared_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_planning_msgs__msg__PolygonWithHolesStamped
    std::shared_ptr<mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolygonWithHolesStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolygonWithHolesStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolygonWithHolesStamped_

// alias to use template instance with default allocator
using PolygonWithHolesStamped =
  mav_planning_msgs::msg::PolygonWithHolesStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mav_planning_msgs

#endif  // MAV_PLANNING_MSGS__MSG__DETAIL__POLYGON_WITH_HOLES_STAMPED__STRUCT_HPP_

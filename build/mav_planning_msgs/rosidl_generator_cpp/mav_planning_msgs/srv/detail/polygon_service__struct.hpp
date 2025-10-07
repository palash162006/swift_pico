// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mav_planning_msgs:srv/PolygonService.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__STRUCT_HPP_
#define MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygon'
#include "mav_planning_msgs/msg/detail/polygon_with_holes_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mav_planning_msgs__srv__PolygonService_Request __attribute__((deprecated))
#else
# define DEPRECATED__mav_planning_msgs__srv__PolygonService_Request __declspec(deprecated)
#endif

namespace mav_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PolygonService_Request_
{
  using Type = PolygonService_Request_<ContainerAllocator>;

  explicit PolygonService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_init)
  {
    (void)_init;
  }

  explicit PolygonService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _polygon_type =
    mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator>;
  _polygon_type polygon;

  // setters for named parameter idiom
  Type & set__polygon(
    const mav_planning_msgs::msg::PolygonWithHolesStamped_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_planning_msgs__srv__PolygonService_Request
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_planning_msgs__srv__PolygonService_Request
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolygonService_Request_ & other) const
  {
    if (this->polygon != other.polygon) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolygonService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolygonService_Request_

// alias to use template instance with default allocator
using PolygonService_Request =
  mav_planning_msgs::srv::PolygonService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mav_planning_msgs


#ifndef _WIN32
# define DEPRECATED__mav_planning_msgs__srv__PolygonService_Response __attribute__((deprecated))
#else
# define DEPRECATED__mav_planning_msgs__srv__PolygonService_Response __declspec(deprecated)
#endif

namespace mav_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PolygonService_Response_
{
  using Type = PolygonService_Response_<ContainerAllocator>;

  explicit PolygonService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PolygonService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_planning_msgs__srv__PolygonService_Response
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_planning_msgs__srv__PolygonService_Response
    std::shared_ptr<mav_planning_msgs::srv::PolygonService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolygonService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolygonService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolygonService_Response_

// alias to use template instance with default allocator
using PolygonService_Response =
  mav_planning_msgs::srv::PolygonService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mav_planning_msgs

namespace mav_planning_msgs
{

namespace srv
{

struct PolygonService
{
  using Request = mav_planning_msgs::srv::PolygonService_Request;
  using Response = mav_planning_msgs::srv::PolygonService_Response;
};

}  // namespace srv

}  // namespace mav_planning_msgs

#endif  // MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__STRUCT_HPP_

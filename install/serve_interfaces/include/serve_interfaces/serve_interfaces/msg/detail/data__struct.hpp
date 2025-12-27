// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serve_interfaces:msg/Data.idl
// generated code does not contain a copyright notice

#ifndef SERVE_INTERFACES__MSG__DETAIL__DATA__STRUCT_HPP_
#define SERVE_INTERFACES__MSG__DETAIL__DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serve_interfaces__msg__Data __attribute__((deprecated))
#else
# define DEPRECATED__serve_interfaces__msg__Data __declspec(deprecated)
#endif

namespace serve_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Data_
{
  using Type = Data_<ContainerAllocator>;

  explicit Data_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
    }
  }

  explicit Data_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
    }
  }

  // field types and members
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serve_interfaces::msg::Data_<ContainerAllocator> *;
  using ConstRawPtr =
    const serve_interfaces::msg::Data_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serve_interfaces::msg::Data_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serve_interfaces::msg::Data_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serve_interfaces::msg::Data_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serve_interfaces::msg::Data_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serve_interfaces::msg::Data_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serve_interfaces::msg::Data_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serve_interfaces::msg::Data_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serve_interfaces::msg::Data_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serve_interfaces__msg__Data
    std::shared_ptr<serve_interfaces::msg::Data_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serve_interfaces__msg__Data
    std::shared_ptr<serve_interfaces::msg::Data_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Data_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Data_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Data_

// alias to use template instance with default allocator
using Data =
  serve_interfaces::msg::Data_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serve_interfaces

#endif  // SERVE_INTERFACES__MSG__DETAIL__DATA__STRUCT_HPP_

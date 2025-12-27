// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serve_interfaces:msg/Data.idl
// generated code does not contain a copyright notice

#ifndef SERVE_INTERFACES__MSG__DETAIL__DATA__BUILDER_HPP_
#define SERVE_INTERFACES__MSG__DETAIL__DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serve_interfaces/msg/detail/data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serve_interfaces
{

namespace msg
{

namespace builder
{

class Init_Data_distance
{
public:
  Init_Data_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serve_interfaces::msg::Data distance(::serve_interfaces::msg::Data::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serve_interfaces::msg::Data msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serve_interfaces::msg::Data>()
{
  return serve_interfaces::msg::builder::Init_Data_distance();
}

}  // namespace serve_interfaces

#endif  // SERVE_INTERFACES__MSG__DETAIL__DATA__BUILDER_HPP_

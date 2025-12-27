// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serve_interfaces:msg/Data.idl
// generated code does not contain a copyright notice

#ifndef SERVE_INTERFACES__MSG__DETAIL__DATA__TRAITS_HPP_
#define SERVE_INTERFACES__MSG__DETAIL__DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serve_interfaces/msg/detail/data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serve_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Data & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Data & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Data & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace serve_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use serve_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serve_interfaces::msg::Data & msg,
  std::ostream & out, size_t indentation = 0)
{
  serve_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serve_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const serve_interfaces::msg::Data & msg)
{
  return serve_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serve_interfaces::msg::Data>()
{
  return "serve_interfaces::msg::Data";
}

template<>
inline const char * name<serve_interfaces::msg::Data>()
{
  return "serve_interfaces/msg/Data";
}

template<>
struct has_fixed_size<serve_interfaces::msg::Data>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serve_interfaces::msg::Data>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serve_interfaces::msg::Data>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVE_INTERFACES__MSG__DETAIL__DATA__TRAITS_HPP_

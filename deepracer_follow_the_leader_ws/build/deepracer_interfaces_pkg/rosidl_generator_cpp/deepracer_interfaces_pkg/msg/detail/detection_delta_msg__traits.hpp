// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deepracer_interfaces_pkg:msg/DetectionDeltaMsg.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__TRAITS_HPP_
#define DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__TRAITS_HPP_

#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<deepracer_interfaces_pkg::msg::DetectionDeltaMsg>()
{
  return "deepracer_interfaces_pkg::msg::DetectionDeltaMsg";
}

template<>
inline const char * name<deepracer_interfaces_pkg::msg::DetectionDeltaMsg>()
{
  return "deepracer_interfaces_pkg/msg/DetectionDeltaMsg";
}

template<>
struct has_fixed_size<deepracer_interfaces_pkg::msg::DetectionDeltaMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deepracer_interfaces_pkg::msg::DetectionDeltaMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deepracer_interfaces_pkg::msg::DetectionDeltaMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__TRAITS_HPP_

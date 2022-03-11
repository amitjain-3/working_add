// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deepracer_interfaces_pkg:msg/DetectionDeltaMsg.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__BUILDER_HPP_
#define DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__BUILDER_HPP_

#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deepracer_interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_DetectionDeltaMsg_delta
{
public:
  Init_DetectionDeltaMsg_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deepracer_interfaces_pkg::msg::DetectionDeltaMsg delta(::deepracer_interfaces_pkg::msg::DetectionDeltaMsg::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deepracer_interfaces_pkg::msg::DetectionDeltaMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deepracer_interfaces_pkg::msg::DetectionDeltaMsg>()
{
  return deepracer_interfaces_pkg::msg::builder::Init_DetectionDeltaMsg_delta();
}

}  // namespace deepracer_interfaces_pkg

#endif  // DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__BUILDER_HPP_

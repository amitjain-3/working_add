// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deepracer_interfaces_pkg:srv/SetMaxSpeedSrv.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__SRV__DETAIL__SET_MAX_SPEED_SRV__BUILDER_HPP_
#define DEEPRACER_INTERFACES_PKG__SRV__DETAIL__SET_MAX_SPEED_SRV__BUILDER_HPP_

#include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace builder
{

class Init_SetMaxSpeedSrv_Request_max_speed_pct
{
public:
  Init_SetMaxSpeedSrv_Request_max_speed_pct()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Request max_speed_pct(::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Request::_max_speed_pct_type arg)
  {
    msg_.max_speed_pct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Request>()
{
  return deepracer_interfaces_pkg::srv::builder::Init_SetMaxSpeedSrv_Request_max_speed_pct();
}

}  // namespace deepracer_interfaces_pkg


namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace builder
{

class Init_SetMaxSpeedSrv_Response_error
{
public:
  Init_SetMaxSpeedSrv_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Response error(::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::deepracer_interfaces_pkg::srv::SetMaxSpeedSrv_Response>()
{
  return deepracer_interfaces_pkg::srv::builder::Init_SetMaxSpeedSrv_Response_error();
}

}  // namespace deepracer_interfaces_pkg

#endif  // DEEPRACER_INTERFACES_PKG__SRV__DETAIL__SET_MAX_SPEED_SRV__BUILDER_HPP_

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:msg/NetworkConnectionStatus.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/msg/detail/network_connection_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/msg/detail/network_connection_status__struct.h"
#include "deepracer_interfaces_pkg/msg/detail/network_connection_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NetworkConnectionStatus__ros_msg_type = deepracer_interfaces_pkg__msg__NetworkConnectionStatus;

static bool _NetworkConnectionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NetworkConnectionStatus__ros_msg_type * ros_message = static_cast<const _NetworkConnectionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: network_connected
  {
    cdr << (ros_message->network_connected ? true : false);
  }

  return true;
}

static bool _NetworkConnectionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NetworkConnectionStatus__ros_msg_type * ros_message = static_cast<_NetworkConnectionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: network_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->network_connected = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__msg__NetworkConnectionStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NetworkConnectionStatus__ros_msg_type * ros_message = static_cast<const _NetworkConnectionStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name network_connected
  {
    size_t item_size = sizeof(ros_message->network_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NetworkConnectionStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__msg__NetworkConnectionStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__msg__NetworkConnectionStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: network_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NetworkConnectionStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__msg__NetworkConnectionStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NetworkConnectionStatus = {
  "deepracer_interfaces_pkg::msg",
  "NetworkConnectionStatus",
  _NetworkConnectionStatus__cdr_serialize,
  _NetworkConnectionStatus__cdr_deserialize,
  _NetworkConnectionStatus__get_serialized_size,
  _NetworkConnectionStatus__max_serialized_size
};

static rosidl_message_type_support_t _NetworkConnectionStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NetworkConnectionStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, msg, NetworkConnectionStatus)() {
  return &_NetworkConnectionStatus__type_support;
}

#if defined(__cplusplus)
}
#endif

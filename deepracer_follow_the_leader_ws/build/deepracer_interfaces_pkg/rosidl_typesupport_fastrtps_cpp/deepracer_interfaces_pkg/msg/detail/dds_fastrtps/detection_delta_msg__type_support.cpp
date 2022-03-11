// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deepracer_interfaces_pkg:msg/DetectionDeltaMsg.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__struct.hpp"

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

namespace deepracer_interfaces_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
cdr_serialize(
  const deepracer_interfaces_pkg::msg::DetectionDeltaMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: delta
  {
    cdr << ros_message.delta;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deepracer_interfaces_pkg::msg::DetectionDeltaMsg & ros_message)
{
  // Member: delta
  {
    cdr >> ros_message.delta;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
get_serialized_size(
  const deepracer_interfaces_pkg::msg::DetectionDeltaMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: delta
  {
    size_t array_size = ros_message.delta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.delta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
max_serialized_size_DetectionDeltaMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: delta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DetectionDeltaMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deepracer_interfaces_pkg::msg::DetectionDeltaMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectionDeltaMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deepracer_interfaces_pkg::msg::DetectionDeltaMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectionDeltaMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deepracer_interfaces_pkg::msg::DetectionDeltaMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectionDeltaMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectionDeltaMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectionDeltaMsg__callbacks = {
  "deepracer_interfaces_pkg::msg",
  "DetectionDeltaMsg",
  _DetectionDeltaMsg__cdr_serialize,
  _DetectionDeltaMsg__cdr_deserialize,
  _DetectionDeltaMsg__get_serialized_size,
  _DetectionDeltaMsg__max_serialized_size
};

static rosidl_message_type_support_t _DetectionDeltaMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectionDeltaMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deepracer_interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<deepracer_interfaces_pkg::msg::DetectionDeltaMsg>()
{
  return &deepracer_interfaces_pkg::msg::typesupport_fastrtps_cpp::_DetectionDeltaMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deepracer_interfaces_pkg, msg, DetectionDeltaMsg)() {
  return &deepracer_interfaces_pkg::msg::typesupport_fastrtps_cpp::_DetectionDeltaMsg__handle;
}

#ifdef __cplusplus
}
#endif

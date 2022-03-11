// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:msg/DetectionDeltaMsg.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__struct.h"
#include "deepracer_interfaces_pkg/msg/detail/detection_delta_msg__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // delta
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // delta

// forward declare type support functions


using _DetectionDeltaMsg__ros_msg_type = deepracer_interfaces_pkg__msg__DetectionDeltaMsg;

static bool _DetectionDeltaMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectionDeltaMsg__ros_msg_type * ros_message = static_cast<const _DetectionDeltaMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    size_t size = ros_message->delta.size;
    auto array_ptr = ros_message->delta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _DetectionDeltaMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectionDeltaMsg__ros_msg_type * ros_message = static_cast<_DetectionDeltaMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->delta.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->delta);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->delta, size)) {
      return "failed to create array for field 'delta'";
    }
    auto array_ptr = ros_message->delta.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__msg__DetectionDeltaMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectionDeltaMsg__ros_msg_type * ros_message = static_cast<const _DetectionDeltaMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name delta
  {
    size_t array_size = ros_message->delta.size;
    auto array_ptr = ros_message->delta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DetectionDeltaMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__msg__DetectionDeltaMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__msg__DetectionDeltaMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: delta
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

static size_t _DetectionDeltaMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__msg__DetectionDeltaMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectionDeltaMsg = {
  "deepracer_interfaces_pkg::msg",
  "DetectionDeltaMsg",
  _DetectionDeltaMsg__cdr_serialize,
  _DetectionDeltaMsg__cdr_deserialize,
  _DetectionDeltaMsg__get_serialized_size,
  _DetectionDeltaMsg__max_serialized_size
};

static rosidl_message_type_support_t _DetectionDeltaMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectionDeltaMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, msg, DetectionDeltaMsg)() {
  return &_DetectionDeltaMsg__type_support;
}

#if defined(__cplusplus)
}
#endif

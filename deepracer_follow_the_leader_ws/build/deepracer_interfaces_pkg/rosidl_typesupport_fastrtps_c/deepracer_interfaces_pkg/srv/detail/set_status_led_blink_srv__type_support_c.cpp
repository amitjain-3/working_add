// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:srv/SetStatusLedBlinkSrv.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/srv/detail/set_status_led_blink_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/srv/detail/set_status_led_blink_srv__struct.h"
#include "deepracer_interfaces_pkg/srv/detail/set_status_led_blink_srv__functions.h"
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

#include "rosidl_runtime_c/string.h"  // color1, color2
#include "rosidl_runtime_c/string_functions.h"  // color1, color2

// forward declare type support functions


using _SetStatusLedBlinkSrv_Request__ros_msg_type = deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Request;

static bool _SetStatusLedBlinkSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetStatusLedBlinkSrv_Request__ros_msg_type * ros_message = static_cast<const _SetStatusLedBlinkSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: led_index
  {
    cdr << ros_message->led_index;
  }

  // Field name: color1
  {
    const rosidl_runtime_c__String * str = &ros_message->color1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: color2
  {
    const rosidl_runtime_c__String * str = &ros_message->color2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: delay
  {
    cdr << ros_message->delay;
  }

  return true;
}

static bool _SetStatusLedBlinkSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetStatusLedBlinkSrv_Request__ros_msg_type * ros_message = static_cast<_SetStatusLedBlinkSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: led_index
  {
    cdr >> ros_message->led_index;
  }

  // Field name: color1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color1.data) {
      rosidl_runtime_c__String__init(&ros_message->color1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color1'\n");
      return false;
    }
  }

  // Field name: color2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color2.data) {
      rosidl_runtime_c__String__init(&ros_message->color2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color2'\n");
      return false;
    }
  }

  // Field name: delay
  {
    cdr >> ros_message->delay;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetStatusLedBlinkSrv_Request__ros_msg_type * ros_message = static_cast<const _SetStatusLedBlinkSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name led_index
  {
    size_t item_size = sizeof(ros_message->led_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color1.size + 1);
  // field.name color2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color2.size + 1);
  // field.name delay
  {
    size_t item_size = sizeof(ros_message->delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetStatusLedBlinkSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: led_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: color1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: color2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: delay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetStatusLedBlinkSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetStatusLedBlinkSrv_Request = {
  "deepracer_interfaces_pkg::srv",
  "SetStatusLedBlinkSrv_Request",
  _SetStatusLedBlinkSrv_Request__cdr_serialize,
  _SetStatusLedBlinkSrv_Request__cdr_deserialize,
  _SetStatusLedBlinkSrv_Request__get_serialized_size,
  _SetStatusLedBlinkSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetStatusLedBlinkSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetStatusLedBlinkSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SetStatusLedBlinkSrv_Request)() {
  return &_SetStatusLedBlinkSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/set_status_led_blink_srv__struct.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/set_status_led_blink_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _SetStatusLedBlinkSrv_Response__ros_msg_type = deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Response;

static bool _SetStatusLedBlinkSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetStatusLedBlinkSrv_Response__ros_msg_type * ros_message = static_cast<const _SetStatusLedBlinkSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr << ros_message->error;
  }

  return true;
}

static bool _SetStatusLedBlinkSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetStatusLedBlinkSrv_Response__ros_msg_type * ros_message = static_cast<_SetStatusLedBlinkSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr >> ros_message->error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetStatusLedBlinkSrv_Response__ros_msg_type * ros_message = static_cast<const _SetStatusLedBlinkSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetStatusLedBlinkSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetStatusLedBlinkSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__SetStatusLedBlinkSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetStatusLedBlinkSrv_Response = {
  "deepracer_interfaces_pkg::srv",
  "SetStatusLedBlinkSrv_Response",
  _SetStatusLedBlinkSrv_Response__cdr_serialize,
  _SetStatusLedBlinkSrv_Response__cdr_deserialize,
  _SetStatusLedBlinkSrv_Response__get_serialized_size,
  _SetStatusLedBlinkSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetStatusLedBlinkSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetStatusLedBlinkSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SetStatusLedBlinkSrv_Response)() {
  return &_SetStatusLedBlinkSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/srv/set_status_led_blink_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetStatusLedBlinkSrv__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "SetStatusLedBlinkSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SetStatusLedBlinkSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SetStatusLedBlinkSrv_Response)(),
};

static rosidl_service_type_support_t SetStatusLedBlinkSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetStatusLedBlinkSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SetStatusLedBlinkSrv)() {
  return &SetStatusLedBlinkSrv__handle;
}

#if defined(__cplusplus)
}
#endif

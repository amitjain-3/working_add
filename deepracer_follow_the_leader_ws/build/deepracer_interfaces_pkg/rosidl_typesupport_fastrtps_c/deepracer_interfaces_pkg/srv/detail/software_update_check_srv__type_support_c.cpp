// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:srv/SoftwareUpdateCheckSrv.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__struct.h"
#include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__functions.h"
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


using _SoftwareUpdateCheckSrv_Request__ros_msg_type = deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Request;

static bool _SoftwareUpdateCheckSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SoftwareUpdateCheckSrv_Request__ros_msg_type * ros_message = static_cast<const _SoftwareUpdateCheckSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: force_update_check
  {
    cdr << ros_message->force_update_check;
  }

  return true;
}

static bool _SoftwareUpdateCheckSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SoftwareUpdateCheckSrv_Request__ros_msg_type * ros_message = static_cast<_SoftwareUpdateCheckSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: force_update_check
  {
    cdr >> ros_message->force_update_check;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SoftwareUpdateCheckSrv_Request__ros_msg_type * ros_message = static_cast<const _SoftwareUpdateCheckSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name force_update_check
  {
    size_t item_size = sizeof(ros_message->force_update_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SoftwareUpdateCheckSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: force_update_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SoftwareUpdateCheckSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SoftwareUpdateCheckSrv_Request = {
  "deepracer_interfaces_pkg::srv",
  "SoftwareUpdateCheckSrv_Request",
  _SoftwareUpdateCheckSrv_Request__cdr_serialize,
  _SoftwareUpdateCheckSrv_Request__cdr_deserialize,
  _SoftwareUpdateCheckSrv_Request__get_serialized_size,
  _SoftwareUpdateCheckSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _SoftwareUpdateCheckSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SoftwareUpdateCheckSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Request)() {
  return &_SoftwareUpdateCheckSrv_Request__type_support;
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
// #include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__struct.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__functions.h"
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


using _SoftwareUpdateCheckSrv_Response__ros_msg_type = deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Response;

static bool _SoftwareUpdateCheckSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SoftwareUpdateCheckSrv_Response__ros_msg_type * ros_message = static_cast<const _SoftwareUpdateCheckSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: software_update_state
  {
    cdr << ros_message->software_update_state;
  }

  return true;
}

static bool _SoftwareUpdateCheckSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SoftwareUpdateCheckSrv_Response__ros_msg_type * ros_message = static_cast<_SoftwareUpdateCheckSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: software_update_state
  {
    cdr >> ros_message->software_update_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SoftwareUpdateCheckSrv_Response__ros_msg_type * ros_message = static_cast<const _SoftwareUpdateCheckSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name software_update_state
  {
    size_t item_size = sizeof(ros_message->software_update_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SoftwareUpdateCheckSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: software_update_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SoftwareUpdateCheckSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__SoftwareUpdateCheckSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SoftwareUpdateCheckSrv_Response = {
  "deepracer_interfaces_pkg::srv",
  "SoftwareUpdateCheckSrv_Response",
  _SoftwareUpdateCheckSrv_Response__cdr_serialize,
  _SoftwareUpdateCheckSrv_Response__cdr_deserialize,
  _SoftwareUpdateCheckSrv_Response__get_serialized_size,
  _SoftwareUpdateCheckSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _SoftwareUpdateCheckSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SoftwareUpdateCheckSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Response)() {
  return &_SoftwareUpdateCheckSrv_Response__type_support;
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
#include "deepracer_interfaces_pkg/srv/software_update_check_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SoftwareUpdateCheckSrv__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "SoftwareUpdateCheckSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Response)(),
};

static rosidl_service_type_support_t SoftwareUpdateCheckSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SoftwareUpdateCheckSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv)() {
  return &SoftwareUpdateCheckSrv__handle;
}

#if defined(__cplusplus)
}
#endif

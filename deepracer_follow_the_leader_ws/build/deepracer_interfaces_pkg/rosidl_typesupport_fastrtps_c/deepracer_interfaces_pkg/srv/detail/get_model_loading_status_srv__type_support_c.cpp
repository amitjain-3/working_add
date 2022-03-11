// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:srv/GetModelLoadingStatusSrv.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/srv/detail/get_model_loading_status_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/srv/detail/get_model_loading_status_srv__struct.h"
#include "deepracer_interfaces_pkg/srv/detail/get_model_loading_status_srv__functions.h"
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


using _GetModelLoadingStatusSrv_Request__ros_msg_type = deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Request;

static bool _GetModelLoadingStatusSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetModelLoadingStatusSrv_Request__ros_msg_type * ros_message = static_cast<const _GetModelLoadingStatusSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetModelLoadingStatusSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetModelLoadingStatusSrv_Request__ros_msg_type * ros_message = static_cast<_GetModelLoadingStatusSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetModelLoadingStatusSrv_Request__ros_msg_type * ros_message = static_cast<const _GetModelLoadingStatusSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetModelLoadingStatusSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetModelLoadingStatusSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetModelLoadingStatusSrv_Request = {
  "deepracer_interfaces_pkg::srv",
  "GetModelLoadingStatusSrv_Request",
  _GetModelLoadingStatusSrv_Request__cdr_serialize,
  _GetModelLoadingStatusSrv_Request__cdr_deserialize,
  _GetModelLoadingStatusSrv_Request__get_serialized_size,
  _GetModelLoadingStatusSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetModelLoadingStatusSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetModelLoadingStatusSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, GetModelLoadingStatusSrv_Request)() {
  return &_GetModelLoadingStatusSrv_Request__type_support;
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
// #include "deepracer_interfaces_pkg/srv/detail/get_model_loading_status_srv__struct.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/get_model_loading_status_srv__functions.h"
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

#include "rosidl_runtime_c/string.h"  // model_loading_status
#include "rosidl_runtime_c/string_functions.h"  // model_loading_status

// forward declare type support functions


using _GetModelLoadingStatusSrv_Response__ros_msg_type = deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Response;

static bool _GetModelLoadingStatusSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetModelLoadingStatusSrv_Response__ros_msg_type * ros_message = static_cast<const _GetModelLoadingStatusSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: model_loading_status
  {
    const rosidl_runtime_c__String * str = &ros_message->model_loading_status;
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

  // Field name: error
  {
    cdr << ros_message->error;
  }

  return true;
}

static bool _GetModelLoadingStatusSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetModelLoadingStatusSrv_Response__ros_msg_type * ros_message = static_cast<_GetModelLoadingStatusSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: model_loading_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_loading_status.data) {
      rosidl_runtime_c__String__init(&ros_message->model_loading_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_loading_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_loading_status'\n");
      return false;
    }
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetModelLoadingStatusSrv_Response__ros_msg_type * ros_message = static_cast<const _GetModelLoadingStatusSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name model_loading_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_loading_status.size + 1);
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetModelLoadingStatusSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: model_loading_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetModelLoadingStatusSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__GetModelLoadingStatusSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetModelLoadingStatusSrv_Response = {
  "deepracer_interfaces_pkg::srv",
  "GetModelLoadingStatusSrv_Response",
  _GetModelLoadingStatusSrv_Response__cdr_serialize,
  _GetModelLoadingStatusSrv_Response__cdr_deserialize,
  _GetModelLoadingStatusSrv_Response__get_serialized_size,
  _GetModelLoadingStatusSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetModelLoadingStatusSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetModelLoadingStatusSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, GetModelLoadingStatusSrv_Response)() {
  return &_GetModelLoadingStatusSrv_Response__type_support;
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
#include "deepracer_interfaces_pkg/srv/get_model_loading_status_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetModelLoadingStatusSrv__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "GetModelLoadingStatusSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, GetModelLoadingStatusSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, GetModelLoadingStatusSrv_Response)(),
};

static rosidl_service_type_support_t GetModelLoadingStatusSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetModelLoadingStatusSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, GetModelLoadingStatusSrv)() {
  return &GetModelLoadingStatusSrv__handle;
}

#if defined(__cplusplus)
}
#endif

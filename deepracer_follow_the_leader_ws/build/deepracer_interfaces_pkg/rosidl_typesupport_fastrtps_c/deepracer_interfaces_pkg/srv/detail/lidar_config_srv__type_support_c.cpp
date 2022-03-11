// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:srv/LidarConfigSrv.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/srv/detail/lidar_config_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/srv/detail/lidar_config_srv__struct.h"
#include "deepracer_interfaces_pkg/srv/detail/lidar_config_srv__functions.h"
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


using _LidarConfigSrv_Request__ros_msg_type = deepracer_interfaces_pkg__srv__LidarConfigSrv_Request;

static bool _LidarConfigSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LidarConfigSrv_Request__ros_msg_type * ros_message = static_cast<const _LidarConfigSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: use_lidar
  {
    cdr << (ros_message->use_lidar ? true : false);
  }

  // Field name: min_angle
  {
    cdr << ros_message->min_angle;
  }

  // Field name: max_angle
  {
    cdr << ros_message->max_angle;
  }

  // Field name: num_values
  {
    cdr << ros_message->num_values;
  }

  // Field name: min_distance
  {
    cdr << ros_message->min_distance;
  }

  // Field name: max_distance
  {
    cdr << ros_message->max_distance;
  }

  // Field name: clipping_distance
  {
    cdr << ros_message->clipping_distance;
  }

  // Field name: num_sectors
  {
    cdr << ros_message->num_sectors;
  }

  // Field name: preprocess_type
  {
    cdr << ros_message->preprocess_type;
  }

  return true;
}

static bool _LidarConfigSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LidarConfigSrv_Request__ros_msg_type * ros_message = static_cast<_LidarConfigSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: use_lidar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_lidar = tmp ? true : false;
  }

  // Field name: min_angle
  {
    cdr >> ros_message->min_angle;
  }

  // Field name: max_angle
  {
    cdr >> ros_message->max_angle;
  }

  // Field name: num_values
  {
    cdr >> ros_message->num_values;
  }

  // Field name: min_distance
  {
    cdr >> ros_message->min_distance;
  }

  // Field name: max_distance
  {
    cdr >> ros_message->max_distance;
  }

  // Field name: clipping_distance
  {
    cdr >> ros_message->clipping_distance;
  }

  // Field name: num_sectors
  {
    cdr >> ros_message->num_sectors;
  }

  // Field name: preprocess_type
  {
    cdr >> ros_message->preprocess_type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LidarConfigSrv_Request__ros_msg_type * ros_message = static_cast<const _LidarConfigSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name use_lidar
  {
    size_t item_size = sizeof(ros_message->use_lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_angle
  {
    size_t item_size = sizeof(ros_message->min_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_angle
  {
    size_t item_size = sizeof(ros_message->max_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_values
  {
    size_t item_size = sizeof(ros_message->num_values);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_distance
  {
    size_t item_size = sizeof(ros_message->min_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_distance
  {
    size_t item_size = sizeof(ros_message->max_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clipping_distance
  {
    size_t item_size = sizeof(ros_message->clipping_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sectors
  {
    size_t item_size = sizeof(ros_message->num_sectors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preprocess_type
  {
    size_t item_size = sizeof(ros_message->preprocess_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LidarConfigSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: use_lidar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: min_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_values
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: clipping_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_sectors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: preprocess_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LidarConfigSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LidarConfigSrv_Request = {
  "deepracer_interfaces_pkg::srv",
  "LidarConfigSrv_Request",
  _LidarConfigSrv_Request__cdr_serialize,
  _LidarConfigSrv_Request__cdr_deserialize,
  _LidarConfigSrv_Request__get_serialized_size,
  _LidarConfigSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _LidarConfigSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LidarConfigSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, LidarConfigSrv_Request)() {
  return &_LidarConfigSrv_Request__type_support;
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
// #include "deepracer_interfaces_pkg/srv/detail/lidar_config_srv__struct.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/lidar_config_srv__functions.h"
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


using _LidarConfigSrv_Response__ros_msg_type = deepracer_interfaces_pkg__srv__LidarConfigSrv_Response;

static bool _LidarConfigSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LidarConfigSrv_Response__ros_msg_type * ros_message = static_cast<const _LidarConfigSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr << ros_message->error;
  }

  return true;
}

static bool _LidarConfigSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LidarConfigSrv_Response__ros_msg_type * ros_message = static_cast<_LidarConfigSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr >> ros_message->error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LidarConfigSrv_Response__ros_msg_type * ros_message = static_cast<const _LidarConfigSrv_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _LidarConfigSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Response(
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

static size_t _LidarConfigSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__srv__LidarConfigSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LidarConfigSrv_Response = {
  "deepracer_interfaces_pkg::srv",
  "LidarConfigSrv_Response",
  _LidarConfigSrv_Response__cdr_serialize,
  _LidarConfigSrv_Response__cdr_deserialize,
  _LidarConfigSrv_Response__get_serialized_size,
  _LidarConfigSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _LidarConfigSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LidarConfigSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, LidarConfigSrv_Response)() {
  return &_LidarConfigSrv_Response__type_support;
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
#include "deepracer_interfaces_pkg/srv/lidar_config_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LidarConfigSrv__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "LidarConfigSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, LidarConfigSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, LidarConfigSrv_Response)(),
};

static rosidl_service_type_support_t LidarConfigSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LidarConfigSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, srv, LidarConfigSrv)() {
  return &LidarConfigSrv__handle;
}

#if defined(__cplusplus)
}
#endif

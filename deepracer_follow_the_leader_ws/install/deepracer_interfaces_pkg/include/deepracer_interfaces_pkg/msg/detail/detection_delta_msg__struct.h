// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deepracer_interfaces_pkg:msg/DetectionDeltaMsg.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__STRUCT_H_
#define DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delta'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DetectionDeltaMsg in the package deepracer_interfaces_pkg.
typedef struct deepracer_interfaces_pkg__msg__DetectionDeltaMsg
{
  rosidl_runtime_c__float__Sequence delta;
} deepracer_interfaces_pkg__msg__DetectionDeltaMsg;

// Struct for a sequence of deepracer_interfaces_pkg__msg__DetectionDeltaMsg.
typedef struct deepracer_interfaces_pkg__msg__DetectionDeltaMsg__Sequence
{
  deepracer_interfaces_pkg__msg__DetectionDeltaMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deepracer_interfaces_pkg__msg__DetectionDeltaMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEPRACER_INTERFACES_PKG__MSG__DETAIL__DETECTION_DELTA_MSG__STRUCT_H_

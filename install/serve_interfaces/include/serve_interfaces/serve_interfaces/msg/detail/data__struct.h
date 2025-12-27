// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serve_interfaces:msg/Data.idl
// generated code does not contain a copyright notice

#ifndef SERVE_INTERFACES__MSG__DETAIL__DATA__STRUCT_H_
#define SERVE_INTERFACES__MSG__DETAIL__DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Data in the package serve_interfaces.
typedef struct serve_interfaces__msg__Data
{
  double distance;
} serve_interfaces__msg__Data;

// Struct for a sequence of serve_interfaces__msg__Data.
typedef struct serve_interfaces__msg__Data__Sequence
{
  serve_interfaces__msg__Data * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serve_interfaces__msg__Data__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVE_INTERFACES__MSG__DETAIL__DATA__STRUCT_H_

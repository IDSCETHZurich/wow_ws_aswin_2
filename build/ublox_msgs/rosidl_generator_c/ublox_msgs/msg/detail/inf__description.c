// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/Inf.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/inf__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__Inf__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x5b, 0x75, 0x59, 0x7b, 0x4d, 0x99, 0xa6,
      0xe7, 0xb7, 0x9e, 0x14, 0xd2, 0x0b, 0xda, 0x30,
      0x41, 0xf3, 0x51, 0xa3, 0xaf, 0x15, 0x07, 0x97,
      0xaa, 0x28, 0x08, 0x7e, 0x58, 0x1f, 0x83, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__Inf__TYPE_NAME[] = "ublox_msgs/msg/Inf";

// Define type names, field names, and default values
static char ublox_msgs__msg__Inf__FIELD_NAME__str[] = "str";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__Inf__FIELDS[] = {
  {
    {ublox_msgs__msg__Inf__FIELD_NAME__str, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__Inf__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__Inf__TYPE_NAME, 18, 18},
      {ublox_msgs__msg__Inf__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UBX-INF (0x04, 0x00...0x04)\n"
  "# ASCII output\n"
  "#\n"
  "# This message has a variable length payload, representing an ASCII string.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 4\n"
  "\n"
  "char[] str";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__Inf__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__Inf__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 156, 156},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__Inf__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__Inf__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

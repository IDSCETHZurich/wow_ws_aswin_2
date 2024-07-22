// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/MonVERExtension.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/mon_ver_extension__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__MonVERExtension__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x5a, 0xa9, 0xa9, 0x98, 0x5c, 0xb0, 0x08,
      0x1b, 0xf3, 0xae, 0xc7, 0xd7, 0x2d, 0x5e, 0x09,
      0x3a, 0xc3, 0xe2, 0x05, 0x5d, 0xab, 0x43, 0x9b,
      0x15, 0x1f, 0xb9, 0xb9, 0x78, 0x71, 0x01, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__MonVERExtension__TYPE_NAME[] = "ublox_msgs/msg/MonVERExtension";

// Define type names, field names, and default values
static char ublox_msgs__msg__MonVERExtension__FIELD_NAME__field[] = "field";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__MonVERExtension__FIELDS[] = {
  {
    {ublox_msgs__msg__MonVERExtension__FIELD_NAME__field, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      30,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__MonVERExtension__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__MonVERExtension__TYPE_NAME, 30, 30},
      {ublox_msgs__msg__MonVERExtension__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see MonVER message\n"
  "#\n"
  "\n"
  "char[30] field";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__MonVERExtension__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__MonVERExtension__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__MonVERExtension__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__MonVERExtension__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

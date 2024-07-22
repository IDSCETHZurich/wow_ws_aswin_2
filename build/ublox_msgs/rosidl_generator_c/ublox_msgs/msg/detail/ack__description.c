// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/Ack.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__Ack__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xf7, 0x53, 0xb8, 0x39, 0x8e, 0x4a, 0xab,
      0x42, 0xd5, 0x3e, 0x25, 0xae, 0x1c, 0x38, 0x28,
      0x9a, 0x02, 0x26, 0xe0, 0x61, 0xa2, 0x58, 0xec,
      0xb8, 0xd8, 0xdb, 0xdf, 0x6f, 0x94, 0xe5, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__Ack__TYPE_NAME[] = "ublox_msgs/msg/Ack";

// Define type names, field names, and default values
static char ublox_msgs__msg__Ack__FIELD_NAME__cls_id[] = "cls_id";
static char ublox_msgs__msg__Ack__FIELD_NAME__msg_id[] = "msg_id";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__Ack__FIELDS[] = {
  {
    {ublox_msgs__msg__Ack__FIELD_NAME__cls_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__Ack__FIELD_NAME__msg_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__Ack__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__Ack__TYPE_NAME, 18, 18},
      {ublox_msgs__msg__Ack__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ACK (0x05)\n"
  "# Message Acknowledged / Not-Acknowledged\n"
  "#\n"
  "# Output upon processing of an input message\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 5\n"
  "uint8 NACK_MESSAGE_ID = 0\n"
  "uint8 ACK_MESSAGE_ID = 1\n"
  "\n"
  "uint8 cls_id   # Class ID of the (Not-)Acknowledged Message\n"
  "uint8 msg_id   # Message ID of the (Not-)Acknowledged Message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__Ack__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__Ack__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 298, 298},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__Ack__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__Ack__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

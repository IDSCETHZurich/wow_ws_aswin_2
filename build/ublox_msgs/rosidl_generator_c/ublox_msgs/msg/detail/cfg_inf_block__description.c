// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgINFBlock.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_inf_block__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgINFBlock__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x1c, 0x4f, 0xb1, 0x1a, 0xba, 0x48, 0x30,
      0x12, 0x71, 0xa0, 0x6f, 0x70, 0x6e, 0x2f, 0x62,
      0xc0, 0x2f, 0x54, 0x4e, 0x28, 0x92, 0x4f, 0xbc,
      0xf3, 0xd5, 0x91, 0x37, 0x6b, 0x6f, 0x7f, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgINFBlock__TYPE_NAME[] = "ublox_msgs/msg/CfgINFBlock";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgINFBlock__FIELD_NAME__protocol_id[] = "protocol_id";
static char ublox_msgs__msg__CfgINFBlock__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__CfgINFBlock__FIELD_NAME__inf_msg_mask[] = "inf_msg_mask";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgINFBlock__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgINFBlock__FIELD_NAME__protocol_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgINFBlock__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgINFBlock__FIELD_NAME__inf_msg_mask, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgINFBlock__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgINFBlock__TYPE_NAME, 26, 26},
      {ublox_msgs__msg__CfgINFBlock__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# See CfgINF message\n"
  "#\n"
  "\n"
  "uint8 protocol_id          # Protocol Identifier, identifying for which\n"
  "                           # protocol the configuration is set/get. The\n"
  "                           # following are valid Protocol Identifiers:\n"
  "                           # 0: UBX Protocol\n"
  "                           # 1: NMEA Protocol\n"
  "                           # 2-255: Reserved\n"
  "uint8 PROTOCOL_ID_UBX = 0\n"
  "uint8 PROTOCOL_ID_NMEA = 1\n"
  "\n"
  "uint8[3] reserved1         # Reserved\n"
  "\n"
  "uint8[6] inf_msg_mask      # A bit mask, saying which information messages\n"
  "                           # are enabled on each I/O port\n"
  "uint8 INF_MSG_ERROR = 1    # enable ERROR\n"
  "uint8 INF_MSG_WARNING = 2  # enable WARNING\n"
  "uint8 INF_MSG_NOTICE = 4   # enable NOTICE\n"
  "uint8 INF_MSG_TEST = 8     # enable TEST\n"
  "uint8 INF_MSG_DEBUG = 16   # enable DEBUG";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgINFBlock__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgINFBlock__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 813, 813},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgINFBlock__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgINFBlock__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

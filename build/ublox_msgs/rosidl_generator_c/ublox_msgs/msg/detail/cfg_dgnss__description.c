// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgDGNSS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_dgnss__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgDGNSS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0xcd, 0xb9, 0xbb, 0xc0, 0xdf, 0xea, 0xa4,
      0xe3, 0x0f, 0x0a, 0xaf, 0xdb, 0xc7, 0x0a, 0x04,
      0x72, 0x20, 0x44, 0x01, 0xb3, 0x5f, 0x13, 0x87,
      0xda, 0xb8, 0xd1, 0xbc, 0x47, 0xd4, 0x2c, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgDGNSS__TYPE_NAME[] = "ublox_msgs/msg/CfgDGNSS";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgDGNSS__FIELD_NAME__dgnss_mode[] = "dgnss_mode";
static char ublox_msgs__msg__CfgDGNSS__FIELD_NAME__reserved0[] = "reserved0";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgDGNSS__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgDGNSS__FIELD_NAME__dgnss_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDGNSS__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgDGNSS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgDGNSS__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__CfgDGNSS__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-DGNSS (0x06 0x70)\n"
  "# DGNSS configuration\n"
  "#\n"
  "# This message allows the user to configure the DGNSS configuration of the\n"
  "# receiver.\n"
  "# Supported on:\n"
  "#  - u-blox 8 / u-blox M8 from protocol version 20.01 up to version 23.01 (only\n"
  "#    with High Precision GNSS products)\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 112\n"
  "\n"
  "uint8 dgnss_mode                  # Specifies differential mode:\n"
  "uint8 DGNSS_MODE_RTK_FLOAT = 2    # RTK float: No attempts are made to fix\n"
  "                                  # ambiguities.\n"
  "uint8 DGNSS_MODE_RTK_FIXED = 3    # RTK fixed: Ambiguities are fixed whenever\n"
  "                                  # possible.\n"
  "uint8[3] reserved0                # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgDGNSS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgDGNSS__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 673, 673},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgDGNSS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgDGNSS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

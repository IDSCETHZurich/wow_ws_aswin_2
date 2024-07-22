// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgHNR.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_hnr__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgHNR__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x10, 0x10, 0xbb, 0x19, 0x68, 0x62, 0x6a,
      0x54, 0x19, 0x97, 0xb5, 0x3f, 0x32, 0x34, 0x68,
      0x48, 0x6c, 0xad, 0x57, 0x4c, 0x10, 0x6a, 0x5c,
      0x2d, 0x1e, 0xb2, 0x4c, 0x8d, 0xd9, 0xe7, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgHNR__TYPE_NAME[] = "ublox_msgs/msg/CfgHNR";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgHNR__FIELD_NAME__high_nav_rate[] = "high_nav_rate";
static char ublox_msgs__msg__CfgHNR__FIELD_NAME__reserved0[] = "reserved0";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgHNR__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgHNR__FIELD_NAME__high_nav_rate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgHNR__FIELD_NAME__reserved0, 9, 9},
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
ublox_msgs__msg__CfgHNR__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgHNR__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgHNR__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-HNR (0x06 0x5C)\n"
  "# High Navigation Rate Settings\n"
  "#\n"
  "# The u-blox receivers support high rates of navigation update up to 30 Hz.\n"
  "# The navigation solution output (NAV-HNR) will not be aligned to the top of a\n"
  "# second.\n"
  "# The update rate has a direct influence on the power consumption. The more\n"
  "# fixes that are required, the more CPU power and communication resources are\n"
  "# required.\n"
  "# For most applications a 1 Hz update rate would be sufficient.\n"
  "#\n"
  "# (only with ADR or UDR products)\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 92\n"
  "\n"
  "uint8 high_nav_rate     # Rate of navigation solution output [Hz]\n"
  "uint8[3] reserved0      # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgHNR__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgHNR__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 633, 633},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgHNR__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgHNR__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

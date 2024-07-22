// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavATT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_att__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavATT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xba, 0x73, 0x3c, 0xef, 0x7a, 0x4c, 0x63,
      0xe7, 0xb3, 0x2e, 0x83, 0x3f, 0x6f, 0x82, 0xd1,
      0x7b, 0x55, 0x8b, 0x04, 0x8a, 0x46, 0xc7, 0xa5,
      0x70, 0x2f, 0xa8, 0x34, 0x7c, 0xc1, 0xb6, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavATT__TYPE_NAME[] = "ublox_msgs/msg/NavATT";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavATT__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavATT__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__NavATT__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__NavATT__FIELD_NAME__roll[] = "roll";
static char ublox_msgs__msg__NavATT__FIELD_NAME__pitch[] = "pitch";
static char ublox_msgs__msg__NavATT__FIELD_NAME__heading[] = "heading";
static char ublox_msgs__msg__NavATT__FIELD_NAME__acc_roll[] = "acc_roll";
static char ublox_msgs__msg__NavATT__FIELD_NAME__acc_pitch[] = "acc_pitch";
static char ublox_msgs__msg__NavATT__FIELD_NAME__acc_heading[] = "acc_heading";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavATT__FIELDS[] = {
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__acc_roll, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__acc_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavATT__FIELD_NAME__acc_heading, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavATT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavATT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__NavATT__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-ATT (0x01 0x05)\n"
  "# Attitude Solution\n"
  "#\n"
  "# This message outputs the attitude solution as roll, pitch and heading angles.\n"
  "# Supported on ADR and UDR products.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 5\n"
  "\n"
  "uint32 i_tow               # GPS time of week of the navigation epoch [ms]\n"
  "uint8 version             # Message version (0 for this version)\n"
  "\n"
  "uint8[3] reserved0        # Reserved\n"
  "\n"
  "int32 roll                # Vehicle roll. [deg / 1e-5]\n"
  "int32 pitch               # Vehicle pitch. [deg / 1e-5]\n"
  "int32 heading             # Vehicle heading. [deg / 1e-5]\n"
  "uint32 acc_roll            # Vehicle roll accuracy (if null, roll angle is not\n"
  "                          # available). [deg / 1e-5]\n"
  "uint32 acc_pitch           # Vehicle pitch accuracy (if null, pitch angle is not\n"
  "                          # available). [deg / 1e-5]\n"
  "uint32 acc_heading         # Vehicle heading accuracy [deg / 1e-5]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavATT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavATT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 886, 886},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavATT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavATT__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

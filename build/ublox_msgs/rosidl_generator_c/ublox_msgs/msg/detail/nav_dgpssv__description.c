// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavDGPSSV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_dgpssv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavDGPSSV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x2a, 0x07, 0xcf, 0xc8, 0x8b, 0x4d, 0x92,
      0xa2, 0x7d, 0xa7, 0xc9, 0x34, 0x82, 0xc3, 0xaf,
      0x8d, 0xa1, 0x47, 0xed, 0x45, 0x3d, 0x2b, 0x0e,
      0x5e, 0xc0, 0x3e, 0x57, 0x08, 0xbe, 0xf9, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavDGPSSV__TYPE_NAME[] = "ublox_msgs/msg/NavDGPSSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavDGPSSV__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__NavDGPSSV__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__NavDGPSSV__FIELD_NAME__age_c[] = "age_c";
static char ublox_msgs__msg__NavDGPSSV__FIELD_NAME__prc[] = "prc";
static char ublox_msgs__msg__NavDGPSSV__FIELD_NAME__prrc[] = "prrc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavDGPSSV__FIELDS[] = {
  {
    {ublox_msgs__msg__NavDGPSSV__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPSSV__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPSSV__FIELD_NAME__age_c, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPSSV__FIELD_NAME__prc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPSSV__FIELD_NAME__prrc, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavDGPSSV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavDGPSSV__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__NavDGPSSV__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see message NavDGPS\n"
  "\n"
  "uint8 svid              # Satellite ID\n"
  "\n"
  "uint8 flags             # Bitmask / Channel Number and Usage:\n"
  "uint8 FLAGS_CHANNEL_MASK = 15   # Bitmask for channel number, range 0..15\n"
  "                                # Channel numbers > 15 marked as 15\n"
  "uint8 FLAGS_DGPS = 16           # DGPS Used for this SV\n"
  "\n"
  "uint16 age_c             # Age of latest correction data [ms]\n"
  "float32 prc             # Pseudo Range Correction [m]\n"
  "float32 prrc            # Pseudo Range Rate Correction [m/s]\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavDGPSSV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavDGPSSV__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 502, 502},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavDGPSSV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavDGPSSV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

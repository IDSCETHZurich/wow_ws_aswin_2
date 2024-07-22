// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmSVSISV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_svsisv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmSVSISV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xea, 0xac, 0x08, 0x7f, 0xff, 0x1a, 0x81,
      0x6a, 0xd4, 0x35, 0x26, 0x7f, 0x77, 0x57, 0x83,
      0x84, 0x04, 0x4a, 0x8a, 0xc7, 0x17, 0xe5, 0x06,
      0x24, 0x84, 0x08, 0x12, 0x2d, 0x09, 0x55, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__RxmSVSISV__TYPE_NAME[] = "ublox_msgs/msg/RxmSVSISV";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmSVSISV__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__RxmSVSISV__FIELD_NAME__sv_flag[] = "sv_flag";
static char ublox_msgs__msg__RxmSVSISV__FIELD_NAME__azim[] = "azim";
static char ublox_msgs__msg__RxmSVSISV__FIELD_NAME__elev[] = "elev";
static char ublox_msgs__msg__RxmSVSISV__FIELD_NAME__age[] = "age";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmSVSISV__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmSVSISV__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSISV__FIELD_NAME__sv_flag, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSISV__FIELD_NAME__azim, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSISV__FIELD_NAME__elev, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSISV__FIELD_NAME__age, 3, 3},
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
ublox_msgs__msg__RxmSVSISV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmSVSISV__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__RxmSVSISV__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see message RxmSVSI\n"
  "#\n"
  "\n"
  "uint8 svid            # Satellite ID\n"
  "\n"
  "uint8 sv_flag          # Information Flags\n"
  "uint8 FLAG_URA_MASK = 15      # Figure of Merit (URA) range 0..15\n"
  "uint8 FLAG_HEALTHY = 16       # SV healthy flag\n"
  "uint8 FLAG_EPH_VAL = 32       # Ephemeris valid\n"
  "uint8 FLAG_ALM_VAL = 64       # Almanac valid\n"
  "uint8 FLAG_NOT_AVAIL = 128    # SV not available\n"
  "\n"
  "int16 azim            # Azimuth\n"
  "int8 elev             # Elevation\n"
  "\n"
  "uint8 age             # Age of Almanac and Ephemeris\n"
  "uint8 AGE_ALM_MASK = 15       # Age of ALM in days offset by 4\n"
  "                              # i.e. the reference time may be in the future:\n"
  "                              # ageOfAlm = (age & 0x0f) - 4\n"
  "uint8 AGE_EPH_MASK = 240      # Age of EPH in hours offset by 4.\n"
  "                              # i.e. the reference time may be in the future:\n"
  "                              # ageOfEph = ((age & 0xf0) >> 4) - 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmSVSISV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmSVSISV__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 895, 895},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmSVSISV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmSVSISV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

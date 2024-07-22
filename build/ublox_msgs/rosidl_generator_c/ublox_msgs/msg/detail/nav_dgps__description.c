// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavDGPS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_dgps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavDGPS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x8a, 0x90, 0x8d, 0x7a, 0xc5, 0xe6, 0x83,
      0x8d, 0xe2, 0xfc, 0xd9, 0x68, 0x9f, 0x42, 0x01,
      0x76, 0x40, 0x7b, 0x43, 0x68, 0xf4, 0x48, 0x89,
      0x37, 0x0f, 0xcb, 0x4a, 0x4c, 0xfd, 0x6f, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/nav_dgpssv__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__NavDGPSSV__EXPECTED_HASH = {1, {
    0x13, 0x2a, 0x07, 0xcf, 0xc8, 0x8b, 0x4d, 0x92,
    0xa2, 0x7d, 0xa7, 0xc9, 0x34, 0x82, 0xc3, 0xaf,
    0x8d, 0xa1, 0x47, 0xed, 0x45, 0x3d, 0x2b, 0x0e,
    0x5e, 0xc0, 0x3e, 0x57, 0x08, 0xbe, 0xf9, 0x2b,
  }};
#endif

static char ublox_msgs__msg__NavDGPS__TYPE_NAME[] = "ublox_msgs/msg/NavDGPS";
static char ublox_msgs__msg__NavDGPSSV__TYPE_NAME[] = "ublox_msgs/msg/NavDGPSSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__age[] = "age";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__base_id[] = "base_id";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__base_health[] = "base_health";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__num_ch[] = "num_ch";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__status[] = "status";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__NavDGPS__FIELD_NAME__sv[] = "sv";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavDGPS__FIELDS[] = {
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__base_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__base_health, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__num_ch, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDGPS__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__NavDGPSSV__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__NavDGPS__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__NavDGPSSV__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavDGPS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavDGPS__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__NavDGPS__FIELDS, 8, 8},
    },
    {ublox_msgs__msg__NavDGPS__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__NavDGPSSV__EXPECTED_HASH, ublox_msgs__msg__NavDGPSSV__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__NavDGPSSV__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-DGPS (0x01 0x31)\n"
  "# DGPS Data Used for NAV\n"
  "#\n"
  "# This message outputs the Correction data as it has been applied to the current\n"
  "# NAV Solution. See also the notes on the RTCM protocol.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 49\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "int32 age               # Age of newest correction data [ms]\n"
  "int16 base_id            # DGPS Base Station ID\n"
  "int16 base_health        # DGPS Base Station Health Status\n"
  "int8 num_ch              # Number of channels for which correction data is\n"
  "                        # following\n"
  "\n"
  "uint8 status            # DGPS Correction Type Status\n"
  "uint8 DGPS_CORRECTION_NONE = 0\n"
  "uint8 DGPS_CORRECTION_PR_PRR = 1\n"
  "\n"
  "uint16 reserved1        # Reserved\n"
  "\n"
  "NavDGPSSV[] sv";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavDGPS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavDGPS__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 745, 745},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavDGPS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavDGPS__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__NavDGPSSV__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

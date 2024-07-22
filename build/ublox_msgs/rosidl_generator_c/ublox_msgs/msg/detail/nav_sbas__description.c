// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSBAS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_sbas__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSBAS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x62, 0x09, 0x6a, 0xb0, 0xdc, 0x53, 0xc4, 0x9e,
      0x9e, 0x5b, 0xa3, 0xa5, 0x21, 0x9e, 0x57, 0xb3,
      0x6e, 0x8d, 0x79, 0x9e, 0xab, 0x7d, 0x27, 0xc0,
      0xad, 0xcf, 0x4d, 0x04, 0x83, 0xcc, 0xf7, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/nav_sbassv__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__NavSBASSV__EXPECTED_HASH = {1, {
    0x9e, 0x14, 0x83, 0xcf, 0x2a, 0x3c, 0xa9, 0x42,
    0x8f, 0x55, 0x66, 0x01, 0x56, 0xda, 0x42, 0x65,
    0xb7, 0x4f, 0x2c, 0x1c, 0xaa, 0x4c, 0xe1, 0x85,
    0x25, 0x23, 0x8e, 0xd5, 0xf0, 0x50, 0x05, 0xad,
  }};
#endif

static char ublox_msgs__msg__NavSBAS__TYPE_NAME[] = "ublox_msgs/msg/NavSBAS";
static char ublox_msgs__msg__NavSBASSV__TYPE_NAME[] = "ublox_msgs/msg/NavSBASSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__geo[] = "geo";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__mode[] = "mode";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__sys[] = "sys";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__service[] = "service";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__cnt[] = "cnt";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__NavSBAS__FIELD_NAME__sv[] = "sv";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSBAS__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__geo, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__sys, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__service, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__cnt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBAS__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__NavSBASSV__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__NavSBAS__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__NavSBASSV__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavSBAS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSBAS__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__NavSBAS__FIELDS, 8, 8},
    },
    {ublox_msgs__msg__NavSBAS__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__NavSBASSV__EXPECTED_HASH, ublox_msgs__msg__NavSBASSV__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__NavSBASSV__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-SBAS (0x01 0x32)\n"
  "# SBAS Status Data\n"
  "#\n"
  "# This message outputs the status of the SBAS sub system\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 50\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "uint8 geo               # PRN Number of the GEO where correction and integrity\n"
  "                        # data is used from\n"
  "\n"
  "uint8 mode              # SBAS Mode\n"
  "uint8 MODE_DISABLED = 0\n"
  "uint8 MODE_ENABLED_INTEGRITY = 1\n"
  "uint8 MODE_ENABLED_TESTMODE = 3\n"
  "\n"
  "int8 sys                # SBAS System (WAAS/EGNOS/...)\n"
  "int8 SYS_UNKNOWN = -1\n"
  "int8 SYS_WAAS = 0\n"
  "int8 SYS_EGNOS = 1\n"
  "int8 SYS_MSAS = 2\n"
  "int8 SYS_GAGAN = 3\n"
  "int8 SYS_GPS = 16\n"
  "\n"
  "uint8 service           # SBAS Services available\n"
  "uint8 SERVICE_RANGING = 1\n"
  "uint8 SERVICE_CORRECTIONS = 2\n"
  "uint8 SERVICE_INTEGRITY = 4\n"
  "uint8 SERVICE_TESTMODE = 8\n"
  "\n"
  "uint8 cnt               # Number of SV data following\n"
  "uint8[3] reserved0      # Reserved\n"
  "\n"
  "NavSBASSV[] sv";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSBAS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSBAS__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 895, 895},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSBAS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSBAS__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__NavSBASSV__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

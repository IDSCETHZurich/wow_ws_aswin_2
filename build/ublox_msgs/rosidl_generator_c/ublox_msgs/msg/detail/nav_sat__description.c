// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSAT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_sat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSAT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x66, 0x31, 0xbf, 0x46, 0xec, 0x3b, 0xc2,
      0xa0, 0xd6, 0x18, 0xc2, 0x54, 0x39, 0xa0, 0xd4,
      0x25, 0xd2, 0x1c, 0xc9, 0x48, 0x02, 0x4a, 0x22,
      0x81, 0x1d, 0x43, 0x39, 0xdb, 0x55, 0x38, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/nav_satsv__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__NavSATSV__EXPECTED_HASH = {1, {
    0xca, 0x6a, 0x94, 0x3a, 0xbc, 0x72, 0x3a, 0x2b,
    0x0c, 0x24, 0xce, 0xce, 0xb8, 0x40, 0x4a, 0x1a,
    0x2b, 0x4b, 0x60, 0x68, 0xa9, 0x9d, 0xf9, 0xa2,
    0xab, 0x1d, 0x5a, 0x58, 0xd4, 0xea, 0x4b, 0xaa,
  }};
#endif

static char ublox_msgs__msg__NavSAT__TYPE_NAME[] = "ublox_msgs/msg/NavSAT";
static char ublox_msgs__msg__NavSATSV__TYPE_NAME[] = "ublox_msgs/msg/NavSATSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSAT__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavSAT__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__NavSAT__FIELD_NAME__num_svs[] = "num_svs";
static char ublox_msgs__msg__NavSAT__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__NavSAT__FIELD_NAME__sv[] = "sv";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSAT__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSAT__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSAT__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSAT__FIELD_NAME__num_svs, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSAT__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSAT__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__NavSATSV__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__NavSAT__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__NavSATSV__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavSAT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSAT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__NavSAT__FIELDS, 5, 5},
    },
    {ublox_msgs__msg__NavSAT__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__NavSATSV__EXPECTED_HASH, ublox_msgs__msg__NavSATSV__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__NavSATSV__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-SAT (0x01 0x35)\n"
  "# Satellite Information\n"
  "#\n"
  "# This message displays information about SVs which are either known to be\n"
  "# visible or currently tracked by the receiver.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 53\n"
  "\n"
  "uint32 i_tow                # GPS time of week of the navigation epoch. [ms]\n"
  "uint8 version              # Message version (1 for this version)\n"
  "uint8 num_svs               # Number of satellites\n"
  "uint8[2] reserved0         # Reserved\n"
  "\n"
  "# start of repeated block (numSvs times)\n"
  "NavSATSV[]  sv\n"
  "# end of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSAT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSAT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 529, 529},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSAT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSAT__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__NavSATSV__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

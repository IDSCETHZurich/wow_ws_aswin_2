// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSVINFO.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_svinfo__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSVINFO__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x59, 0xbe, 0x8a, 0x95, 0x4f, 0x69, 0x02,
      0xaf, 0x77, 0xb7, 0xd3, 0x00, 0x27, 0xb9, 0x08,
      0xab, 0x1a, 0x13, 0x46, 0x6c, 0x18, 0x02, 0x20,
      0x11, 0x98, 0x56, 0x1a, 0x2a, 0xfd, 0x10, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/nav_svinfosv__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__NavSVINFOSV__EXPECTED_HASH = {1, {
    0xaf, 0x28, 0x06, 0x40, 0x15, 0x2c, 0x67, 0xfc,
    0xb9, 0xf0, 0x24, 0x5d, 0xaa, 0x2f, 0xc4, 0xf4,
    0x1f, 0x9d, 0x50, 0x72, 0x00, 0xaa, 0x0a, 0x46,
    0x85, 0xfc, 0xef, 0x4b, 0xb2, 0x49, 0x96, 0xc2,
  }};
#endif

static char ublox_msgs__msg__NavSVINFO__TYPE_NAME[] = "ublox_msgs/msg/NavSVINFO";
static char ublox_msgs__msg__NavSVINFOSV__TYPE_NAME[] = "ublox_msgs/msg/NavSVINFOSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSVINFO__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavSVINFO__FIELD_NAME__num_ch[] = "num_ch";
static char ublox_msgs__msg__NavSVINFO__FIELD_NAME__global_flags[] = "global_flags";
static char ublox_msgs__msg__NavSVINFO__FIELD_NAME__reserved2[] = "reserved2";
static char ublox_msgs__msg__NavSVINFO__FIELD_NAME__sv[] = "sv";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSVINFO__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSVINFO__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFO__FIELD_NAME__num_ch, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFO__FIELD_NAME__global_flags, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFO__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFO__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__NavSVINFOSV__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__NavSVINFO__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__NavSVINFOSV__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavSVINFO__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSVINFO__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__NavSVINFO__FIELDS, 5, 5},
    },
    {ublox_msgs__msg__NavSVINFO__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__NavSVINFOSV__EXPECTED_HASH, ublox_msgs__msg__NavSVINFOSV__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__NavSVINFOSV__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-SVINFO (0x01 0x30)\n"
  "# Space Vehicle Information\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 48\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "uint8 num_ch             # Number of channels\n"
  "\n"
  "uint8 global_flags       # Bitmask\n"
  "# Chip Hardware generation flags\n"
  "uint8 CHIPGEN_ANTARIS = 0   # Antaris, Antaris 4\n"
  "uint8 CHIPGEN_UBLOX5 = 1    # u-blox 5\n"
  "uint8 CHIPGEN_UBLOX6 = 2    # u-blox 6\n"
  "uint8 CHIPGEN_UBLOX7 = 3    # u-blox 7\n"
  "uint8 CHIPGEN_UBLOX8 = 4    # u-blox 8 / u-blox M8\n"
  "\n"
  "uint16 reserved2        # Reserved\n"
  "\n"
  "NavSVINFOSV[] sv";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSVINFO__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSVINFO__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 546, 546},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSVINFO__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSVINFO__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__NavSVINFOSV__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

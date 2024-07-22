// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavTIMEUTC.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_timeutc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavTIMEUTC__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0xc9, 0x4f, 0xf7, 0x71, 0x6f, 0xda, 0x28,
      0x21, 0xaf, 0x7f, 0xfc, 0x4d, 0xa9, 0xe8, 0xaf,
      0x80, 0xe0, 0x27, 0x0f, 0x34, 0xdb, 0xb1, 0xd8,
      0xe2, 0xbd, 0xa5, 0xeb, 0x1b, 0xf7, 0xb9, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavTIMEUTC__TYPE_NAME[] = "ublox_msgs/msg/NavTIMEUTC";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__t_acc[] = "t_acc";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__nano[] = "nano";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__year[] = "year";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__month[] = "month";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__day[] = "day";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__hour[] = "hour";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__min[] = "min";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__sec[] = "sec";
static char ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__valid[] = "valid";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavTIMEUTC__FIELDS[] = {
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__t_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__nano, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__year, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__month, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__day, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__hour, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__min, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__sec, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEUTC__FIELD_NAME__valid, 5, 5},
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
ublox_msgs__msg__NavTIMEUTC__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavTIMEUTC__TYPE_NAME, 25, 25},
      {ublox_msgs__msg__NavTIMEUTC__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-TIMEUTC (0x01 0x21)\n"
  "# UTC Time Solution\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 33\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "uint32 t_acc             # Time Accuracy Estimate [ns]\n"
  "int32 nano              # Fraction of second, range -1e9 .. 1e9 (UTC) [ns]\n"
  "uint16 year             # Year, range 1999..2099 (UTC) [y]\n"
  "uint8 month             # Month, range 1..12 (UTC) [month]\n"
  "uint8 day               # Day of Month, range 1..31 (UTC) [d]\n"
  "uint8 hour              # Hour of Day, range 0..23 (UTC) [h]\n"
  "uint8 min               # Minute of Hour, range 0..59 (UTC) [min]\n"
  "uint8 sec               # Seconds of Minute, range 0..60 (UTC) [s] (60 for\n"
  "                        # leap second)\n"
  "\n"
  "uint8 valid             # Validity Flags\n"
  "uint8 VALID_TOW = 1         # Valid Time of Week\n"
  "uint8 VALID_WKN = 2         # Valid Week Number\n"
  "uint8 VALID_UTC = 4         # Valid Leap Seconds, i.e. Leap Seconds already known\n"
  "uint8 VALID_UTC_STANDARD_MASK = 240  # UTC standard Identifier Bit mask:\n"
  "uint8 UTC_STANDARD_NOT_AVAILABLE = 0    # Information not available\n"
  "uint8 UTC_STANDARD_CRL = 16             # Communications Research Labratory\n"
  "uint8 UTC_STANDARD_NIST = 32            # National Institute of Standards and\n"
  "                                        # Technology (NIST)\n"
  "uint8 UTC_STANDARD_USNO = 48            # U.S. Naval Observatory (USNO)\n"
  "uint8 UTC_STANDARD_BIPM = 64            # International Bureau of Weights and\n"
  "                                        # Measures (BIPM)\n"
  "uint8 UTC_STANDARD_EL = 80              # European Laboratory (tbd)\n"
  "uint8 UTC_STANDARD_SU = 96              # Former Soviet Union (SU)\n"
  "uint8 UTC_STANDARD_NTSC = 112           # National Time Service Center, China\n"
  "uint8 UTC_STANDARD_UNKNOWN = 240";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavTIMEUTC__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavTIMEUTC__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1734, 1734},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavTIMEUTC__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavTIMEUTC__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

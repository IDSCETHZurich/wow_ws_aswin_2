// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavTIMEGPS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_timegps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavTIMEGPS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xe0, 0xa9, 0x84, 0x0a, 0x7a, 0x12, 0x67,
      0x17, 0xb2, 0x8f, 0x1a, 0x74, 0x05, 0x59, 0x90,
      0xa5, 0xdd, 0x93, 0x55, 0x39, 0xa8, 0x29, 0x86,
      0x16, 0xc3, 0x36, 0x08, 0x36, 0x92, 0xb4, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavTIMEGPS__TYPE_NAME[] = "ublox_msgs/msg/NavTIMEGPS";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__f_tow[] = "f_tow";
static char ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__week[] = "week";
static char ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__leap_s[] = "leap_s";
static char ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__valid[] = "valid";
static char ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__t_acc[] = "t_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavTIMEGPS__FIELDS[] = {
  {
    {ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__f_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__week, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__leap_s, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavTIMEGPS__FIELD_NAME__t_acc, 5, 5},
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
ublox_msgs__msg__NavTIMEGPS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavTIMEGPS__TYPE_NAME, 25, 25},
      {ublox_msgs__msg__NavTIMEGPS__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-TIMEGPS (0x01 0x20)\n"
  "# GPS Time Solution\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 32\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "int32 f_tow              # Fractional Nanoseconds remainder of rounded\n"
  "                        # ms above, range -500000 .. 500000 [ns]\n"
  "int16 week              # GPS week (GPS time)\n"
  "\n"
  "int8 leap_s              # Leap Seconds (GPS-UTC) [s]\n"
  "\n"
  "uint8 valid             # Validity Flags\n"
  "uint8 VALID_TOW = 1        # Valid Time of Week\n"
  "uint8 VALID_WEEK = 2       # Valid Week Number\n"
  "uint8 VALID_LEAP_S = 4     # Valid Leap Seconds\n"
  "\n"
  "uint32 t_acc             # Time Accuracy Estimate [ns]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavTIMEGPS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavTIMEGPS__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 630, 630},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavTIMEGPS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavTIMEGPS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

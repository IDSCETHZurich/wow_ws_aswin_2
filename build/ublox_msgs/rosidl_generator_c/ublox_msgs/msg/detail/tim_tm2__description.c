// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/TimTM2.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/tim_tm2__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__TimTM2__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0x68, 0x95, 0x19, 0x6e, 0x1a, 0x5e, 0x0a,
      0x8f, 0x52, 0xf5, 0x91, 0xa0, 0xbb, 0xd9, 0xe2,
      0x8f, 0x7f, 0x7a, 0x35, 0xa2, 0xd0, 0x33, 0x03,
      0xc3, 0xc0, 0x91, 0xd8, 0xea, 0xec, 0xb4, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__TimTM2__TYPE_NAME[] = "ublox_msgs/msg/TimTM2";

// Define type names, field names, and default values
static char ublox_msgs__msg__TimTM2__FIELD_NAME__ch[] = "ch";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__rising_edge_count[] = "rising_edge_count";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__wn_r[] = "wn_r";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__wn_f[] = "wn_f";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__tow_ms_r[] = "tow_ms_r";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__tow_sub_ms_r[] = "tow_sub_ms_r";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__tow_ms_f[] = "tow_ms_f";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__tow_sub_ms_f[] = "tow_sub_ms_f";
static char ublox_msgs__msg__TimTM2__FIELD_NAME__acc_est[] = "acc_est";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__TimTM2__FIELDS[] = {
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__ch, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__rising_edge_count, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__wn_r, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__wn_f, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__tow_ms_r, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__tow_sub_ms_r, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__tow_ms_f, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__tow_sub_ms_f, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__TimTM2__FIELD_NAME__acc_est, 7, 7},
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
ublox_msgs__msg__TimTM2__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__TimTM2__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__TimTM2__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# TIM-TM2 (0x0D, 0x03)\n"
  "# Time mark data\n"
  "#\n"
  "# Description for details.\n"
  "#\n"
  "# Supported on:\n"
  "#  - u-blox 8 / u-blox M8 with protocol version 22 (only with Timing Products)\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 13\n"
  "uint8 MESSAGE_ID = 3\n"
  "\n"
  "uint8 ch                     # Channel (i.e. EXTINT) upon which the pulse was measured\n"
  "\n"
  "uint8 flags                   # Bitmask [newRisingEdge, time, utc, timeBase, , newFallingEdge, run, mode]\n"
  "uint8 FLAGS_MODE_RUNNING = 1  # single = 0, running = 1\n"
  "uint8 FLAGS_RUN = 2\\t\\t# armed = 0, stopped = 1\n"
  "uint8 FLAGS_NEWFALLINGEDGE = 4 \\t# new falling edge detected\n"
  "uint8 FLAGS_TIMEBASE_GNSS = 8\\t# 0 = time base is receiver time, 1 = time base is GNSS Time (according to the configuration in CFG-TP5 for tpldx= 0)\n"
  "uint8 FLAGS_TIMEBASE_UTC = 16\\t# Time Base is UTC (the variant according to the configuration in CFG-NAV5\n"
  "uint8 FLAGS_UTC_AVAIL = 32\\t# 0 = utc not available, 1 = utc available\n"
  "uint8 FLAGS_TIME_VALID = 64\\t# 0 = time is not valid, 1 time is valid\n"
  "uint8 FLAGS_NEWRISINGEDGE = 128\\t# new rising edge detected\n"
  "\n"
  "uint16 rising_edge_count\\t\\t# rising edge count\n"
  "uint16 wn_r\\t\\t\\t# week number of last rising edge\n"
  "uint16 wn_f\\t\\t\\t# week number of last falling edge\n"
  "uint32 tow_ms_r\\t\\t\\t# Tow of rising edge\n"
  "uint32 tow_sub_ms_r\\t\\t# Millisecond Fraction of Tow of rising edge in nanoseconds\n"
  "uint32 tow_ms_f\\t\\t\\t# tow of falling edge\n"
  "uint32 tow_sub_ms_f\\t\\t# millisecond fraction of tow of falling edge in nanoseconds\n"
  "uint32 acc_est\\t\\t\\t# Accuracy estimate";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__TimTM2__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__TimTM2__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1441, 1441},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__TimTM2__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__TimTM2__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgRATE.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_rate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgRATE__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0xdb, 0x43, 0xe2, 0x33, 0x28, 0xd0, 0x32,
      0x64, 0x01, 0xc1, 0x4d, 0x18, 0x72, 0x6e, 0x4d,
      0xca, 0xfe, 0xec, 0xa1, 0x62, 0x69, 0x45, 0x2d,
      0xbf, 0x0a, 0x4a, 0x76, 0x01, 0x7a, 0x43, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgRATE__TYPE_NAME[] = "ublox_msgs/msg/CfgRATE";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgRATE__FIELD_NAME__meas_rate[] = "meas_rate";
static char ublox_msgs__msg__CfgRATE__FIELD_NAME__nav_rate[] = "nav_rate";
static char ublox_msgs__msg__CfgRATE__FIELD_NAME__time_ref[] = "time_ref";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgRATE__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgRATE__FIELD_NAME__meas_rate, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgRATE__FIELD_NAME__nav_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgRATE__FIELD_NAME__time_ref, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgRATE__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgRATE__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__CfgRATE__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-RATE (0x06 0x08)\n"
  "# Navigation/Measurement Rate Settings\n"
  "#\n"
  "# This message allows the user to alter the rate at which navigation solutions\n"
  "# (and the measurements that they depend on) are generated by the receiver. The\n"
  "# calculation of the navigation solution will always be aligned to the top of a\n"
  "# second zero (first second of the week) of the configured reference time\n"
  "# system. For protocol version 18 and later the navigation period is an integer\n"
  "# multiple of the measurement period.\n"
  "#  - Each measurement triggers the measurements generation and raw data output.\n"
  "#  - The navRate value defines that every nth measurement triggers a navigation\n"
  "#    epoch.\n"
  "#  - The update rate has a direct influence on the power consumption. The more\n"
  "#    fixes that are required, the more CPU power and communication resources\n"
  "#    are required.\n"
  "#  - For most applications a 1 Hz update rate would be sufficient.\n"
  "#  - When using Power Save Mode, measurement and navigation rate can differ from\n"
  "#    the values configured here\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 8\n"
  "\n"
  "uint16 meas_rate           # Measurement Rate, GPS measurements are\n"
  "                           # taken every measRate milliseconds [ms]\n"
  "uint16 nav_rate            # Navigation Rate, in number of measurement\n"
  "                           # cycles. On u-blox 5 and u-blox 6, this parameter\n"
  "                           # cannot be changed, and always equals 1.\n"
  "uint16 time_ref            # The time system to which measurements are aligned\n"
  "uint16 TIME_REF_UTC = 0\n"
  "uint16 TIME_REF_GPS = 1\n"
  "uint16 TIME_REF_GLONASS = 2   # not supported in protocol versions less than 18\n"
  "uint16 TIME_REF_BEIDOU = 3    # not supported in protocol versions less than 18\n"
  "uint16 TIME_REF_GALILEO = 4   # not supported in protocol versions less than 18";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgRATE__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgRATE__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1785, 1785},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgRATE__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgRATE__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

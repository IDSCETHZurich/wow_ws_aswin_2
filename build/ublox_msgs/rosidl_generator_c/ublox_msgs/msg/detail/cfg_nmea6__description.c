// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgNMEA6.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_nmea6__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgNMEA6__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0xdd, 0x4e, 0xca, 0xfc, 0x4f, 0xf7, 0xb8,
      0x2b, 0x8c, 0xfd, 0xa5, 0xc8, 0xe5, 0xbb, 0xa9,
      0x7b, 0x93, 0x86, 0x4d, 0x14, 0x55, 0x78, 0x64,
      0xb0, 0x10, 0xbf, 0x81, 0xf8, 0x0d, 0x9a, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgNMEA6__TYPE_NAME[] = "ublox_msgs/msg/CfgNMEA6";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgNMEA6__FIELD_NAME__filter[] = "filter";
static char ublox_msgs__msg__CfgNMEA6__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__CfgNMEA6__FIELD_NAME__num_sv[] = "num_sv";
static char ublox_msgs__msg__CfgNMEA6__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgNMEA6__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgNMEA6__FIELD_NAME__filter, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA6__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA6__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA6__FIELD_NAME__flags, 5, 5},
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
ublox_msgs__msg__CfgNMEA6__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgNMEA6__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__CfgNMEA6__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-NMEA (0x06 0x17)\n"
  "# NMEA protocol configuration\n"
  "#\n"
  "# Set/Get the NMEA protocol configuration. See section NMEA Protocol\n"
  "# Configuration for a detailed description of the configuration effects on\n"
  "# NMEA output\n"
  "#\n"
  "# Supported on u-blox 6 from firmware version 6.00 up to version 7.03.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 23\n"
  "\n"
  "uint8 filter                  # filter flags\n"
  "uint8 FILTER_POS = 1          # Disable position filtering\n"
  "uint8 FILTER_MSK_POS = 2      # Disable masked position filtering\n"
  "uint8 FILTER_TIME = 4         # Disable time filtering\n"
  "uint8 FILTER_DATE = 8         # Disable date filtering\n"
  "uint8 FILTER_SBAS_FILT = 16   # Enable SBAS filtering\n"
  "uint8 FILTER_TRACK = 32       # Disable track filtering\n"
  "\n"
  "uint8 version             # NMEA version\n"
  "uint8 NMEA_VERSION_2_3 = 35     # Version 2.3\n"
  "uint8 NMEA_VERSION_2_1 = 33     # Version 2.1\n"
  "\n"
  "uint8 num_sv                   # Maximum Number of SVs to report in NMEA\n"
  "                              # protocol.\n"
  "                              # This does not affect the receiver's operation.\n"
  "                              # It only limits the number of SVs reported in\n"
  "                              # NMEA mode (this might be needed with older\n"
  "                              # mapping applications which only support 8- or\n"
  "                              # 12-channel receivers)\n"
  "\n"
  "uint8 flags                   # flags\n"
  "uint8 FLAGS_COMPAT = 1          # enable compatibility mode.\n"
  "                                # This might be needed for certain applications\n"
  "                                # when customer's NMEA parser expects a fixed\n"
  "                                # number of  digits in position coordinates\n"
  "uint8 FLAGS_CONSIDER = 2        # enable considering mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgNMEA6__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgNMEA6__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1726, 1726},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgNMEA6__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgNMEA6__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

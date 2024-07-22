// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgNMEA7.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_nmea7__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgNMEA7__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x27, 0x0f, 0x8d, 0x96, 0x5a, 0x74, 0x1b,
      0x39, 0xc4, 0x95, 0xd9, 0x3d, 0x7c, 0xe0, 0x5f,
      0x0f, 0xf7, 0x9f, 0x5f, 0x00, 0xb0, 0xca, 0x10,
      0x37, 0x35, 0x07, 0xe4, 0xcb, 0xc0, 0x03, 0x6c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgNMEA7__TYPE_NAME[] = "ublox_msgs/msg/CfgNMEA7";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__filter[] = "filter";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__nmea_version[] = "nmea_version";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__num_sv[] = "num_sv";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__gnss_to_filter[] = "gnss_to_filter";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__sv_numbering[] = "sv_numbering";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__main_talker_id[] = "main_talker_id";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__gsv_talker_id[] = "gsv_talker_id";
static char ublox_msgs__msg__CfgNMEA7__FIELD_NAME__reserved[] = "reserved";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgNMEA7__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__filter, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__nmea_version, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__gnss_to_filter, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__sv_numbering, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__main_talker_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__gsv_talker_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNMEA7__FIELD_NAME__reserved, 8, 8},
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
ublox_msgs__msg__CfgNMEA7__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgNMEA7__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__CfgNMEA7__FIELDS, 9, 9},
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
  "# NMEA protocol configuration V0\n"
  "#\n"
  "# Set/Get the NMEA protocol configuration. See section NMEA Protocol\n"
  "# Configuration for a detailed description of the configuration effects on\n"
  "# NMEA output\n"
  "#\n"
  "# Supported on: u-blox 7 firmware version 1.00\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 23\n"
  "\n"
  "uint8 filter                  # filter flags\n"
  "uint8 FILTER_POS = 1          # Enable position output for failed or\n"
  "                              # invalid fixes\n"
  "uint8 FILTER_MSK_POS = 2      # Enable position output for invalid fixes\n"
  "uint8 FILTER_TIME = 4         # Enable time output for invalid times\n"
  "uint8 FILTER_DATE = 8         # Enable date output for invalid dates\n"
  "uint8 FILTER_GPS_ONLY = 16    # Restrict output to GPS satellites only\n"
  "uint8 FILTER_TRACK = 32       # Enable COG output even if COG is frozen\n"
  "\n"
  "uint8 nmea_version             # NMEA version\n"
  "uint8 NMEA_VERSION_2_3 = 35     # Version 2.3\n"
  "uint8 NMEA_VERSION_2_1 = 33     # Version 2.1\n"
  "\n"
  "uint8 num_sv                   # Maximum Number of SVs to report per TalkerId:\n"
  "                              # unlimited (0) or 8, 12, 16\n"
  "uint8 NUM_SV_UNLIMITED = 0\n"
  "\n"
  "uint8 flags                   # flags\n"
  "uint8 FLAGS_COMPAT = 1          # enable compatibility mode.\n"
  "                                # This might be needed for certain applications\n"
  "                                # when customer's NMEA parser expects a fixed\n"
  "                                # number of  digits in position coordinates\n"
  "uint8 FLAGS_CONSIDER = 2        # enable considering mode\n"
  "\n"
  "uint32 gnss_to_filter           # Filters out satellites based on their GNSS.\n"
  "                              # If a bitfield is enabled, the corresponding\n"
  "                              # satellites will be not output.\n"
  "uint32 GNSS_TO_FILTER_GPS = 1       # Disable reporting of GPS satellites\n"
  "uint32 GNSS_TO_FILTER_SBAS = 2      # Disable reporting of SBAS satellites\n"
  "uint32 GNSS_TO_FILTER_QZSS = 16     # Disable reporting of QZSS satellites\n"
  "uint32 GNSS_TO_FILTER_GLONASS = 32  # Disable reporting of GLONASS satellites\n"
  "\n"
  "uint8 sv_numbering             # Configures the display of satellites that do not\n"
  "                              # have an NMEA-defined value. Note: this does not\n"
  "                              # apply to satellites with an unknown ID.\n"
  "uint8 SV_NUMBERING_STRICT = 0     # Strict - Satellites are not output\n"
  "uint8 SV_NUMBERING_EXTENDED = 1   # Extended - Use proprietary numbering\n"
  "\n"
  "uint8 main_talker_id            # By default the main Talker ID (i.e. the Talker\n"
  "                              # ID used  for all messages other than GSV) is\n"
  "                              # determined by the  GNSS assignment of the\n"
  "                              # receiver's channels (see CfgGNSS).\n"
  "                              # This field enables the main Talker ID to be\n"
  "                              # overridden\n"
  "uint8 MAIN_TALKER_ID_NOT_OVERRIDDEN = 0   # Main Talker ID is not overridden\n"
  "uint8 MAIN_TALKER_ID_GP = 1               # Set main Talker ID to 'GP'\n"
  "uint8 MAIN_TALKER_ID_GL = 2               # Set main Talker ID to 'GL'\n"
  "uint8 MAIN_TALKER_ID_GN = 3               # Set main Talker ID to 'GN'\n"
  "\n"
  "uint8 gsv_talker_id             # By default the Talker ID for GSV messages is\n"
  "                              # GNSS specific (as defined by NMEA). This field\n"
  "                              # enables the GSV Talker ID to be overridden.\n"
  "uint8 GSV_TALKER_ID_GNSS_SPECIFIC = 0   # Use GNSS specific Talker ID\n"
  "                                        # (as defined by NMEA)\n"
  "uint8 GSV_TALKER_ID_MAIN = 1            # Use the main Talker ID\n"
  "\n"
  "uint8 reserved              # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgNMEA7__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgNMEA7__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3602, 3602},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgNMEA7__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgNMEA7__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

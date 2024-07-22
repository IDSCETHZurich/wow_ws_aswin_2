// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSVINFOSV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_svinfosv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSVINFOSV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x28, 0x06, 0x40, 0x15, 0x2c, 0x67, 0xfc,
      0xb9, 0xf0, 0x24, 0x5d, 0xaa, 0x2f, 0xc4, 0xf4,
      0x1f, 0x9d, 0x50, 0x72, 0x00, 0xaa, 0x0a, 0x46,
      0x85, 0xfc, 0xef, 0x4b, 0xb2, 0x49, 0x96, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavSVINFOSV__TYPE_NAME[] = "ublox_msgs/msg/NavSVINFOSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__chn[] = "chn";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__quality[] = "quality";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__cno[] = "cno";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__elev[] = "elev";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__azim[] = "azim";
static char ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__pr_res[] = "pr_res";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSVINFOSV__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__chn, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__quality, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__cno, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__elev, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__azim, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVINFOSV__FIELD_NAME__pr_res, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavSVINFOSV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSVINFOSV__TYPE_NAME, 26, 26},
      {ublox_msgs__msg__NavSVINFOSV__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see message NavSVINFO\n"
  "#\n"
  "\n"
  "uint8 chn             # Channel number, 255 for SVs not assigned to a channel\n"
  "uint8 svid            # Satellite ID\n"
  "\n"
  "uint8 flags           # Bitmask\n"
  "uint8 FLAGS_SV_USED = 1                     # SV is used for navigation\n"
  "uint8 FLAGS_DIFF_CORR = 2                   # Differential correction data\n"
  "                                            # is available for this SV\n"
  "uint8 FLAGS_ORBIT_AVAIL = 4                 # Orbit information is available for\n"
  "                                            # this SV (Ephemeris or Almanach)\n"
  "uint8 FLAGS_ORBIT_EPH = 8                   # Orbit information is Ephemeris\n"
  "uint8 FLAGS_UNHEALTHY = 16                  # SV is unhealthy / shall not be\n"
  "                                            # used\n"
  "uint8 FLAGS_ORBIT_ALM = 32                  # Orbit information is Almanac Plus\n"
  "uint8 FLAGS_ORBIT_AOP = 64                  # Orbit information is AssistNow\n"
  "                                            # Autonomous\n"
  "uint8 FLAGS_SMOOTHED = 128                  # Carrier smoothed pseudorange used\n"
  "\n"
  "uint8 quality         # Bitfield\n"
  "# qualityInd: Signal Quality indicator (range 0..7). The following list shows\n"
  "# the meaning of the different QI values:\n"
  "# Note: Since IMES signals are not time synchronized, a channel tracking an IMES\n"
  "# signal can never reach a quality indicator value of higher than 3.\n"
  "uint8 QUALITY_IDLE = 0                      # This channel is idle\n"
  "uint8 QUALITY_SEARCHING = 1                 # Channel is searching\n"
  "uint8 QUALITY_ACQUIRED = 2                   # Signal acquired\n"
  "uint8 QUALITY_DETECTED = 3                  # Signal detected but unusable\n"
  "uint8 QUALITY_CODE_LOCK = 4                 # Code Lock on Signal\n"
  "uint8 QUALITY_CODE_AND_CARRIER_LOCKED1 = 5  # Code and Carrier locked\n"
  "                                            # and time synchronized\n"
  "uint8 QUALITY_CODE_AND_CARRIER_LOCKED2 = 6  # Code and Carrier locked\n"
  "                                            # and time synchronized\n"
  "uint8 QUALITY_CODE_AND_CARRIER_LOCKED3 = 7  # Code and Carrier locked\n"
  "                                            # and time synchronized\n"
  "\n"
  "uint8 cno             # Carrier to Noise Ratio (Signal Strength) [dBHz]\n"
  "int8 elev             # Elevation in integer degrees [deg]\n"
  "int16 azim            # Azimuth in integer degrees [deg]\n"
  "int32 pr_res           # Pseudo range residual in centimetres [cm]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSVINFOSV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSVINFOSV__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2363, 2363},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSVINFOSV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSVINFOSV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

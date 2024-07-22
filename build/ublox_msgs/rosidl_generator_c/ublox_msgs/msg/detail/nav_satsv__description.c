// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSATSV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_satsv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSATSV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x6a, 0x94, 0x3a, 0xbc, 0x72, 0x3a, 0x2b,
      0x0c, 0x24, 0xce, 0xce, 0xb8, 0x40, 0x4a, 0x1a,
      0x2b, 0x4b, 0x60, 0x68, 0xa9, 0x9d, 0xf9, 0xa2,
      0xab, 0x1d, 0x5a, 0x58, 0xd4, 0xea, 0x4b, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavSATSV__TYPE_NAME[] = "ublox_msgs/msg/NavSATSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__gnss_id[] = "gnss_id";
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__sv_id[] = "sv_id";
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__cno[] = "cno";
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__elev[] = "elev";
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__azim[] = "azim";
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__pr_res[] = "pr_res";
static char ublox_msgs__msg__NavSATSV__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSATSV__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__gnss_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__sv_id, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__cno, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__elev, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__azim, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__pr_res, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSATSV__FIELD_NAME__flags, 5, 5},
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
ublox_msgs__msg__NavSATSV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSATSV__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__NavSATSV__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see NAV-SAT message\n"
  "#\n"
  "\n"
  "uint8 gnss_id      # GNSS identifier\n"
  "uint8 sv_id        # Satellite identifier\n"
  "\n"
  "uint8 cno         # Carrier to noise ratio (signal strength) ]dBHz\n"
  "int8 elev         # Elevation (range: +/-90), unknown if out of range [deg]\n"
  "int16 azim        # Azimuth (range 0-360), unknown if elevation is out of range\n"
  "                  # [deg]\n"
  "int16 pr_res       # Pseudo range residual [0.1 m]\n"
  "\n"
  "uint32 flags      # Bitmask\n"
  "uint32 FLAGS_QUALITY_IND_MASK = 7     # Signal quality indicator:\n"
  "uint8 QUALITY_IND_NO_SIGNAL = 0                     # no signal\n"
  "uint8 QUALITY_IND_SEARCHING_SIGNAL = 1              # searching signal\n"
  "uint8 QUALITY_IND_SIGNAL_ACQUIRED = 2               # signal acquired\n"
  "uint8 QUALITY_IND_SIGNAL_DETECTED_BUT_UNUSABLE = 3  # signal detected but\n"
  "                                                    # unusable\n"
  "uint8 QUALITY_IND_CODE_LOCKED_AND_TIME_SYNC = 4     # code locked and time\n"
  "                                                    # synchronized\n"
  "uint8 QUALITY_IND_CODE_AND_CARR_LOCK_AND_TIME_SYNC1 = 5 # code and carrier\n"
  "                                                        # locked and time\n"
  "                                                        # synchronized,\n"
  "                                                        # quality = 1\n"
  "uint8 QUALITY_IND_CODE_AND_CARR_LOCK_AND_TIME_SYNC2 = 6 # code and carrier\n"
  "                                                        # locked and time\n"
  "                                                        # synchronized,\n"
  "                                                        # quality = 2\n"
  "uint8 QUALITY_IND_CODE_AND_CARR_LOCK_AND_TIME_SYNC3 = 7 # code and carrier\n"
  "                                                        # locked and time\n"
  "                                                        # synchronized,\n"
  "                                                        # quality = 3\n"
  "# Note: Since IMES signals are not time synchronized, a channel tracking an IMES\n"
  "# signal can never reach a quality indicator value of higher than 3.\n"
  "uint32 FLAGS_SV_USED = 8                      # whether SV is currently being\n"
  "                                              # used for navigation\n"
  "uint32 FLAGS_HEALTH_MASK = 48                 # SV health flag:\n"
  "uint32 HEALTH_UNKNOWN = 0                       # unknown\n"
  "uint32 HEALTH_HEALTHY = 1                       # healthy\n"
  "uint32 HEALTH_UNHEALTHY = 2                     # unhealthy\n"
  "uint32 FLAGS_DIFF_CORR = 64                   # whether differential correction\n"
  "                                              # data is available for this SV\n"
  "uint32 FLAGS_SMOOTHED = 128                   # whether carrier smoothed\n"
  "                                              # pseudorange used\n"
  "uint32 FLAGS_ORBIT_SOURCE_MASK = 1792         # Orbit source:\n"
  "uint32 ORBIT_SOURCE_UNAVAILABLE = 0             # no orbit information is\n"
  "                                              # available for this SV\n"
  "uint32 ORBIT_SOURCE_EPH = 256                   # ephemeris is used\n"
  "uint32 ORBIT_SOURCE_ALM = 512                   # almanac is used\n"
  "uint32 ORBIT_SOURCE_ASSIST_OFFLINE = 768        # AssistNow Offline orbit is\n"
  "                                                # used\n"
  "uint32 ORBIT_SOURCE_ASSIST_AUTONOMOUS = 1024    # AssistNow Autonomous orbit is\n"
  "                                                # used\n"
  "uint32 ORBIT_SOURCE_OTHER1 = 1280               # other orbit information is\n"
  "                                                # used\n"
  "uint32 ORBIT_SOURCE_OTHER2 = 1536               # other orbit information is\n"
  "                                                # used\n"
  "uint32 ORBIT_SOURCE_OTHER3 = 1792               # other orbit information is\n"
  "                                                # used\n"
  "uint32 FLAGS_EPH_AVAIL = 2048                 # whether ephemeris is available\n"
  "                                              # for this SV\n"
  "uint32 FLAGS_ALM_AVAIL = 4096                 # whether almanac is available for\n"
  "                                              # this SV\n"
  "uint32 FLAGS_ANO_AVAIL = 8192                 # whether AssistNow Offline data\n"
  "                                              # is available for this SV\n"
  "uint32 FLAGS_AOP_AVAIL = 16384                # whether AssistNow Autonomous\n"
  "                                              # data is available for this SV\n"
  "uint32 FLAGS_SBAS_CORR_USED = 65536           # whether SBAS corrections have\n"
  "                                              # been used for this SV\n"
  "uint32 FLAGS_RTCM_CORR_USED = 131072          # whether RTCM corrections have\n"
  "                                              # been used for this SV\n"
  "uint32 FLAGS_PR_CORR_USED = 1048576           # whether Pseudorange corrections\n"
  "                                              # have been used for this SV\n"
  "uint32 FLAGS_CR_CORR_USED = 2097152           # whether Carrier range\n"
  "                                              # corrections have been used for\n"
  "                                              # this SV\n"
  "uint32 FLAGS_DO_CORR_USED = 4194304           # whether Range rate (Doppler)\n"
  "                                              # corrections have been used for\n"
  "                                              # this SV";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSATSV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSATSV__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 5143, 5143},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSATSV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSATSV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

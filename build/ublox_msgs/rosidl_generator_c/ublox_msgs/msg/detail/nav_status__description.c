// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSTATUS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSTATUS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x5b, 0x17, 0xf3, 0xef, 0x44, 0x26, 0x56,
      0xeb, 0x43, 0x1a, 0x3d, 0xf5, 0x4b, 0xc4, 0x4c,
      0xa6, 0x42, 0xc4, 0xb5, 0xa1, 0x25, 0x44, 0x62,
      0xf8, 0x9b, 0xd8, 0x95, 0x17, 0x15, 0x22, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavSTATUS__TYPE_NAME[] = "ublox_msgs/msg/NavSTATUS";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__gps_fix[] = "gps_fix";
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__fix_stat[] = "fix_stat";
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__flags2[] = "flags2";
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__ttff[] = "ttff";
static char ublox_msgs__msg__NavSTATUS__FIELD_NAME__msss[] = "msss";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSTATUS__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__gps_fix, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__fix_stat, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__flags2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__ttff, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSTATUS__FIELD_NAME__msss, 4, 4},
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
ublox_msgs__msg__NavSTATUS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSTATUS__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__NavSTATUS__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-STATUS (0x01 0x03)\n"
  "# Receiver Navigation Status\n"
  "#\n"
  "# See important comments concerning validity of position and velocity given in\n"
  "# section Navigation Output Filters.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 3\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "uint8 gps_fix            # GPSfix Type, this value does not qualify a fix as\n"
  "                        # valid and within the limits. See note on flag gpsFixOk\n"
  "                        # below\n"
  "uint8 GPS_NO_FIX = 0\n"
  "uint8 GPS_DEAD_RECKONING_ONLY = 1\n"
  "uint8 GPS_2D_FIX = 2\n"
  "uint8 GPS_3D_FIX = 3\n"
  "uint8 GPS_GPS_DEAD_RECKONING_COMBINED = 4\n"
  "uint8 GPS_TIME_ONLY_FIX = 5\n"
  "\n"
  "uint8 flags             # Navigation Status Flags\n"
  "uint8 FLAGS_GPS_FIX_OK = 1      # position & velocity valid & within DOP & ACC\n"
  "                                # Masks\n"
  "uint8 FLAGS_DIFF_SOLN = 2       # Differential corrections were applied\n"
  "uint8 FLAGS_WKNSET = 4          # Week Number valid\n"
  "uint8 FLAGS_TOWSET = 8          # Time of Week valid\n"
  "\n"
  "uint8 fix_stat           # Fix Status Information\n"
  "uint8 FIX_STAT_DIFF_CORR_MASK = 1       # 1 = differential corrections available\n"
  "# map matching status:\n"
  "uint8 FIX_STAT_MAP_MATCHING_MASK = 192\n"
  "uint8 MAP_MATCHING_NONE = 0      # none\n"
  "uint8 MAP_MATCHING_VALID = 64    # valid but not used, i.e. map matching data\n"
  "                                 # was received, but was too old\n"
  "uint8 MAP_MATCHING_USED = 128    # valid and used, map matching data was applied\n"
  "uint8 MAP_MATCHING_DR = 192      # valid and used, map matching data was\n"
  "                                 # applied. In case of sensor unavailability map\n"
  "                                 # matching data enables dead reckoning.\n"
  "                                 # This requires map matched latitude/longitude\n"
  "                                 # or heading data.\n"
  "\n"
  "uint8 flags2            # further information about navigation output\n"
  "# power safe mode state (Only for FW version >= 7.01; undefined otherwise)\n"
  "uint8 FLAGS2_PSM_STATE_MASK = 3\n"
  "uint8 PSM_STATE_ACQUISITION = 0                # ACQUISITION\n"
  "                                               # [or when psm disabled]\n"
  "uint8 PSM_STATE_TRACKING = 1                   # TRACKING\n"
  "uint8 PSM_STATE_POWER_OPTIMIZED_TRACKING = 2   # POWER OPTIMIZED TRACKING\n"
  "uint8 PSM_STATE_INACTIVE = 3                   # INACTIVE\n"
  "# Note that the spoofing state value only reflects the detector state for the\n"
  "# current navigation epoch. As spoofing can be detected most easily at the\n"
  "# transition from real signal to spoofing signal, this is also where the\n"
  "# detector is triggered the most. I.e. a value of 1 - No spoofing indicated does\n"
  "# not mean that the receiver is not spoofed, it #simply states that the detector\n"
  "# was not triggered in this epoch.\n"
  "uint8 FLAGS2_SPOOF_DET_STATE_MASK = 24\n"
  "uint8 SPOOF_DET_STATE_UNKNOWN = 0    # Unknown or deactivated\n"
  "uint8 SPOOF_DET_STATE_NONE = 8       # No spoofing indicated\n"
  "uint8 SPOOF_DET_STATE_SPOOFING = 16  # Spoofing indicated\n"
  "uint8 SPOOF_DET_STATE_MULTIPLE = 24  # Multiple spoofing indication\n"
  "\n"
  "uint32 ttff             # Time to first fix (millisecond time tag) [ms]\n"
  "uint32 msss             # Milliseconds since Startup / Reset [ms]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSTATUS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSTATUS__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3150, 3150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSTATUS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSTATUS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

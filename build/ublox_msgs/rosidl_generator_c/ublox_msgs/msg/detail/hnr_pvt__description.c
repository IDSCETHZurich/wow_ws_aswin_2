// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/HnrPVT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/hnr_pvt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__HnrPVT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xbe, 0x76, 0x15, 0x39, 0x0b, 0x4e, 0x24,
      0xd6, 0x7d, 0xe4, 0x8d, 0xd7, 0x8e, 0x62, 0xdd,
      0xfb, 0xa6, 0xec, 0x39, 0x3e, 0x57, 0x7d, 0xcc,
      0x98, 0xec, 0x42, 0x02, 0x84, 0x67, 0x75, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__HnrPVT__TYPE_NAME[] = "ublox_msgs/msg/HnrPVT";

// Define type names, field names, and default values
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__year[] = "year";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__month[] = "month";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__day[] = "day";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__hour[] = "hour";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__min[] = "min";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__sec[] = "sec";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__valid[] = "valid";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__nano[] = "nano";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__gps_fix[] = "gps_fix";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__lon[] = "lon";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__lat[] = "lat";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__height[] = "height";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__h_msl[] = "h_msl";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__g_speed[] = "g_speed";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__speed[] = "speed";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__head_mot[] = "head_mot";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__head_veh[] = "head_veh";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__h_acc[] = "h_acc";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__v_acc[] = "v_acc";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__s_acc[] = "s_acc";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__head_acc[] = "head_acc";
static char ublox_msgs__msg__HnrPVT__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__HnrPVT__FIELDS[] = {
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__year, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__month, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__day, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__hour, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__min, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__sec, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__nano, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__gps_fix, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__h_msl, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__g_speed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__head_mot, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__head_veh, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__h_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__v_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__s_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__head_acc, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__HnrPVT__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__HnrPVT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__HnrPVT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__HnrPVT__FIELDS, 25, 25},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# HNR-PVT (0x28 0x00)\n"
  "# High Rate Output of PVT Solution\n"
  "#\n"
  "# Note that during a leap second there may be more (or less) than 60 seconds in\n"
  "# a minute; see the description of leap seconds for details.\n"
  "#\n"
  "# This message provides the position, velocity and time solution with high\n"
  "# output rate.\n"
  "#\n"
  "# Supported on ADR and UDR products.\n"
  "#\n"
  "uint8 CLASS_ID = 40\n"
  "uint8 MESSAGE_ID = 0\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "uint16 year             # Year (UTC)\n"
  "uint8 month             # Month, range 1..12 (UTC)\n"
  "uint8 day               # Day of month, range 1..31 (UTC)\n"
  "uint8 hour              # Hour of day, range 0..23 (UTC)\n"
  "uint8 min               # Minute of hour, range 0..59 (UTC)\n"
  "uint8 sec               # Seconds of minute, range 0..60 (UTC)\n"
  "\n"
  "uint8 valid             # Validity flags\n"
  "uint8 VALID_DATE = 1            # Valid UTC Date\n"
  "uint8 VALID_TIME = 2            # Valid\n"
  "uint8 VALID_FULLY_RESOLVED = 4  # UTC time of day has been fully resolved\n"
  "                                # (no seconds uncertainty)\n"
  "uint8 VALID_MAG = 8             # Valid Magnetic Declination\n"
  "\n"
  "int32 nano              # fraction of a second [ns], range -1e9 .. 1e9 (UTC)\n"
  "\n"
  "uint8 gps_fix            # GPS fix Type, range 0..5\n"
  "uint8 FIX_TYPE_NO_FIX = 0\n"
  "uint8 FIX_TYPE_DEAD_RECKONING_ONLY = 1\n"
  "uint8 FIX_TYPE_2D = 2                           # Signal from only 3 SVs,\n"
  "                                                # constant altitude assumed\n"
  "uint8 FIX_TYPE_3D = 3\n"
  "uint8 FIX_TYPE_GPS_DEAD_RECKONING_COMBINED = 4  # GPS + Dead reckoning\n"
  "uint8 FIX_TYPE_TIME_ONLY = 5                    # Time only fix\n"
  "\n"
  "uint8 flags             # Fix Status Flags\n"
  "uint8 FLAGS_GNSS_FIX_OK = 1          # i.e. within DOP & accuracy masks\n"
  "uint8 FLAGS_DIFF_SOLN = 2            # DGPS used\n"
  "uint8 FLAGS_WKN_SET = 4              # Valid GPS week number\n"
  "uint8 FLAGS_TOW_SET = 8              # Valid GPS time of week (iTOW & fTOW)\n"
  "uint8 FLAGS_HEAD_VEH_VALID = 32      # heading of vehicle is valid\n"
  "\n"
  "uint8[2] reserved0      # Reserved\n"
  "\n"
  "int32 lon               # Longitude [deg / 1e-7]\n"
  "int32 lat               # Latitude [deg / 1e-7]\n"
  "int32 height            # Height above Ellipsoid [mm]\n"
  "int32 h_msl              # Height above mean sea level [mm]\n"
  "\n"
  "int32 g_speed            # Ground Speed (2-D) [mm/s]\n"
  "int32 speed             # Speed (3-D) [mm/s]\n"
  "\n"
  "int32 head_mot           # Heading of motion (2-D) [deg / 1e-5]\n"
  "int32 head_veh           # Heading of vehicle (2-D) [deg / 1e-5]\n"
  "\n"
  "uint32 h_acc             # Horizontal Accuracy Estimate [mm]\n"
  "uint32 v_acc             # Vertical Accuracy Estimate [mm]\n"
  "uint32 s_acc             # Speed Accuracy Estimate [mm/s]\n"
  "uint32 head_acc          # Heading Accuracy Estimate (both motion & vehicle)\n"
  "                        # [deg / 1e-5]\n"
  "\n"
  "uint8[4] reserved1      # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__HnrPVT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__HnrPVT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2767, 2767},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__HnrPVT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__HnrPVT__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

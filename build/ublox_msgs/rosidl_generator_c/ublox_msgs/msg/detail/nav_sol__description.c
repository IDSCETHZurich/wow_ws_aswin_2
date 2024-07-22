// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSOL.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_sol__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSOL__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x44, 0xae, 0x13, 0x62, 0xed, 0x1e, 0xe2,
      0x45, 0x97, 0x10, 0xa0, 0x45, 0xe0, 0x66, 0x22,
      0x3f, 0x39, 0x6b, 0x54, 0xa7, 0xdf, 0x25, 0x38,
      0xbb, 0xc8, 0x7e, 0x39, 0xe3, 0x9f, 0x2d, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavSOL__TYPE_NAME[] = "ublox_msgs/msg/NavSOL";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSOL__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__f_tow[] = "f_tow";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__week[] = "week";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__gps_fix[] = "gps_fix";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_x[] = "ecef_x";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_y[] = "ecef_y";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_z[] = "ecef_z";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__p_acc[] = "p_acc";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_vx[] = "ecef_vx";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_vy[] = "ecef_vy";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_vz[] = "ecef_vz";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__s_acc[] = "s_acc";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__p_dop[] = "p_dop";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__num_sv[] = "num_sv";
static char ublox_msgs__msg__NavSOL__FIELD_NAME__reserved2[] = "reserved2";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSOL__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__f_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__week, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__gps_fix, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__p_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_vx, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_vy, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__ecef_vz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__s_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__p_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSOL__FIELD_NAME__reserved2, 9, 9},
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
ublox_msgs__msg__NavSOL__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSOL__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__NavSOL__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-SOL (0x01 0x06)\n"
  "# Navigation Solution Information\n"
  "#\n"
  "# This message combines Position, velocity and time solution in ECEF, including\n"
  "# accuracy figures\n"
  "# This message has only been retained for backwards compatibility; users are\n"
  "# recommended to use the UBX-NAV-PVT message in preference.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 6\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "int32 f_tow              # Fractional Nanoseconds remainder of rounded\n"
  "                        # ms above, range -500000 .. 500000 [ns]\n"
  "int16 week              # GPS week (GPS time)\n"
  "\n"
  "uint8 gps_fix            # GPSfix Type, range 0..5\n"
  "uint8 GPS_NO_FIX = 0\n"
  "uint8 GPS_DEAD_RECKONING_ONLY = 1\n"
  "uint8 GPS_2D_FIX = 2\n"
  "uint8 GPS_3D_FIX = 3\n"
  "uint8 GPS_GPS_DEAD_RECKONING_COMBINED = 4\n"
  "uint8 GPS_TIME_ONLY_FIX = 5\n"
  "\n"
  "uint8 flags             # Fix Status Flags\n"
  "uint8 FLAGS_GPS_FIX_OK = 1      # Fix within limits i.e. within DOP & ACC Masks\n"
  "uint8 FLAGS_DIFF_SOLN = 2       # DGPS used\n"
  "uint8 FLAGS_WKNSET = 4          # Week Number valid\n"
  "uint8 FLAGS_TOWSET = 8          # Time of Week valid\n"
  "\n"
  "int32 ecef_x             # ECEF X coordinate [cm]\n"
  "int32 ecef_y             # ECEF Y coordinate [cm]\n"
  "int32 ecef_z             # ECEF Z coordinate [cm]\n"
  "uint32 p_acc             # 3D Position Accuracy Estimate [cm]\n"
  "int32 ecef_vx            # ECEF X velocity [cm/s]\n"
  "int32 ecef_vy            # ECEF Y velocity [cm/s]\n"
  "int32 ecef_vz            # ECEF Z velocity [cm/s]\n"
  "uint32 s_acc             # Speed Accuracy Estimate [cm/s]\n"
  "uint16 p_dop             # Position DOP [1 / 0.01]\n"
  "uint8 reserved1         # Reserved\n"
  "uint8 num_sv             # Number of SVs used in Nav Solution\n"
  "uint32 reserved2        # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSOL__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSOL__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1677, 1677},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSOL__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSOL__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

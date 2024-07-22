// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavPVT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_pvt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavPVT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x0f, 0x01, 0x18, 0xd3, 0x3d, 0xa0, 0x8a,
      0x0d, 0x5e, 0x8e, 0x7c, 0xaf, 0x6b, 0x93, 0x37,
      0x17, 0x7d, 0x4a, 0x90, 0xed, 0xe2, 0xdd, 0x43,
      0xfd, 0xcc, 0x60, 0x5c, 0x14, 0xfe, 0x5f, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavPVT__TYPE_NAME[] = "ublox_msgs/msg/NavPVT";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavPVT__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__year[] = "year";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__month[] = "month";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__day[] = "day";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__hour[] = "hour";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__min[] = "min";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__sec[] = "sec";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__valid[] = "valid";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__t_acc[] = "t_acc";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__nano[] = "nano";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__fix_type[] = "fix_type";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__flags2[] = "flags2";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__num_sv[] = "num_sv";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__lon[] = "lon";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__lat[] = "lat";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__height[] = "height";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__h_msl[] = "h_msl";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__h_acc[] = "h_acc";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__v_acc[] = "v_acc";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__vel_n[] = "vel_n";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__vel_e[] = "vel_e";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__vel_d[] = "vel_d";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__g_speed[] = "g_speed";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__heading[] = "heading";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__s_acc[] = "s_acc";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__head_acc[] = "head_acc";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__p_dop[] = "p_dop";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__head_veh[] = "head_veh";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__mag_dec[] = "mag_dec";
static char ublox_msgs__msg__NavPVT__FIELD_NAME__mag_acc[] = "mag_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavPVT__FIELDS[] = {
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__year, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__month, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__day, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__hour, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__min, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__sec, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__t_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__nano, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__fix_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__flags2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__h_msl, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__h_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__v_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__vel_n, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__vel_e, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__vel_d, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__g_speed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__s_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__head_acc, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__p_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__head_veh, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__mag_dec, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPVT__FIELD_NAME__mag_acc, 7, 7},
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
ublox_msgs__msg__NavPVT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavPVT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__NavPVT__FIELDS, 32, 32},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-PVT (0x01 0x07)\n"
  "# Navigation Position Velocity Time Solution\n"
  "#\n"
  "# Note that during a leap second there may be more (or less) than 60 seconds in\n"
  "# a minute; see the description of leap seconds for details.\n"
  "#\n"
  "# This message combines Position, velocity and time solution in LLH,\n"
  "# including accuracy figures\n"
  "#\n"
  "# WARNING: For firmware version 7, this message is a different length.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 7\n"
  "\n"
  "uint32 i_tow            # GPS Millisecond time of week [ms]\n"
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
  "uint32 t_acc            # time accuracy estimate [ns] (UTC)\n"
  "int32 nano              # fraction of a second [ns], range -1e9 .. 1e9 (UTC)\n"
  "\n"
  "uint8 fix_type           # GNSS fix Type, range 0..5\n"
  "uint8 FIX_TYPE_NO_FIX = 0\n"
  "uint8 FIX_TYPE_DEAD_RECKONING_ONLY = 1\n"
  "uint8 FIX_TYPE_2D = 2                           # Signal from only 3 SVs,\n"
  "                                                # constant altitude assumed\n"
  "uint8 FIX_TYPE_3D = 3\n"
  "uint8 FIX_TYPE_GNSS_DEAD_RECKONING_COMBINED = 4 # GNSS + Dead reckoning\n"
  "uint8 FIX_TYPE_TIME_ONLY = 5                    # Time only fix (High precision\n"
  "                                                # devices)\n"
  "\n"
  "uint8 flags             # Fix Status Flags\n"
  "uint8 FLAGS_GNSS_FIX_OK = 1          # i.e. within DOP & accuracy masks\n"
  "uint8 FLAGS_DIFF_SOLN = 2            # DGPS used\n"
  "uint8 FLAGS_PSM_MASK = 28            # Power Save Mode\n"
  "uint8 PSM_OFF = 0                       # PSM is off\n"
  "uint8 PSM_ENABLED = 4                   # Enabled (state before acquisition)\n"
  "uint8 PSM_ACQUIRED = 8                  # Acquisition\n"
  "uint8 PSM_TRACKING = 12                 # Tracking\n"
  "uint8 PSM_POWER_OPTIMIZED_TRACKING = 16 # Power Optimized Tracking\n"
  "uint8 PSM_INACTIVE = 20                 # Inactive\n"
  "uint8 FLAGS_HEAD_VEH_VALID = 32         # heading of vehicle is valid\n"
  "uint8 FLAGS_CARRIER_PHASE_MASK = 192 # Carrier Phase Range Solution Status\n"
  "uint8 CARRIER_PHASE_NO_SOLUTION = 0     # no carrier phase range solution\n"
  "uint8 CARRIER_PHASE_FLOAT = 64          # carrier phase float solution (no fixed\n"
  "                                        # integer measurements have been used to\n"
  "                                        # calculate the solution)\n"
  "uint8 CARRIER_PHASE_FIXED = 128         # fixed solution (>=1 fixed integer\n"
  "                                        # carrier phase range measurements have\n"
  "                                        # been used to calculate  the solution)\n"
  "\n"
  "uint8 flags2            # Additional Flags\n"
  "uint8 FLAGS2_CONFIRMED_AVAILABLE = 32   # information about UTC Date and Time of\n"
  "                                        # Day validity confirmation is available\n"
  "uint8 FLAGS2_CONFIRMED_DATE = 64        # UTC Date validity could be confirmed\n"
  "uint8 FLAGS2_CONFIRMED_TIME = 128       # UTC Time of Day could be confirmed\n"
  "\n"
  "uint8 num_sv             # Number of SVs used in Nav Solution\n"
  "int32 lon                # Longitude [deg / 1e-7]\n"
  "int32 lat                # Latitude [deg / 1e-7]\n"
  "int32 height             # Height above Ellipsoid [mm]\n"
  "int32 h_msl              # Height above mean sea level [mm]\n"
  "uint32 h_acc             # Horizontal Accuracy Estimate [mm]\n"
  "uint32 v_acc             # Vertical Accuracy Estimate [mm]\n"
  "\n"
  "int32 vel_n              # NED north velocity [mm/s]\n"
  "int32 vel_e              # NED east velocity [mm/s]\n"
  "int32 vel_d              # NED down velocity [mm/s]\n"
  "int32 g_speed            # Ground Speed (2-D) [mm/s]\n"
  "int32 heading            # Heading of motion 2-D [deg / 1e-5]\n"
  "uint32 s_acc             # Speed Accuracy Estimate [mm/s]\n"
  "uint32 head_acc          # Heading Accuracy Estimate (both motion & vehicle)\n"
  "                         # [deg / 1e-5]\n"
  "\n"
  "uint16 p_dop             # Position DOP [1 / 0.01]\n"
  "uint8[6] reserved1       # Reserved\n"
  "\n"
  "int32 head_veh           # Heading of vehicle (2-D) [deg / 1e-5]\n"
  "int16 mag_dec            # Magnetic declination [deg / 1e-2]\n"
  "uint16 mag_acc           # Magnetic declination accuracy [deg / 1e-2]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavPVT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavPVT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 4526, 4526},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavPVT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavPVT__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgNAV5.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_nav5__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgNAV5__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0x1a, 0x01, 0x49, 0xf1, 0xf0, 0x65, 0x12,
      0x39, 0x34, 0x8e, 0x90, 0x9c, 0x41, 0xec, 0x04,
      0xf8, 0x8a, 0x07, 0x8d, 0x9c, 0x8c, 0xf6, 0xdd,
      0xb6, 0x57, 0xf0, 0x6f, 0x1f, 0x8b, 0x43, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgNAV5__TYPE_NAME[] = "ublox_msgs/msg/CfgNAV5";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__mask[] = "mask";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__dyn_model[] = "dyn_model";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__fix_mode[] = "fix_mode";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__fixed_alt[] = "fixed_alt";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__fixed_alt_var[] = "fixed_alt_var";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__min_elev[] = "min_elev";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__dr_limit[] = "dr_limit";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__p_dop[] = "p_dop";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__t_dop[] = "t_dop";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__p_acc[] = "p_acc";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__t_acc[] = "t_acc";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__static_hold_thresh[] = "static_hold_thresh";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__dgnss_time_out[] = "dgnss_time_out";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__cno_thresh_num_svs[] = "cno_thresh_num_svs";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__cno_thresh[] = "cno_thresh";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__static_hold_max_dist[] = "static_hold_max_dist";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__utc_standard[] = "utc_standard";
static char ublox_msgs__msg__CfgNAV5__FIELD_NAME__reserved2[] = "reserved2";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgNAV5__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__mask, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__dyn_model, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__fix_mode, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__fixed_alt, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__fixed_alt_var, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__min_elev, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__dr_limit, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__p_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__t_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__p_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__t_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__static_hold_thresh, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__dgnss_time_out, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__cno_thresh_num_svs, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__cno_thresh, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__static_hold_max_dist, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__utc_standard, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAV5__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgNAV5__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgNAV5__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__CfgNAV5__FIELDS, 19, 19},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-NAV5 (0x06 0x24)\n"
  "# Navigation Engine Settings\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 36\n"
  "\n"
  "uint16 mask                         # Parameters Bitmask. Only the masked\n"
  "                                    # parameters will be applied.\n"
  "uint16 MASK_DYN = 1                 # Apply dynamic model settings\n"
  "uint16 MASK_MIN_EL = 2              # Apply minimum elevation settings\n"
  "uint16 MASK_FIX_MODE = 4            # Apply fix mode settings\n"
  "uint16 MASK_DR_LIM = 8              # Apply DR limit settings\n"
  "uint16 MASK_POS_MASK = 16           # Apply position mask settings\n"
  "uint16 MASK_TIME_MASK = 32          # Apply time mask settings\n"
  "uint16 MASK_STATIC_HOLD_MASK = 64   # Apply static hold settings\n"
  "uint16 MASK_DGPS_MASK = 128         # Apply DGPS settings, firmware >= 7 only\n"
  "uint16 MASK_CNO = 256               # Apply CNO threshold settings\n"
  "uint16 MASK_UTC = 1024              # Apply UTC settings, protocol >= 16 only\n"
  "\n"
  "uint8 dyn_model                     # Dynamic Platform model:\n"
  "uint8 DYN_MODEL_PORTABLE = 0        # Portable\n"
  "uint8 DYN_MODEL_STATIONARY = 2      # Stationary\n"
  "uint8 DYN_MODEL_PEDESTRIAN = 3      # Pedestrian\n"
  "uint8 DYN_MODEL_AUTOMOTIVE = 4      # Automotive\n"
  "uint8 DYN_MODEL_SEA = 5             # Sea\n"
  "uint8 DYN_MODEL_AIRBORNE_1G = 6     # Airborne with <1g Acceleration\n"
  "uint8 DYN_MODEL_AIRBORNE_2G = 7     # Airborne with <2g Acceleration\n"
  "uint8 DYN_MODEL_AIRBORNE_4G = 8     # Airborne with <4g Acceleration\n"
  "uint8 DYN_MODEL_WRIST_WATCH = 9     # Wrist watch, protocol >= 18\n"
  "\n"
  "uint8 fix_mode                      # Position Fixing Mode.\n"
  "uint8 FIX_MODE_2D_ONLY = 1          # 2D only\n"
  "uint8 FIX_MODE_3D_ONLY = 2          # 3D only\n"
  "uint8 FIX_MODE_AUTO = 3             # Auto 2D/3D\n"
  "\n"
  "int32 fixed_alt                     # Fixed altitude (mean sea level) for 2D fix mode.\n"
  "                                    # [m / 0.01]\n"
  "uint32 fixed_alt_var                # Fixed altitude variance for 2D mode. [m^2 / 0.0001]\n"
  "int8 min_elev                       # Minimum Elevation for a GNSS satellite to be used in\n"
  "                                    # NAV [deg]\n"
  "uint8 dr_limit                      # Maximum time to perform dead reckoning [s]\n"
  "                                    # (linear extrapolation) in case of GPS signal loss\n"
  "uint16 p_dop                        # Position DOP Mask to use [1 / 0.1]\n"
  "uint16 t_dop                        # Time DOP Mask to use [1 / 0.1]\n"
  "uint16 p_acc                        # Position Accuracy Mask [m]\n"
  "uint16 t_acc                        # Time Accuracy Mask [m]\n"
  "uint8 static_hold_thresh            # Static hold threshold [cm/s]\n"
  "uint8 dgnss_time_out                # DGNSS timeout, firmware 7 and newer only [s]\n"
  "\n"
  "uint8 cno_thresh_num_svs            # Number of satellites required to have C/N0 above\n"
  "                                    # cnoThresh for a fix to be attempted\n"
  "uint8 cno_thresh                    # C/N0 threshold for deciding whether to attempt a fix\n"
  "                                    # [dBHz]\n"
  "uint8[2] reserved1                  # Reserved\n"
  "\n"
  "uint16 static_hold_max_dist         # Static hold distance threshold (before quitting\n"
  "                                    # static hold) [m]\n"
  "uint8 utc_standard                  # UTC standard to be used:\n"
  "uint8 UTC_STANDARD_AUTOMATIC = 0    # receiver selects based on GNSS configuration\n"
  "uint8 UTC_STANDARD_GPS = 3          # UTC as operated by the U.S. Naval Observatory\n"
  "                                    # (USNO); derived from GPS time\n"
  "uint8 UTC_STANDARD_GLONASS = 6      # UTC as operated by the former Soviet Union;\n"
  "                                    # derived from GLONASS time\n"
  "uint8 UTC_STANDARD_BEIDOU = 7       # UTC as operated by the National Time Service\n"
  "                                    # Center, China; derived from BeiDou time\n"
  "uint8[5] reserved2                  # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgNAV5__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgNAV5__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3781, 3781},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgNAV5__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgNAV5__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

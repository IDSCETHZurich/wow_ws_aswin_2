// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgNAVX5.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_navx5__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgNAVX5__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x39, 0x93, 0x9f, 0x71, 0x43, 0xcc, 0x22,
      0x78, 0xb1, 0x8a, 0x06, 0x0b, 0x62, 0x04, 0xec,
      0xba, 0x58, 0x6c, 0xee, 0x2d, 0x89, 0xd5, 0x81,
      0x24, 0x23, 0xa3, 0x00, 0xd5, 0x31, 0x1a, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgNAVX5__TYPE_NAME[] = "ublox_msgs/msg/CfgNAVX5";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__mask1[] = "mask1";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__mask2[] = "mask2";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__min_svs[] = "min_svs";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__max_svs[] = "max_svs";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__min_cno[] = "min_cno";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved2[] = "reserved2";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__ini_fix3d[] = "ini_fix3d";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved3[] = "reserved3";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__ack_aiding[] = "ack_aiding";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__wkn_rollover[] = "wkn_rollover";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__sig_atten_comp_mode[] = "sig_atten_comp_mode";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved4[] = "reserved4";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__use_ppp[] = "use_ppp";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__aop_cfg[] = "aop_cfg";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved5[] = "reserved5";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__aop_orb_max_err[] = "aop_orb_max_err";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved6[] = "reserved6";
static char ublox_msgs__msg__CfgNAVX5__FIELD_NAME__use_adr[] = "use_adr";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgNAVX5__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__mask1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__mask2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__min_svs, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__max_svs, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__min_cno, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__ini_fix3d, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved3, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__ack_aiding, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__wkn_rollover, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__sig_atten_comp_mode, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved4, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__use_ppp, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__aop_cfg, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved5, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__aop_orb_max_err, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__reserved6, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgNAVX5__FIELD_NAME__use_adr, 7, 7},
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
ublox_msgs__msg__CfgNAVX5__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgNAVX5__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__CfgNAVX5__FIELDS, 20, 20},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-NAVX5 (0x06 0x23)\n"
  "# Navigation Engine Expert Settings\n"
  "#\n"
  "# Warning: Refer to u-blox protocol spec before changing these settings.\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 35\n"
  "\n"
  "uint16 version                         # Message version (set to 0)\n"
  "\n"
  "uint16 mask1                           # First parameters bitmask (possible values below)\n"
  "uint16 MASK1_MIN_MAX        = 4        # apply min/max SVs settings\n"
  "uint16 MASK1_MIN_CNO        = 8        # apply minimum C/N0 setting\n"
  "uint16 MASK1_INITIAL_FIX_3D = 64       # apply initial 3D fix settings\n"
  "uint16 MASK1_WKN_ROLL       = 512      # apply GPS week number rollover settings\n"
  "uint16 MASK1_ACK_AID        = 1024     # apply assistance acknowledgment\n"
  "                                       # settings\n"
  "uint16 MASK1_PPP            = 8192     # apply usePPP flag\n"
  "uint16 MASK1_AOP            = 16384    # apply aopCfg (useAOP flag) and\n"
  "                                       # aopOrbMaxErr settings\n"
  "                                       # (AssistNow Autonomous)\n"
  "\n"
  "uint32 mask2                           # Second parameters bitmask (possible values below)\n"
  "                                       # Firmware >=8 only\n"
  "uint32 MASK2_ADR = 64                  # Apply ADR sensor fusion on/off\n"
  "                                       # setting\n"
  "uint32 MASK2_SIG_ATTEN_COMP_MODE = 128 # Apply signal attenuation\n"
  "                                       # compensation feature settings\n"
  "\n"
  "uint8[2] reserved1                     # Always set to zero\n"
  "\n"
  "uint8 min_svs                          # Minimum number of satellites for navigation\n"
  "uint8 max_svs                          # Maximum number of satellites for navigation\n"
  "uint8 min_cno                          # Minimum satellite signal level for navigation [dBHz]\n"
  "\n"
  "uint8 reserved2                        # Always set to zero\n"
  "\n"
  "uint8 ini_fix3d                        # If set to 1, initial fix must be 3D\n"
  "\n"
  "uint8[2] reserved3                     # Always set to zero\n"
  "\n"
  "uint8 ack_aiding                       # If set to 1, issue acknowledgments for assistance\n"
  "uint16 wkn_rollover                    # GPS week rollover number, GPS week numbers will be set\n"
  "                                       # correctly from this week up to 1024 weeks after this\n"
  "                                       # week\n"
  "uint8 sig_atten_comp_mode              # Permanently attenuated signal compensation [dBHz]\n"
  "                                       # 0 = disabled, 255 = automatic\n"
  "                                       # 1..63 = maximum expected C/N0 value\n"
  "                                       # Firmware 8 only\n"
  "\n"
  "uint8[5] reserved4                     # Always set to zero\n"
  "\n"
  "uint8 use_ppp                          # Enable/disable PPP (on supported units)\n"
  "uint8 aop_cfg                          # AssistNow Autonomous configuration, 1: enabled\n"
  "\n"
  "uint8[2] reserved5                     # Always set to zero\n"
  "\n"
  "uint16 aop_orb_max_err                 # Maximum acceptable (modeled) autonomous orbit\n"
  "                                       # error [m]\n"
  "                                       # valid range = 5..1000\n"
  "                                       # 0 = reset to firmware default\n"
  "\n"
  "uint8[7] reserved6                     # Always set to zero\n"
  "\n"
  "uint8 use_adr                          # Enable/disable ADR sensor fusion\n"
  "                                       # 1: enabled, 0: disabled\n"
  "                                       # Only supported on certain products";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgNAVX5__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgNAVX5__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3407, 3407},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgNAVX5__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgNAVX5__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgTMODE3.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_tmode3__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgTMODE3__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x93, 0x58, 0x92, 0x8a, 0x34, 0xa8, 0x20,
      0xa6, 0x6f, 0x01, 0x50, 0x7a, 0x0f, 0xaa, 0x39,
      0xd5, 0xd0, 0xe8, 0x36, 0x10, 0x3c, 0xfb, 0x2d,
      0x94, 0xc5, 0x85, 0xbf, 0x56, 0x25, 0x00, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgTMODE3__TYPE_NAME[] = "ublox_msgs/msg/CfgTMODE3";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_x_or_lat[] = "ecef_x_or_lat";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_y_or_lon[] = "ecef_y_or_lon";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_z_or_alt[] = "ecef_z_or_alt";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_x_or_lat_hp[] = "ecef_x_or_lat_hp";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_y_or_lon_hp[] = "ecef_y_or_lon_hp";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_z_or_alt_hp[] = "ecef_z_or_alt_hp";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__reserved2[] = "reserved2";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__fixed_pos_acc[] = "fixed_pos_acc";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__svin_min_dur[] = "svin_min_dur";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__svin_acc_limit[] = "svin_acc_limit";
static char ublox_msgs__msg__CfgTMODE3__FIELD_NAME__reserved3[] = "reserved3";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgTMODE3__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_x_or_lat, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_y_or_lon, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_z_or_alt, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_x_or_lat_hp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_y_or_lon_hp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__ecef_z_or_alt_hp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__fixed_pos_acc, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__svin_min_dur, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__svin_acc_limit, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgTMODE3__FIELD_NAME__reserved3, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgTMODE3__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgTMODE3__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__CfgTMODE3__FIELDS, 14, 14},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-TMODE3 (0x06, 0x71)\n"
  "# Time Mode Settings 3\n"
  "#\n"
  "# Configures the receiver to be in Time Mode. The position referred to in this\n"
  "# message is that of the Antenna Reference Point (ARP). See the Time Mode\n"
  "# Description for details.\n"
  "#\n"
  "# Supported on:\n"
  "#  - u-blox 8 / u-blox M8 with protocol version 20 (only with High Precision\n"
  "#    GNSS products)\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 113\n"
  "\n"
  "uint8 version                     # Message version (0x00 for this version)\n"
  "uint8 reserved1                   # Reserved\n"
  "\n"
  "uint16 flags\n"
  "uint16 FLAGS_MODE_MASK = 255      # Receiver Mode:\n"
  "uint16 FLAGS_MODE_DISABLED = 0      # Disabled\n"
  "uint16 FLAGS_MODE_SURVEY_IN = 1     # Survey In\n"
  "uint16 FLAGS_MODE_FIXED = 2         # Fixed Mode (true ARP position required)\n"
  "uint16 FLAGS_LLA = 256            # Position is given in LAT/LON/ALT\n"
  "                                  # (default is ECEF)\n"
  "\n"
  "int32 ecef_x_or_lat                  # WGS84 ECEF X coordinate (or latitude) of\n"
  "                                  # the ARP position, depending on flags above\n"
  "                                  # [cm] or [deg / 1e-7]\n"
  "int32 ecef_y_or_lon                  # WGS84 ECEF Y coordinate (or longitude) of\n"
  "                                  # the ARP position, depending on flags above\n"
  "                                  # [cm] or [deg / 1e-7]\n"
  "int32 ecef_z_or_alt                  # WGS84 ECEF Z coordinate (or altitude) of\n"
  "                                  # the ARP position, depending on flags above\n"
  "                                  # [cm]\n"
  "int8 ecef_x_or_lat_hp                 # High-precision WGS84 ECEF X coordinate (or\n"
  "                                  # latitude) of the ARP position, depending on\n"
  "                                  # flags above. Must be in the range -99..+99.\n"
  "                                  # The precise WGS84 ECEF X coordinate in units\n"
  "                                  # of cm, or the precise WGS84 ECEF latitude in\n"
  "                                  # units of 1e-7 degrees, is given by\n"
  "                                  # ecefXOrLat + (ecefXOrLatHP * 1e-2)\n"
  "                                  # [0.1 mm] or [deg * 1e-9]\n"
  "int8 ecef_y_or_lon_hp                 # High-precision WGS84 ECEF Y coordinate (or\n"
  "                                  # longitude) of the ARP position, depending on\n"
  "                                  # flags above. Must be in the range -99..+99.\n"
  "                                  # The precise WGS84 ECEF Y coordinate in units\n"
  "                                  # of cm, or the precise WGS84 ECEF longitude\n"
  "                                  # in units of 1e-7 degrees, is given by\n"
  "                                  # ecefYOrLon + (ecefYOrLonHP * 1e-2)\n"
  "                                  # [0.1 mm] or [deg * 1e-9]\n"
  "int8 ecef_z_or_alt_hp                 # High-precision WGS84 ECEF Z coordinate (or\n"
  "                                  # altitude) of the ARP position, depending on\n"
  "                                  # flags above. Must be in the range -99..+99.\n"
  "                                  # The precise WGS84 ECEF Z coordinate, or\n"
  "                                  # altitude coordinate, in units of cm is given\n"
  "                                  # by ecefZOrAlt + (ecefZOrAltHP * 1e-2)\n"
  "                                  # [0.1 mm]\n"
  "uint8 reserved2                   # Reserved\n"
  "\n"
  "uint32 fixed_pos_acc                # Fixed position 3D accuracy\n"
  "                                  # [0.1 mm]\n"
  "uint32 svin_min_dur                 # Survey-in minimum duration\n"
  "                                  # [s]\n"
  "uint32 svin_acc_limit               # Survey-in position accuracy limit\n"
  "                                  # [0.1 mm]\n"
  "\n"
  "uint8[8] reserved3                # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgTMODE3__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgTMODE3__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3669, 3669},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgTMODE3__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgTMODE3__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

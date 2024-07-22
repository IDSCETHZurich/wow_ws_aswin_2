// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSVIN.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_svin__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSVIN__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x08, 0xd6, 0x94, 0x35, 0x1e, 0xff, 0xb2,
      0xab, 0x2b, 0xc2, 0xd6, 0x31, 0x06, 0xe6, 0x65,
      0x01, 0x38, 0x70, 0x3f, 0x98, 0xde, 0x15, 0x71,
      0x8b, 0xf5, 0x86, 0x84, 0x0f, 0xac, 0xfe, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavSVIN__TYPE_NAME[] = "ublox_msgs/msg/NavSVIN";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__dur[] = "dur";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_x[] = "mean_x";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_y[] = "mean_y";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_z[] = "mean_z";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_xhp[] = "mean_xhp";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_yhp[] = "mean_yhp";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_zhp[] = "mean_zhp";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_acc[] = "mean_acc";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__obs[] = "obs";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__valid[] = "valid";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__active[] = "active";
static char ublox_msgs__msg__NavSVIN__FIELD_NAME__reserved3[] = "reserved3";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSVIN__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__dur, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_xhp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_yhp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_zhp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__mean_acc, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__obs, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSVIN__FIELD_NAME__reserved3, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavSVIN__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSVIN__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__NavSVIN__FIELDS, 16, 16},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-SVIN (0x01 0x3B)\n"
  "# Survey-in data\n"
  "#\n"
  "# This message contains information about survey-in parameters.\n"
  "# Supported on:\n"
  "#  - u-blox 8 / u-blox M8 with protocol version 20 (only with High Precision\n"
  "#    GNSS products)\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 59\n"
  "\n"
  "uint8 version           # Message version (0x00 for this version)\n"
  "uint8[3] reserved0      # Reserved\n"
  "\n"
  "uint32 i_tow             # GPS time of week of the navigation epoch [ms]\n"
  "\n"
  "uint32 dur              # Passed survey-in observation time [s]\n"
  "\n"
  "int32 mean_x             # Current survey-in mean position ECEF X coordinate [cm]\n"
  "int32 mean_y             # Current survey-in mean position ECEF Y coordinate [cm]\n"
  "int32 mean_z             # Current survey-in mean position ECEF Z coordinate [cm]\n"
  "\n"
  "int8 mean_xhp            # Current high-precision survey-in mean position\n"
  "                        # ECEF X coordinate. 0.1_mm\n"
  "                        # Must be in the range -99..+99.\n"
  "                        # The current survey-in mean position ECEF X\n"
  "                        # coordinate, in units of cm, is given by\n"
  "                        # meanX + (0.01 * meanXHP)\n"
  "int8 mean_yhp            # Current high-precision survey-in mean position\n"
  "                        # ECEF Y coordinate. [0.1 mm]\n"
  "                        # Must be in the range -99..+99.\n"
  "                        # The current survey-in mean position ECEF Y\n"
  "                        # coordinate, in units of cm, is given by\n"
  "                        # meanY + (0.01 * meanYHP)\n"
  "int8 mean_zhp            # Current high-precision survey-in mean position\n"
  "                        # ECEF Z coordinate. [0.1 mm]\n"
  "                        # Must be in the range -99..+99.\n"
  "                        # The current survey-in mean position ECEF Z\n"
  "                        # coordinate, in units of cm, is given by\n"
  "                        # meanZ + (0.01 * meanZHP)\n"
  "\n"
  "uint8 reserved1         # Reserved\n"
  "\n"
  "uint32 mean_acc          # Current survey-in mean position accuracy [0.1 mm]\n"
  "uint32 obs              # Number of position observations used during survey-in\n"
  "uint8 valid             # Survey-in position validity flag, 1 = valid\n"
  "                        # otherwise 0\n"
  "uint8 active            # Survey-in in progress flag, 1 = in-progress\n"
  "                        # otherwise 0\n"
  "\n"
  "uint8[2] reserved3      # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSVIN__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSVIN__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2307, 2307},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSVIN__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSVIN__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

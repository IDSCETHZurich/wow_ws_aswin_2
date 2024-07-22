// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavRELPOSNED.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_relposned__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavRELPOSNED__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x9e, 0x89, 0xed, 0x8d, 0x36, 0x69, 0x80,
      0x2d, 0xb8, 0x82, 0xf2, 0x11, 0xf3, 0x62, 0xa1,
      0xe8, 0x51, 0x96, 0xa5, 0xbf, 0x5f, 0xc7, 0x76,
      0x7f, 0x44, 0x02, 0x44, 0x97, 0x61, 0xed, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavRELPOSNED__TYPE_NAME[] = "ublox_msgs/msg/NavRELPOSNED";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__ref_station_id[] = "ref_station_id";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_n[] = "rel_pos_n";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_e[] = "rel_pos_e";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_d[] = "rel_pos_d";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_hpn[] = "rel_pos_hpn";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_hpe[] = "rel_pos_hpe";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_hpd[] = "rel_pos_hpd";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__acc_n[] = "acc_n";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__acc_e[] = "acc_e";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__acc_d[] = "acc_d";
static char ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavRELPOSNED__FIELDS[] = {
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__ref_station_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_n, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_e, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_d, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_hpn, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_hpe, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__rel_pos_hpd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__acc_n, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__acc_e, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__acc_d, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavRELPOSNED__FIELD_NAME__flags, 5, 5},
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
ublox_msgs__msg__NavRELPOSNED__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavRELPOSNED__TYPE_NAME, 27, 27},
      {ublox_msgs__msg__NavRELPOSNED__FIELDS, 15, 15},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-RELPOSNED (0x01 0x3C)\n"
  "# Relative Positioning Information in NED frame\n"
  "#\n"
  "# The NED frame is defined as the local topological system at the reference\n"
  "# station. The relative position vector components in this message, along with\n"
  "# their associated accuracies, are given in that local topological system\n"
  "# This message contains the relative position vector from the Reference Station\n"
  "# to the Rover, including accuracy figures, in the local topological system\n"
  "# defined at the reference station\n"
  "#\n"
  "# Supported on:\n"
  "#  - u-blox 8 / u-blox M8 from protocol version 20 up to version 23.01 (only\n"
  "#    with High Precision GNSS products)\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 60\n"
  "\n"
  "uint8 version                     # Message version (0x00 for this version)\n"
  "uint8 reserved0                   # Reserved\n"
  "uint16 ref_station_id             # Reference Station ID. Must be in the range\n"
  "                                  # 0..4095\n"
  "uint32 i_tow                      # GPS time of week of the navigation epoch\n"
  "                                  # [ms]\n"
  "\n"
  "int32 rel_pos_n                   # North component of relative position vector\n"
  "                                  # [cm]\n"
  "int32 rel_pos_e                   # East component of relative position vector\n"
  "                                  # [cm]\n"
  "int32 rel_pos_d                   # Down component of relative position vector\n"
  "                                  # [cm]\n"
  "\n"
  "int8 rel_pos_hpn                  # High-precision North component of relative\n"
  "                                  # position vector. [0.1 mm]\n"
  "                                  # Must be in the range -99 to +99.\n"
  "                                  # The full North component of the relative\n"
  "                                  # position vector, in units of cm, is given by\n"
  "                                  # relPosN + (relPosHPN * 1e-2)\n"
  "int8 rel_pos_hpe                  # High-precision East component of relative\n"
  "                                  # position vector. [0.1 mm]\n"
  "                                  # Must be in the range -99 to +99.\n"
  "                                  # The full East component of the relative\n"
  "                                  # position vector, in units of cm, is given by\n"
  "                                  # relPosE + (relPosHPE * 1e-2)\n"
  "int8 rel_pos_hpd                  # High-precision Down component of relative\n"
  "                                  # position vector. [0.1 mm]\n"
  "                                  # Must be in the range -99 to +99.\n"
  "                                  # The full Down component of the relative\n"
  "                                  # position vector, in units of cm, is given by\n"
  "                                  # relPosD + (relPosHPD * 1e-2)\n"
  "\n"
  "uint8 reserved1                   # Reserved\n"
  "\n"
  "uint32 acc_n                      # Accuracy of relative position North\n"
  "                                  # component [0.1 mm]\n"
  "uint32 acc_e                      # Accuracy of relative position East component\n"
  "                                  # [0.1 mm]\n"
  "uint32 acc_d                      # Accuracy of relative position Down component\n"
  "                                  # [0.1 mm]\n"
  "\n"
  "uint32 flags\n"
  "uint32 FLAGS_GNSS_FIX_OK = 1      # A valid fix (i.e within DOP & accuracy\n"
  "                                  # masks)\n"
  "uint32 FLAGS_DIFF_SOLN = 2        # Set if differential corrections were applied\n"
  "uint32 FLAGS_REL_POS_VALID = 4    # Set if relative position components and\n"
  "                                  # accuracies are valid\n"
  "uint32 FLAGS_CARR_SOLN_MASK = 24  # Carrier phase range solution status:\n"
  "uint32 FLAGS_CARR_SOLN_NONE = 0     # No carrier phase range solution\n"
  "uint32 FLAGS_CARR_SOLN_FLOAT = 8    # Float solution. No fixed integer carrier\n"
  "                                    # phase measurements have been used to\n"
  "                                    # calculate the solution\n"
  "uint32 FLAGS_CARR_SOLN_FIXED = 16   # Fixed solution. One or more fixed\n"
  "                                    # integer carrier phase range measurements\n"
  "                                    # have been used to calculate the solution\n"
  "uint32 FLAGS_IS_MOVING = 32       # if the receiver is operating in moving\n"
  "                                  # baseline mode (not supported in protocol\n"
  "                                  # versions less than 20.3)\n"
  "uint32 FLAGS_REF_POS_MISS = 64    # Set if extrapolated reference position was\n"
  "                                  # used to compute moving baseline solution\n"
  "                                  # this epoch (not supported in protocol\n"
  "                                  # versions less than 20.3)\n"
  "uint32 FLAGS_REF_OBS_MISS = 128   # Set if extrapolated reference observations\n"
  "                                  # were used to compute moving baseline\n"
  "                                  # solution this epoch (not supported in\n"
  "                                  # protocol versions less than 20.3)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavRELPOSNED__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavRELPOSNED__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 4858, 4858},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavRELPOSNED__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavRELPOSNED__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

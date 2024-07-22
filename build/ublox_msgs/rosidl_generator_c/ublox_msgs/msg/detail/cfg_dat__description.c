// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgDAT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_dat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgDAT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x42, 0xc6, 0xf7, 0x4a, 0x96, 0x5f, 0x2c,
      0xe0, 0x26, 0x29, 0xcd, 0x83, 0x86, 0xeb, 0x18,
      0xe2, 0x7c, 0xc1, 0x07, 0x3f, 0x19, 0xf7, 0xe9,
      0x27, 0xc8, 0x85, 0xb9, 0x3c, 0x17, 0x9a, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgDAT__TYPE_NAME[] = "ublox_msgs/msg/CfgDAT";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__datum_num[] = "datum_num";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__datum_name[] = "datum_name";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__maj_a[] = "maj_a";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__flat[] = "flat";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__d_x[] = "d_x";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__d_y[] = "d_y";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__d_z[] = "d_z";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__rot_x[] = "rot_x";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__rot_y[] = "rot_y";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__rot_z[] = "rot_z";
static char ublox_msgs__msg__CfgDAT__FIELD_NAME__scale[] = "scale";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgDAT__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__datum_num, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__datum_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__maj_a, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__flat, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__d_x, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__d_y, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__d_z, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__rot_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__rot_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__rot_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgDAT__FIELD_NAME__scale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgDAT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgDAT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgDAT__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-DAT (0x06 0x06)\n"
  "# Set User-defined Datum\n"
  "#\n"
  "# For more information see the description of Geodetic Systems and Frames.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 6\n"
  "\n"
  "# Only for GET, these values are not used for write\n"
  "uint16 datum_num       # Datum Number: 0 = WGS84, 0xFFFF = user-defined\n"
  "uint16 DATUM_NUM_WGS84 = 0\n"
  "uint16 DATUM_NUM_USER = 65535\n"
  "\n"
  "uint8[6] datum_name    # ASCII String: WGS84 or USER\n"
  "\n"
  "float64 maj_a          # Semi-major Axis [m]\n"
  "                       # accepted range = 6,300,000.0 to 6,500,000.0 meters\n"
  "float64 flat           # 1.0 / Flattening\n"
  "                       # accepted range is 0.0 to 500.0\n"
  "\n"
  "float32 d_x            # X Axis shift at the origin [m]\n"
  "                       # accepted range is +/- 5000.0 meters\n"
  "float32 d_y            # Y Axis shift at the origin [m]\n"
  "                       # accepted range is +/- 5000.0 meters\n"
  "float32 d_z            # Z Axis shift at the origin [m]\n"
  "                       # accepted range is +/- 5000.0 meters\n"
  "\n"
  "float32 rot_x          # Rotation about the X Axis [s]\n"
  "                       # accepted range is +/- 20.0 milli-arc seconds\n"
  "float32 rot_y          # Rotation about the Y Axis [s]\n"
  "                       # accepted range is +/- 20.0 milli-arc seconds\n"
  "float32 rot_z          # Rotation about the Z Axis [s]\n"
  "                       # accepted range is +/- 20.0 milli-arc seconds\n"
  "\n"
  "float32 scale          # Scale change [ppm]\n"
  "                       # accepted range is 0.0 to 50.0 parts per million";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgDAT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgDAT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1469, 1469},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgDAT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgDAT__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

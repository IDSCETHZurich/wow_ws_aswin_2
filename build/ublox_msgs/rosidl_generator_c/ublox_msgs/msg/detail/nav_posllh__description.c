// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavPOSLLH.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_posllh__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavPOSLLH__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0x23, 0x97, 0x3b, 0x20, 0x58, 0xa2, 0x36,
      0xfb, 0xf3, 0x10, 0xc0, 0x53, 0x68, 0x23, 0xeb,
      0xfb, 0xff, 0x7c, 0x97, 0x06, 0xf0, 0xfe, 0x18,
      0x68, 0xaf, 0xf6, 0xbd, 0x10, 0x49, 0x15, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavPOSLLH__TYPE_NAME[] = "ublox_msgs/msg/NavPOSLLH";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__lon[] = "lon";
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__lat[] = "lat";
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__height[] = "height";
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__h_msl[] = "h_msl";
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__h_acc[] = "h_acc";
static char ublox_msgs__msg__NavPOSLLH__FIELD_NAME__v_acc[] = "v_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavPOSLLH__FIELDS[] = {
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__h_msl, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__h_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSLLH__FIELD_NAME__v_acc, 5, 5},
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
ublox_msgs__msg__NavPOSLLH__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavPOSLLH__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__NavPOSLLH__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-POSLLH (0x01 0x02)\n"
  "# Geodetic Position Solution\n"
  "#\n"
  "# See important comments concerning validity of position given in section\n"
  "# Navigation Output Filters.\n"
  "# This message outputs the Geodetic position in the currently selected\n"
  "# Ellipsoid. The default is the WGS84 Ellipsoid, but can be changed with the\n"
  "# message CFG-DAT.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 2\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond Time of Week [ms]\n"
  "\n"
  "int32 lon               # Longitude [deg / 1e-7]\n"
  "int32 lat               # Latitude [deg / 1e-7]\n"
  "int32 height            # Height above Ellipsoid [mm]\n"
  "int32 h_msl              # Height above mean sea level [mm]\n"
  "uint32 h_acc             # Horizontal Accuracy Estimate [mm]\n"
  "uint32 v_acc             # Vertical Accuracy Estimate [mm]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavPOSLLH__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavPOSLLH__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 763, 763},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavPOSLLH__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavPOSLLH__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

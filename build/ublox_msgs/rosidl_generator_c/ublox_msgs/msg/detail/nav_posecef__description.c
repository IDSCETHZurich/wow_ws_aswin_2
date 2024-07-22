// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavPOSECEF.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_posecef__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavPOSECEF__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xb9, 0xb9, 0x7c, 0xa4, 0xd8, 0xef, 0x34,
      0x92, 0xa4, 0xdd, 0x0e, 0x97, 0x85, 0x9f, 0x27,
      0xf1, 0xef, 0xba, 0x74, 0xb7, 0xd1, 0x68, 0x09,
      0x4e, 0xa8, 0x13, 0xd2, 0x60, 0xc3, 0x0e, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavPOSECEF__TYPE_NAME[] = "ublox_msgs/msg/NavPOSECEF";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavPOSECEF__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavPOSECEF__FIELD_NAME__ecef_x[] = "ecef_x";
static char ublox_msgs__msg__NavPOSECEF__FIELD_NAME__ecef_y[] = "ecef_y";
static char ublox_msgs__msg__NavPOSECEF__FIELD_NAME__ecef_z[] = "ecef_z";
static char ublox_msgs__msg__NavPOSECEF__FIELD_NAME__p_acc[] = "p_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavPOSECEF__FIELDS[] = {
  {
    {ublox_msgs__msg__NavPOSECEF__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSECEF__FIELD_NAME__ecef_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSECEF__FIELD_NAME__ecef_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSECEF__FIELD_NAME__ecef_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavPOSECEF__FIELD_NAME__p_acc, 5, 5},
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
ublox_msgs__msg__NavPOSECEF__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavPOSECEF__TYPE_NAME, 25, 25},
      {ublox_msgs__msg__NavPOSECEF__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-POSECEF (0x01 0x01)\n"
  "# Position Solution in ECEF\n"
  "#\n"
  "# See important comments concerning validity of position given in section\n"
  "# Navigation Output Filters.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 1\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond Time of Week [ms]\n"
  "\n"
  "int32 ecef_x             # ECEF X coordinate [cm]\n"
  "int32 ecef_y             # ECEF Y coordinate [cm]\n"
  "int32 ecef_z             # ECEF Z coordinate [cm]\n"
  "uint32 p_acc             # Position Accuracy Estimate [cm]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavPOSECEF__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavPOSECEF__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 474, 474},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavPOSECEF__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavPOSECEF__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

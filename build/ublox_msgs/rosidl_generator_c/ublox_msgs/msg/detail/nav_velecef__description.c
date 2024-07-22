// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavVELECEF.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_velecef__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavVELECEF__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0xfd, 0x04, 0x4a, 0x6c, 0x5b, 0x58, 0x66,
      0xf0, 0x7a, 0x51, 0x26, 0x1c, 0xbc, 0xa0, 0x3d,
      0x99, 0xdf, 0x93, 0xa3, 0xcd, 0x28, 0xdd, 0x93,
      0x10, 0xa8, 0x78, 0xa5, 0x98, 0xf0, 0x67, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavVELECEF__TYPE_NAME[] = "ublox_msgs/msg/NavVELECEF";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavVELECEF__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavVELECEF__FIELD_NAME__ecef_vx[] = "ecef_vx";
static char ublox_msgs__msg__NavVELECEF__FIELD_NAME__ecef_vy[] = "ecef_vy";
static char ublox_msgs__msg__NavVELECEF__FIELD_NAME__ecef_vz[] = "ecef_vz";
static char ublox_msgs__msg__NavVELECEF__FIELD_NAME__s_acc[] = "s_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavVELECEF__FIELDS[] = {
  {
    {ublox_msgs__msg__NavVELECEF__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELECEF__FIELD_NAME__ecef_vx, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELECEF__FIELD_NAME__ecef_vy, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELECEF__FIELD_NAME__ecef_vz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELECEF__FIELD_NAME__s_acc, 5, 5},
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
ublox_msgs__msg__NavVELECEF__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavVELECEF__TYPE_NAME, 25, 25},
      {ublox_msgs__msg__NavVELECEF__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-VELECEF (0x01 0x11)\n"
  "# Velocity Solution in ECEF\n"
  "#\n"
  "# See important comments concerning validity of velocity given in section\n"
  "# Navigation Output Filters.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 17\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "int32 ecef_vx            # ECEF X velocity [cm/s]\n"
  "int32 ecef_vy            # ECEF Y velocity [cm/s]\n"
  "int32 ecef_vz            # ECEF Z velocity [cm/s]\n"
  "uint32 s_acc             # Speed Accuracy Estimate [cm/s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavVELECEF__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavVELECEF__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 474, 474},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavVELECEF__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavVELECEF__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

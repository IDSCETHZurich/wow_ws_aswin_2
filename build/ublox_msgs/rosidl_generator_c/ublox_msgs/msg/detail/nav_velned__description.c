// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavVELNED.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_velned__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavVELNED__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0xef, 0x85, 0x18, 0x2a, 0x3a, 0xa3, 0xe2,
      0xd8, 0xce, 0xfb, 0x72, 0x67, 0x14, 0x8a, 0x37,
      0x1a, 0x06, 0x91, 0xac, 0x7f, 0xb4, 0xd1, 0x40,
      0x0d, 0x7b, 0x34, 0x9e, 0xd8, 0x86, 0xcb, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavVELNED__TYPE_NAME[] = "ublox_msgs/msg/NavVELNED";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__vel_n[] = "vel_n";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__vel_e[] = "vel_e";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__vel_d[] = "vel_d";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__speed[] = "speed";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__g_speed[] = "g_speed";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__heading[] = "heading";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__s_acc[] = "s_acc";
static char ublox_msgs__msg__NavVELNED__FIELD_NAME__c_acc[] = "c_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavVELNED__FIELDS[] = {
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__vel_n, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__vel_e, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__vel_d, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__g_speed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__s_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavVELNED__FIELD_NAME__c_acc, 5, 5},
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
ublox_msgs__msg__NavVELNED__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavVELNED__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__NavVELNED__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-VELNED (0x01 0x12)\n"
  "# Velocity Solution in NED\n"
  "#\n"
  "# See important comments concerning validity of velocity given in section\n"
  "# Navigation Output Filters.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 18\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "int32 vel_n              # NED north velocity [cm/s]\n"
  "int32 vel_e              # NED east velocity [cm/s]\n"
  "int32 vel_d              # NED down velocity [cm/s]\n"
  "uint32 speed            # Speed (3-D) [cm/s]\n"
  "uint32 g_speed           # Ground Speed (2-D) [cm/s]\n"
  "int32 heading           # Heading of motion 2-D [deg / 1e-5]\n"
  "uint32 s_acc             # Speed Accuracy Estimate [cm/s]\n"
  "uint32 c_acc             # Course / Heading Accuracy Estimate [deg / 1e-5]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavVELNED__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavVELNED__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 713, 713},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavVELNED__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavVELNED__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

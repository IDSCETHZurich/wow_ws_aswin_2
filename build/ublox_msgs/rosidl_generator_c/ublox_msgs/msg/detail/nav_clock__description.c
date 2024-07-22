// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavCLOCK.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_clock__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavCLOCK__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0xbf, 0xd4, 0xdb, 0xbc, 0xf1, 0x25, 0x2c,
      0x4a, 0x1a, 0x23, 0x35, 0xf8, 0x2d, 0x09, 0x24,
      0xfe, 0x3d, 0x91, 0xf9, 0x22, 0xc7, 0xa6, 0x88,
      0xac, 0xbf, 0xbe, 0xcc, 0x8d, 0xc5, 0xa3, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavCLOCK__TYPE_NAME[] = "ublox_msgs/msg/NavCLOCK";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavCLOCK__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavCLOCK__FIELD_NAME__clk_b[] = "clk_b";
static char ublox_msgs__msg__NavCLOCK__FIELD_NAME__clk_d[] = "clk_d";
static char ublox_msgs__msg__NavCLOCK__FIELD_NAME__t_acc[] = "t_acc";
static char ublox_msgs__msg__NavCLOCK__FIELD_NAME__f_acc[] = "f_acc";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavCLOCK__FIELDS[] = {
  {
    {ublox_msgs__msg__NavCLOCK__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCLOCK__FIELD_NAME__clk_b, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCLOCK__FIELD_NAME__clk_d, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCLOCK__FIELD_NAME__t_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCLOCK__FIELD_NAME__f_acc, 5, 5},
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
ublox_msgs__msg__NavCLOCK__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavCLOCK__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__NavCLOCK__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-CLOCK (0x01 0x22)\n"
  "# Clock Solution\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 34\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond Time of week [ms]\n"
  "\n"
  "int32 clk_b              # Clock bias in nanoseconds [ns]\n"
  "int32 clk_d              # Clock drift in nanoseconds per second [ns/s]\n"
  "uint32 t_acc             # Time Accuracy Estimate [ns]\n"
  "uint32 f_acc             # Frequency Accuracy Estimate [ps/s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavCLOCK__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavCLOCK__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 395, 395},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavCLOCK__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavCLOCK__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

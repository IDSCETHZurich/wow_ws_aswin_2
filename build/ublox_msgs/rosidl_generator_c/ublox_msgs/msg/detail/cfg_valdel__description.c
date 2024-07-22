// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgVALDEL.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_valdel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgVALDEL__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0x54, 0x29, 0x6c, 0xfe, 0x67, 0x27, 0x6f,
      0x11, 0xaf, 0x2d, 0x0d, 0x75, 0xb0, 0xae, 0x0c,
      0x74, 0xaa, 0x32, 0x55, 0xec, 0x69, 0x94, 0x2d,
      0x49, 0x96, 0x66, 0xb3, 0xd9, 0x2f, 0x6c, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgVALDEL__TYPE_NAME[] = "ublox_msgs/msg/CfgVALDEL";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgVALDEL__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__CfgVALDEL__FIELD_NAME__layers[] = "layers";
static char ublox_msgs__msg__CfgVALDEL__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__CfgVALDEL__FIELD_NAME__keys[] = "keys";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgVALDEL__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgVALDEL__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALDEL__FIELD_NAME__layers, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALDEL__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALDEL__FIELD_NAME__keys, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgVALDEL__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgVALDEL__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__CfgVALDEL__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-VALDEL (0x06 0x8c)\n"
  "# Delete configuration item values\n"
  "#\n"
  "# This message is used to delete saved configurations to effectively revert the items values to\n"
  "# defaults. Maximum of 64 Key IDs.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 140\n"
  "\n"
  "uint8 version               # Message Version (0x00 for this version)\n"
  "\n"
  "uint8 layers                # Bit mask: the layers where the configuration should be applied\n"
  "uint8 LAYER_BBR = 1         # BBR layer\n"
  "uint8 LAYER_FLASH = 2       # Flash Layer\n"
  "\n"
  "uint8[2] reserved0\n"
  "\n"
  "# Start of repeated block\n"
  "uint32[] keys               # Configuration key IDs of configuration items to be retrieved\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgVALDEL__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgVALDEL__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 647, 647},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgVALDEL__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgVALDEL__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

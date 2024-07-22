// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgVALGET.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_valget__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgVALGET__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xa1, 0x90, 0xdb, 0x2d, 0x42, 0x6b, 0x61,
      0x5c, 0x13, 0xd3, 0x8c, 0x4c, 0x2b, 0xc3, 0x49,
      0x25, 0xef, 0xfd, 0x79, 0xb7, 0x3f, 0xaa, 0x59,
      0xa3, 0x0f, 0xdb, 0xc3, 0xba, 0x58, 0xfc, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgVALGET__TYPE_NAME[] = "ublox_msgs/msg/CfgVALGET";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgVALGET__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__CfgVALGET__FIELD_NAME__layers[] = "layers";
static char ublox_msgs__msg__CfgVALGET__FIELD_NAME__position[] = "position";
static char ublox_msgs__msg__CfgVALGET__FIELD_NAME__keys[] = "keys";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgVALGET__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgVALGET__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALGET__FIELD_NAME__layers, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALGET__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALGET__FIELD_NAME__keys, 4, 4},
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
ublox_msgs__msg__CfgVALGET__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgVALGET__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__CfgVALGET__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-VALGET (0x06 0x8b)\n"
  "# Get configuration items\n"
  "#\n"
  "# This message is used to get configuration values by providing a list of configuration key IDs,\n"
  "# which identify the configuration items to retrieve. Maximum of 64 Key IDs.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 139\n"
  "\n"
  "uint8 version               # Message Version (0x00 for this version)\n"
  "\n"
  "uint8 layers                # The layer which the configuration items should be retrieved\n"
  "uint8 LAYER_RAM = 0         # RAM layer\n"
  "uint8 LAYER_BBR = 1         # BBR layer\n"
  "uint8 LAYER_FLASH = 2       # Flash Layer\n"
  "uint8 LAYER_DEFAULT = 7     # Default Layer\n"
  "\n"
  "uint16 position             # Skip this many key values before constructing output message\n"
  "\n"
  "# Start of repeated block\n"
  "uint32[] keys               # Configuration key IDs of configuration items to be retrieved\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgVALGET__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgVALGET__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 834, 834},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgVALGET__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgVALGET__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgVALSET.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_valset__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgVALSET__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xf5, 0x3d, 0x94, 0xc5, 0x84, 0x54, 0x61,
      0x56, 0x16, 0x94, 0xb3, 0x02, 0xa8, 0xe8, 0x1d,
      0x00, 0xa3, 0x72, 0x60, 0xec, 0x48, 0x7a, 0x5d,
      0x98, 0xf6, 0x02, 0x7c, 0xe8, 0x66, 0x31, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/cfg_valset_cfgdata__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__CfgVALSETCfgdata__EXPECTED_HASH = {1, {
    0xee, 0xf9, 0x72, 0xbc, 0xf7, 0xe5, 0xd2, 0xe2,
    0x7c, 0x82, 0xeb, 0x3c, 0x1a, 0x8e, 0x78, 0x8c,
    0x9b, 0xd1, 0x0e, 0x1c, 0xd2, 0xb2, 0x42, 0x5c,
    0xc7, 0x4d, 0x63, 0x99, 0x5b, 0x1a, 0xb9, 0x86,
  }};
#endif

static char ublox_msgs__msg__CfgVALSET__TYPE_NAME[] = "ublox_msgs/msg/CfgVALSET";
static char ublox_msgs__msg__CfgVALSETCfgdata__TYPE_NAME[] = "ublox_msgs/msg/CfgVALSETCfgdata";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgVALSET__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__CfgVALSET__FIELD_NAME__layers[] = "layers";
static char ublox_msgs__msg__CfgVALSET__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__CfgVALSET__FIELD_NAME__cfgdata[] = "cfgdata";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgVALSET__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgVALSET__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALSET__FIELD_NAME__layers, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALSET__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALSET__FIELD_NAME__cfgdata, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__CfgVALSETCfgdata__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__CfgVALSET__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__CfgVALSETCfgdata__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgVALSET__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgVALSET__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__CfgVALSET__FIELDS, 4, 4},
    },
    {ublox_msgs__msg__CfgVALSET__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__CfgVALSETCfgdata__EXPECTED_HASH, ublox_msgs__msg__CfgVALSETCfgdata__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__CfgVALSETCfgdata__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-VALSET (0x06 0x8a)\n"
  "# Set configuration item values\n"
  "#\n"
  "# This message is used to set a configuration by providing configuration data ( a list of\n"
  "# key and value pairs), which identify the configuration items to change, and their new values.\n"
  "# Maximum of 64 Key IDs.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 138\n"
  "\n"
  "uint8 version               # Message Version (0x00 for this version)\n"
  "\n"
  "uint8 layers                # Bit mask: the layers where the configuration should be applied\n"
  "uint8 LAYER_RAM = 1         # RAM layer\n"
  "uint8 LAYER_BBR = 2         # BBR layer\n"
  "uint8 LAYER_FLASH = 4       # Flash Layer\n"
  "\n"
  "uint8[2] reserved0\n"
  "\n"
  "# Start of repeated block\n"
  "CfgVALSETCfgdata[] cfgdata    # Configuration data (key and value pairs)\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgVALSET__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgVALSET__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 746, 746},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgVALSET__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgVALSET__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__CfgVALSETCfgdata__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgINF.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_inf__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgINF__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa2, 0x20, 0x51, 0x92, 0x68, 0xe3, 0x88, 0x4c,
      0x99, 0xea, 0x9b, 0x0c, 0xaf, 0x32, 0x96, 0xbf,
      0xe1, 0xa7, 0x6a, 0x03, 0x93, 0x3f, 0xce, 0x02,
      0x1e, 0x2c, 0xc0, 0xe3, 0xba, 0xe7, 0xcc, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/cfg_inf_block__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__CfgINFBlock__EXPECTED_HASH = {1, {
    0x9a, 0x1c, 0x4f, 0xb1, 0x1a, 0xba, 0x48, 0x30,
    0x12, 0x71, 0xa0, 0x6f, 0x70, 0x6e, 0x2f, 0x62,
    0xc0, 0x2f, 0x54, 0x4e, 0x28, 0x92, 0x4f, 0xbc,
    0xf3, 0xd5, 0x91, 0x37, 0x6b, 0x6f, 0x7f, 0x1f,
  }};
#endif

static char ublox_msgs__msg__CfgINF__TYPE_NAME[] = "ublox_msgs/msg/CfgINF";
static char ublox_msgs__msg__CfgINFBlock__TYPE_NAME[] = "ublox_msgs/msg/CfgINFBlock";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgINF__FIELD_NAME__blocks[] = "blocks";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgINF__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgINF__FIELD_NAME__blocks, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__CfgINFBlock__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__CfgINF__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__CfgINFBlock__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgINF__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgINF__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgINF__FIELDS, 1, 1},
    },
    {ublox_msgs__msg__CfgINF__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__CfgINFBlock__EXPECTED_HASH, ublox_msgs__msg__CfgINFBlock__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__CfgINFBlock__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-INF  (0x06 0x02)\n"
  "# Information message configuration\n"
  "#\n"
  "# The value of infMsgMask[x] below are that each bit represents one of the INF\n"
  "# class messages (Bit 0 for ERROR, Bit 1 for WARNING and so on.). For a complete\n"
  "# list, see the Message Class INF. Several configurations can be concatenated to\n"
  "# one input message.\n"
  "# In this case the payload length can be a multiple of the normal length. Output\n"
  "# messages from the module contain only one configuration unit. Note that I/O\n"
  "# Ports 1 and 2 correspond to serial ports 1 and 2. I/O port 0 is DDC. I/O port\n"
  "# 3 is USB. I/O port 4 is SPI. I/O port 5 is reserved for future use\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 2\n"
  "\n"
  "# start of repeated block\n"
  "CfgINFBlock[] blocks\n"
  "# end of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgINF__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgINF__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 746, 746},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgINF__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgINF__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__CfgINFBlock__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

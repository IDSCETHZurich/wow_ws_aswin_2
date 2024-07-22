// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgGNSS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_gnss__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgGNSS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x6a, 0x13, 0xc6, 0x8f, 0x0c, 0x84, 0xd3,
      0x8b, 0xa5, 0xf1, 0x75, 0xac, 0xb4, 0x33, 0x38,
      0x3d, 0x0d, 0xc0, 0xe0, 0xb0, 0xc0, 0x87, 0x88,
      0x7f, 0x7c, 0xa0, 0xbe, 0x23, 0xa6, 0x9a, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/cfg_gnss_block__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__CfgGNSSBlock__EXPECTED_HASH = {1, {
    0x7d, 0x9d, 0xed, 0x5c, 0x28, 0xc5, 0xda, 0xed,
    0x1c, 0xcb, 0x97, 0xda, 0xce, 0x2c, 0xe5, 0x1b,
    0x38, 0x2e, 0x00, 0x6e, 0x9b, 0x24, 0x54, 0xc7,
    0x79, 0xdb, 0x2d, 0x16, 0x4e, 0x0c, 0xfc, 0xd9,
  }};
#endif

static char ublox_msgs__msg__CfgGNSS__TYPE_NAME[] = "ublox_msgs/msg/CfgGNSS";
static char ublox_msgs__msg__CfgGNSSBlock__TYPE_NAME[] = "ublox_msgs/msg/CfgGNSSBlock";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgGNSS__FIELD_NAME__msg_ver[] = "msg_ver";
static char ublox_msgs__msg__CfgGNSS__FIELD_NAME__num_trk_ch_hw[] = "num_trk_ch_hw";
static char ublox_msgs__msg__CfgGNSS__FIELD_NAME__num_trk_ch_use[] = "num_trk_ch_use";
static char ublox_msgs__msg__CfgGNSS__FIELD_NAME__num_config_blocks[] = "num_config_blocks";
static char ublox_msgs__msg__CfgGNSS__FIELD_NAME__blocks[] = "blocks";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgGNSS__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgGNSS__FIELD_NAME__msg_ver, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSS__FIELD_NAME__num_trk_ch_hw, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSS__FIELD_NAME__num_trk_ch_use, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSS__FIELD_NAME__num_config_blocks, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSS__FIELD_NAME__blocks, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__CfgGNSSBlock__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__CfgGNSS__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__CfgGNSSBlock__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgGNSS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgGNSS__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__CfgGNSS__FIELDS, 5, 5},
    },
    {ublox_msgs__msg__CfgGNSS__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__CfgGNSSBlock__EXPECTED_HASH, ublox_msgs__msg__CfgGNSSBlock__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__CfgGNSSBlock__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-GNSS (0x06 0x3E)\n"
  "# GNSS Configuration\n"
  "#\n"
  "# Gets or sets the GNSS system channel sharing configuration.\n"
  "# If the receiver is sent a valid new configuration, it will respond with a\n"
  "# UBX-ACK-ACK message and immediately change to the new configuration. Otherwise\n"
  "# the receiver will reject the request, by issuing a UBX-ACK-NAK and continuing\n"
  "# operation with the previous configuration.\n"
  "# Configuration requirements:\n"
  "#  - It is necessary for at least one major GNSS to be enabled, after applying\n"
  "#    the new configuration to the current one.\n"
  "#  - It is also required that at least 4 tracking channels are available to each\n"
  "#    enabled major GNSS, i.e. maxTrkCh must have a minimum value of 4 for each\n"
  "#    enabled major GNSS.\n"
  "#  - The number of tracking channels in use must not exceed the number of\n"
  "#    tracking channels available in hardware, and the sum of all reserved\n"
  "#    tracking channels needs to be less than or equal to the number of tracking\n"
  "#    channels in use.\n"
  "# Notes:\n"
  "#  - To avoid cross-correlation issues, it is recommended that GPS and QZSS are\n"
  "#    always both enabled or both disabled.\n"
  "#  - Polling this message returns the configuration of all supported GNSS,\n"
  "#    whether enabled or not; it may also include GNSS unsupported by the\n"
  "#    particular product, but in such cases the enable flag will always be unset.\n"
  "#  - See section GNSS Configuration for a discussion of the use of this message\n"
  "#    and section Satellite Numbering for a description of the GNSS IDs available\n"
  "#  - Configuration specific to the GNSS system can be done via other messages\n"
  "#    (e.g. UBX-CFG-SBAS).\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 62\n"
  "\n"
  "uint8 msg_ver              # Message version (= 0 for this version)\n"
  "uint8 num_trk_ch_hw        # Number of tracking channels in hardware (read only)\n"
  "uint8 num_trk_ch_use       # (Read only in protocol versions greater than 23)\n"
  "                           # Number of tracking channels to use (<= numTrkChHw)\n"
  "                           # If 0xFF, then number of tracking channels to use will\n"
  "                           # be set to numTrkChHw\n"
  "uint8 num_config_blocks    # Number of configuration blocks following\n"
  "\n"
  "# Start of repeated block (numConfigBlocks times)\n"
  "CfgGNSSBlock[] blocks\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgGNSS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgGNSS__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2259, 2259},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgGNSS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgGNSS__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__CfgGNSSBlock__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

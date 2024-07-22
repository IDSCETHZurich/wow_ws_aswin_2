// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgSBAS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_sbas__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgSBAS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0x4b, 0xe8, 0xad, 0x31, 0x3f, 0xfe, 0xe0,
      0x4c, 0xd4, 0xc4, 0x5b, 0x1a, 0x7f, 0x34, 0x8b,
      0xc0, 0x4a, 0x10, 0x14, 0x29, 0xc3, 0xce, 0x31,
      0xb2, 0xa1, 0x99, 0x62, 0xcb, 0xcd, 0xe4, 0x7a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgSBAS__TYPE_NAME[] = "ublox_msgs/msg/CfgSBAS";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgSBAS__FIELD_NAME__mode[] = "mode";
static char ublox_msgs__msg__CfgSBAS__FIELD_NAME__usage[] = "usage";
static char ublox_msgs__msg__CfgSBAS__FIELD_NAME__max_sbas[] = "max_sbas";
static char ublox_msgs__msg__CfgSBAS__FIELD_NAME__scanmode2[] = "scanmode2";
static char ublox_msgs__msg__CfgSBAS__FIELD_NAME__scanmode1[] = "scanmode1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgSBAS__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgSBAS__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgSBAS__FIELD_NAME__usage, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgSBAS__FIELD_NAME__max_sbas, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgSBAS__FIELD_NAME__scanmode2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgSBAS__FIELD_NAME__scanmode1, 9, 9},
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
ublox_msgs__msg__CfgSBAS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgSBAS__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__CfgSBAS__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-SBAS (0x06 0x16)\n"
  "# SBAS Configuration\n"
  "#\n"
  "# This message configures the SBAS receiver subsystem (i.e. WAAS, EGNOS, MSAS).\n"
  "# See the SBAS Configuration Settings Description for a detailed description of\n"
  "# how these settings affect receiver operation\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 22\n"
  "\n"
  "uint8 mode              # SBAS Mode\n"
  "uint8 MODE_ENABLED = 1    # SBAS Enabled (1) / Disabled (0)\n"
  "                          #  This field is deprecated; use UBX-CFG-GNSS to\n"
  "                          # enable/disable SBAS operation\n"
  "uint8 MODE_TEST = 2       # SBAS Testbed: Use data anyhow (1) / Ignore data when\n"
  "                          # in Test Mode (SBAS Msg 0)\n"
  "\n"
  "uint8 usage             # SBAS Usage\n"
  "uint8 USAGE_RANGE = 1     # Use SBAS GEOs as a ranging source (for navigation)\n"
  "uint8 USAGE_DIFF_CORR = 2 # Use SBAS Differential Corrections\n"
  "uint8 USAGE_INTEGRITY = 4 # Use SBAS Integrity Information\n"
  "\n"
  "uint8 max_sbas           # Maximum Number of SBAS prioritized tracking\n"
  "                        # channels (valid range: 0 - 3) to use\n"
  "                        # (obsolete and superseeded by UBX-CFG-GNSS in protocol\n"
  "                        # versions 14+).\n"
  "\n"
  "\n"
  "uint8 scanmode2         # Continuation of scanmode bitmask below\n"
  "                        # PRN 152...158\n"
  "uint32 scanmode1        # Which SBAS PRN numbers to search for (Bitmask)\n"
  "                        # If all Bits are set to zero, auto-scan (i.e. all valid\n"
  "                        # PRNs) are searched. Every bit corresponds to a PRN\n"
  "                        # number.\n"
  "                        # PRN 120..151";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgSBAS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgSBAS__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1567, 1567},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgSBAS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgSBAS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

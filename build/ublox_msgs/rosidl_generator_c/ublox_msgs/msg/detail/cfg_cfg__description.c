// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgCFG.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_cfg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgCFG__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0xa3, 0x6f, 0x0c, 0x3d, 0xd7, 0x05, 0xf0,
      0x86, 0xb0, 0xf3, 0x71, 0xc0, 0x4d, 0xee, 0x9a,
      0x26, 0xe3, 0xe1, 0xd1, 0xbc, 0x6b, 0x4b, 0x54,
      0x0c, 0x74, 0x73, 0x9c, 0xff, 0x69, 0x4f, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgCFG__TYPE_NAME[] = "ublox_msgs/msg/CfgCFG";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgCFG__FIELD_NAME__clear_mask[] = "clear_mask";
static char ublox_msgs__msg__CfgCFG__FIELD_NAME__save_mask[] = "save_mask";
static char ublox_msgs__msg__CfgCFG__FIELD_NAME__load_mask[] = "load_mask";
static char ublox_msgs__msg__CfgCFG__FIELD_NAME__device_mask[] = "device_mask";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgCFG__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgCFG__FIELD_NAME__clear_mask, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgCFG__FIELD_NAME__save_mask, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgCFG__FIELD_NAME__load_mask, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgCFG__FIELD_NAME__device_mask, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgCFG__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgCFG__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgCFG__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-CFG (0x06 0x09)\n"
  "# Clear, Save and Load configurations\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 9\n"
  "\n"
  "uint32 clear_mask             # Mask with configuration sub-sections to Clear\n"
  "                              # (=Load Default Configurations to Permanent\n"
  "                              # Configurations in non-volatile memory)\n"
  "uint32 save_mask              # Mask with configuration sub-section to Save\n"
  "                              # (=Save Current Configuration to Non-volatile\n"
  "                              # Memory)\n"
  "uint32 load_mask              # Mask with configuration sub-sections to Load\n"
  "                              # (=Load Permanent Configurations from\n"
  "                              # Non-volatile Memory to Current Configurations)\n"
  "\n"
  "uint32 MASK_IO_PORT = 1       # Communications port settings. Modifying this\n"
  "                              # sub-section results in an IO system reset.\n"
  "                              # Because of this undefined data may be output\n"
  "                              # for a short period of time after receiving the\n"
  "                              # message.\n"
  "uint32 MASK_MSG_CONF = 2      # Message Configuration\n"
  "uint32 MASK_INF_MSG = 4       # INF Message Configuration\n"
  "uint32 MASK_NAV_CONF = 8      # Navigation Configuration\n"
  "uint32 MASK_RXM_CONF = 16     # Receiver Manager Configuration\n"
  "uint32 MASK_SEN_CONF = 256    # Sensor Interface Configuration, protocol >= 19\n"
  "uint32 MASK_RINV_CONF = 512   # Remote Inventory Configuration\n"
  "uint32 MASK_ANT_CONF = 1024   # Antenna Configuration\n"
  "uint32 MASK_LOG_CONF = 2048   # Logging Configuration\n"
  "uint32 MASK_FTS_CONF = 4096   # FTS Configuration. Only applicable to the\n"
  "                              # FTS product variant.\n"
  "\n"
  "uint8 device_mask             # Mask which selects the devices for this command\n"
  "uint8 DEV_BBR = 1             # device battery backed RAM\n"
  "uint8 DEV_FLASH = 2           # device Flash\n"
  "uint8 DEV_EEPROM = 4          # device EEPROM\n"
  "uint8 DEV_SPI_FLASH = 16      # device SPI Flash";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgCFG__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgCFG__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1984, 1984},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgCFG__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgCFG__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

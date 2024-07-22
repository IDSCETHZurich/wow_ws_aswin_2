// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/UpdSOS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/upd_sos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__UpdSOS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x85, 0xf1, 0x67, 0x29, 0xc0, 0xf8, 0xfa,
      0xd9, 0x14, 0x71, 0xc6, 0x1a, 0xf7, 0x6f, 0xf0,
      0x61, 0x9b, 0x34, 0xc6, 0xea, 0xe1, 0x26, 0x89,
      0x13, 0x2d, 0x0e, 0x9a, 0xa7, 0x8a, 0x23, 0x13,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__UpdSOS__TYPE_NAME[] = "ublox_msgs/msg/UpdSOS";

// Define type names, field names, and default values
static char ublox_msgs__msg__UpdSOS__FIELD_NAME__cmd[] = "cmd";
static char ublox_msgs__msg__UpdSOS__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__UpdSOS__FIELDS[] = {
  {
    {ublox_msgs__msg__UpdSOS__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__UpdSOS__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__UpdSOS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__UpdSOS__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__UpdSOS__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UPD-SOS (0x09 0x14)\n"
  "#\n"
  "# Firmware Supported on:\n"
  "# u-blox 8 / u-blox M8 from protocol version 15 up to version 23.01\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 9\n"
  "uint8 MESSAGE_ID = 20\n"
  "\n"
  "uint8 cmd                   # Command\n"
  "# The host can send this message in order to save part of the BBR memory in a\n"
  "# file in flash file system. The feature is designed in order to emulate the\n"
  "# presence of the backup battery even if it is not present; the host can issue\n"
  "# the save on shutdown command before switching off the device supply. It is\n"
  "# recommended to issue a GNSS stop command before, in order to keep the BBR\n"
  "# memory content consistent.\n"
  "uint8 CMD_FLASH_BACKUP_CREATE = 0    # Create Backup File in Flash\n"
  "# The host can send this message in order to erase the backup file present in\n"
  "# flash. It is recommended that the clear operation is issued after the host has\n"
  "# received the notification that the memory has been restored after a reset.\n"
  "# Alternatively the host can parse the startup string 'Restored data saved on\n"
  "# shutdown' or poll the UBX-UPD-SOS message for getting the status.\n"
  "uint8 CMD_FLASH_BACKUP_CLEAR = 1     # Clear Backup File in Flash\n"
  "\n"
  "uint8[3] reserved1          # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__UpdSOS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__UpdSOS__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1171, 1171},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__UpdSOS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__UpdSOS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

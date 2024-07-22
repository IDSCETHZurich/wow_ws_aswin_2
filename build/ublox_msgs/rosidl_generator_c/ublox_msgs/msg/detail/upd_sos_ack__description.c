// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/UpdSOSAck.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/upd_sos_ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__UpdSOSAck__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0xc5, 0x6d, 0xd5, 0xe0, 0xb8, 0x28, 0x07,
      0x4f, 0xf1, 0xbf, 0x6d, 0x6b, 0xee, 0x51, 0xca,
      0x1b, 0x76, 0x98, 0xee, 0x4c, 0x87, 0x8e, 0xdc,
      0x79, 0x01, 0x3c, 0x65, 0x27, 0x90, 0xc9, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__UpdSOSAck__TYPE_NAME[] = "ublox_msgs/msg/UpdSOSAck";

// Define type names, field names, and default values
static char ublox_msgs__msg__UpdSOSAck__FIELD_NAME__cmd[] = "cmd";
static char ublox_msgs__msg__UpdSOSAck__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__UpdSOSAck__FIELD_NAME__response[] = "response";
static char ublox_msgs__msg__UpdSOSAck__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__UpdSOSAck__FIELDS[] = {
  {
    {ublox_msgs__msg__UpdSOSAck__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__UpdSOSAck__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__UpdSOSAck__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__UpdSOSAck__FIELD_NAME__reserved1, 9, 9},
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
ublox_msgs__msg__UpdSOSAck__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__UpdSOSAck__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__UpdSOSAck__FIELDS, 4, 4},
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
  "# Backup File Creation Acknowledge / System Restored from Backup\n"
  "#\n"
  "# Firmware Supported on:\n"
  "# u-blox 8 / u-blox M8 from protocol version 15 up to version 23.01\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 9\n"
  "uint8 MESSAGE_ID = 20\n"
  "\n"
  "uint8 cmd                   # Command\n"
  "uint8 CMD_BACKUP_CREATE_ACK = 2   # Backup File Creation Acknowledge\n"
  "                                  # The message is sent from the device as\n"
  "                                  # confirmation of creation of a backup file\n"
  "                                  # in flash. The host can safely shut down the\n"
  "                                  # device after received this message.\n"
  "uint8 CMD_SYSTEM_RESTORED = 3     # System Restored from Backup\n"
  "                                  # The message is sent from the device to\n"
  "                                  # notify the host the BBR has been restored\n"
  "                                  # from a backup file in flash. The host\n"
  "                                  # should clear the backup file after\n"
  "                                  # receiving this message. If the UBX-UPD-SOS\n"
  "                                  # message is polled, this message will be\n"
  "                                  # present.\n"
  "\n"
  "uint8[3] reserved0          # Reserved\n"
  "\n"
  "uint8 response                                  # Response:\n"
  "uint8 BACKUP_CREATE_NACK = 0                      # Not acknowledged\n"
  "uint8 BACKUP_CREATE_ACK = 1                       # Acknowledged\n"
  "uint8 SYSTEM_RESTORED_RESPONSE_UNKNOWN = 0        # Unknown\n"
  "uint8 SYSTEM_RESTORED_RESPONSE_FAILED = 1         # Failed restoring from backup\n"
  "                                                  # file\n"
  "uint8 SYSTEM_RESTORED_RESPONSE_RESTORED = 2       # Restored from backup file\n"
  "uint8 SYSTEM_RESTORED_RESPONSE_NOT_RESTORED = 3   # Not restored (no backup)\n"
  "\n"
  "uint8[3] reserved1          # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__UpdSOSAck__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__UpdSOSAck__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1831, 1831},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__UpdSOSAck__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__UpdSOSAck__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

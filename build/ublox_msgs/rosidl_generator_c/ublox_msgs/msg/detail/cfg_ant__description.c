// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgANT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_ant__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgANT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x48, 0x0d, 0x7b, 0xf6, 0x11, 0x04, 0xe5,
      0x6a, 0x39, 0x14, 0x6c, 0x20, 0x52, 0xb6, 0x19,
      0xff, 0x7a, 0xcb, 0xd5, 0xa6, 0x58, 0x39, 0x8d,
      0x06, 0xf2, 0xbf, 0x11, 0x3d, 0xd2, 0x58, 0xf2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgANT__TYPE_NAME[] = "ublox_msgs/msg/CfgANT";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgANT__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__CfgANT__FIELD_NAME__pins[] = "pins";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgANT__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgANT__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgANT__FIELD_NAME__pins, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgANT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgANT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgANT__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-ANT (0x06 0x13)\n"
  "# Antenna Control Settings\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 19\n"
  "\n"
  "uint16 flags                  # Antenna Flag Mask\n"
  "uint16 FLAGS_SVCS = 1         # Enable Antenna Supply Voltage Control Signal\n"
  "uint16 FLAGS_SCD = 2          # Enable Short Circuit Detection\n"
  "uint16 FLAGS_OCD = 4          # Enable Open Circuit Detection\n"
  "uint16 FLAGS_PDWN_ON_SCD = 8  # Power Down Antenna supply if Short Circuit is\n"
  "                              # detected. (only in combination with Bit 1)\n"
  "uint16 FLAGS_RECOVERY = 16    # Enable automatic recovery from short state\n"
  "\n"
  "uint16 pins                   # Antenna Pin Configuration\n"
  "uint16 PIN_SWITCH_MASK = 31   # PIO-Pin used for switching antenna supply\n"
  "                              # (internal to TIM-LP/TIM-LF)\n"
  "uint16 PIN_SCD_MASK = 992     # PIO-Pin used for detecting a short in the\n"
  "                              # antenna supply\n"
  "uint16 PIN_OCD_MASK = 31744   # PIO-Pin used for detecting open/not connected\n"
  "                              # antenna\n"
  "uint16 PIN_RECONFIG = 32678   # if set to one, and this command is sent to the\n"
  "                              # receiver, the receiver will reconfigure the\n"
  "                              # pins as specified.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgANT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgANT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1212, 1212},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgANT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgANT__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

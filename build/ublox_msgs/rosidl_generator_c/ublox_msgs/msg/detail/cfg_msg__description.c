// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgMSG.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgMSG__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x08, 0x28, 0xdc, 0x66, 0x22, 0xc3, 0xb4,
      0xb4, 0x2f, 0x3e, 0x08, 0x34, 0xc7, 0x3e, 0xca,
      0x5c, 0xe9, 0xde, 0xc0, 0x22, 0x46, 0x7d, 0x73,
      0xd7, 0xa5, 0x65, 0x34, 0x90, 0x57, 0x2e, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgMSG__TYPE_NAME[] = "ublox_msgs/msg/CfgMSG";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgMSG__FIELD_NAME__msg_class[] = "msg_class";
static char ublox_msgs__msg__CfgMSG__FIELD_NAME__msg_id[] = "msg_id";
static char ublox_msgs__msg__CfgMSG__FIELD_NAME__rate[] = "rate";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgMSG__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgMSG__FIELD_NAME__msg_class, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgMSG__FIELD_NAME__msg_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgMSG__FIELD_NAME__rate, 4, 4},
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
ublox_msgs__msg__CfgMSG__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgMSG__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgMSG__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-MSG (0x06 0x01)\n"
  "# Message Rate(s)\n"
  "#\n"
  "# Set message rate for the current port\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 1\n"
  "\n"
  "uint8 msg_class            # Message Class\n"
  "uint8 msg_id               # Message Identifier\n"
  "uint8 rate                 # Send rate on current port\n"
  "                           # [number of navigation solutions]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgMSG__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgMSG__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 332, 332},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgMSG__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgMSG__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/MonGNSS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/mon_gnss__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__MonGNSS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x0f, 0xd8, 0x5d, 0xe5, 0x9f, 0x18, 0x12,
      0x89, 0xfa, 0x2e, 0x64, 0x9e, 0x14, 0x98, 0xeb,
      0x28, 0xda, 0x1a, 0xd5, 0x26, 0xfd, 0x65, 0x60,
      0x81, 0xf2, 0x18, 0x41, 0x93, 0x37, 0x3a, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__MonGNSS__TYPE_NAME[] = "ublox_msgs/msg/MonGNSS";

// Define type names, field names, and default values
static char ublox_msgs__msg__MonGNSS__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__MonGNSS__FIELD_NAME__supported[] = "supported";
static char ublox_msgs__msg__MonGNSS__FIELD_NAME__default_gnss[] = "default_gnss";
static char ublox_msgs__msg__MonGNSS__FIELD_NAME__enabled[] = "enabled";
static char ublox_msgs__msg__MonGNSS__FIELD_NAME__simultaneous[] = "simultaneous";
static char ublox_msgs__msg__MonGNSS__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__MonGNSS__FIELDS[] = {
  {
    {ublox_msgs__msg__MonGNSS__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonGNSS__FIELD_NAME__supported, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonGNSS__FIELD_NAME__default_gnss, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonGNSS__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonGNSS__FIELD_NAME__simultaneous, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonGNSS__FIELD_NAME__reserved1, 9, 9},
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
ublox_msgs__msg__MonGNSS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__MonGNSS__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__MonGNSS__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# MON-GNSS (0x0A 0x28)\n"
  "# Information message major GNSS selection\n"
  "#\n"
  "# This message reports major GNSS selection. Augmentation systems are not\n"
  "# reported.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 10\n"
  "uint8 MESSAGE_ID = 40\n"
  "\n"
  "uint8 version         # Message version (0x01 for this version)\n"
  "\n"
  "uint8 BIT_MASK_GPS = 1\n"
  "uint8 BIT_MASK_GLONASS = 2\n"
  "uint8 BIT_MASK_BEIDOU = 4\n"
  "uint8 BIT_MASK_GALILEO = 8\n"
  "\n"
  "uint8 supported       # The major GNSS that can be supported by this receiver\n"
  "uint8 default_gnss     # Default major GNSS selection. If the default major GNSS\n"
  "                      # selection is currently configured in the efuse for this\n"
  "                      # receiver, it takes precedence over the default major\n"
  "                      # GNSS selection configured in the executing firmware of\n"
  "                      # this receiver.\n"
  "                      # see bit mask constants\n"
  "uint8 enabled         # Current major GNSS selection enabled for this receiver\n"
  "                      # see bit mask constants\n"
  "\n"
  "uint8 simultaneous    # Maximum number of concurrent major GNSS that can be\n"
  "                      # supported by this receiver\n"
  "\n"
  "uint8[3] reserved1    # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__MonGNSS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__MonGNSS__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1138, 1138},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__MonGNSS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__MonGNSS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

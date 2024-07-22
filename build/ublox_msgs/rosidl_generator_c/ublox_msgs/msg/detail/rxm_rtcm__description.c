// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmRTCM.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_rtcm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmRTCM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0xbc, 0x2d, 0x37, 0x63, 0x9d, 0x32, 0x05,
      0xd6, 0xc3, 0x66, 0xa4, 0x61, 0x5a, 0xec, 0x77,
      0x84, 0xbb, 0xa5, 0x56, 0xb7, 0xc0, 0x2f, 0x8c,
      0xcf, 0xa9, 0x41, 0x6c, 0xb4, 0xc7, 0xfd, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__RxmRTCM__TYPE_NAME[] = "ublox_msgs/msg/RxmRTCM";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmRTCM__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__RxmRTCM__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__RxmRTCM__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__RxmRTCM__FIELD_NAME__ref_station[] = "ref_station";
static char ublox_msgs__msg__RxmRTCM__FIELD_NAME__msg_type[] = "msg_type";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmRTCM__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmRTCM__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRTCM__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRTCM__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRTCM__FIELD_NAME__ref_station, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRTCM__FIELD_NAME__msg_type, 8, 8},
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
ublox_msgs__msg__RxmRTCM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmRTCM__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__RxmRTCM__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RXM-RTCM (0x02 0x32)\n"
  "# RTCM input status\n"
  "#\n"
  "# Output upon processing of an RTCM input message\n"
  "# Supported on:\n"
  "# - u-blox 8 / u-blox M8 from protocol version 20.01 up to version 23.01\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 2\n"
  "uint8 MESSAGE_ID = 50\n"
  "\n"
  "uint8 version                 # Message version (0x02 for this version)\n"
  "uint8 flags                   # RTCM input status flags\n"
  "uint8 FLAGS_CRC_FAILED = 1    # 0 when RTCM message received and passed CRC\n"
  "                              # check, 1 when failed in which case refStation\n"
  "                              # and msgType might be corrupted and misleading\n"
  "\n"
  "uint8[2] reserved0            # Reserved\n"
  "\n"
  "uint16 ref_station             # Reference station ID\n"
  "uint16 msg_type                # Message type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmRTCM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmRTCM__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 732, 732},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmRTCM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmRTCM__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

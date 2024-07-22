// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmSFRBX.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_sfrbx__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmSFRBX__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x31, 0xbf, 0x36, 0xfd, 0xb4, 0x93, 0x12,
      0xd9, 0x35, 0xdd, 0x16, 0x99, 0x6c, 0x11, 0x23,
      0x64, 0x0d, 0x09, 0xf5, 0x88, 0xf9, 0x18, 0x01,
      0x18, 0x11, 0x34, 0x23, 0xb0, 0x54, 0xc5, 0x7a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__RxmSFRBX__TYPE_NAME[] = "ublox_msgs/msg/RxmSFRBX";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__gnss_id[] = "gnss_id";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__sv_id[] = "sv_id";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__freq_id[] = "freq_id";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__num_words[] = "num_words";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__chn[] = "chn";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__RxmSFRBX__FIELD_NAME__dwrd[] = "dwrd";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmSFRBX__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__gnss_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__sv_id, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__freq_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__num_words, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__chn, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRBX__FIELD_NAME__dwrd, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__RxmSFRBX__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmSFRBX__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__RxmSFRBX__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RXM-SFRB (0x02 0x13)\n"
  "# Subframe Buffer\n"
  "#\n"
  "# This message reports a complete subframe of broadcast navigation data decoded\n"
  "# from a single signal. The number of data words reported in each message\n"
  "# depends on the nature of the signal. See the section on Broadcast Navigation\n"
  "# Data for further details.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 2\n"
  "uint8 MESSAGE_ID = 19\n"
  "\n"
  "uint8 gnss_id            # GNSS identifier (see Cfg GNSS for constants)\n"
  "\n"
  "uint8 sv_id              # Satellite identifier within corresponding GNSS system\n"
  "uint8 reserved0         # Reserved\n"
  "uint8 freq_id            # Only used for GLONASS: This is the frequency\n"
  "                        # slot + 7 (range from 0 to 13)\n"
  "uint8 num_words          # The number of data words contained in this message (up\n"
  "                        # to 10, for currently supported signals)\n"
  "uint8 chn               # The tracking channel number the message was received\n"
  "                        # on\n"
  "uint8 version           # Message version, (0x02 for this version)\n"
  "uint8 reserved1         # Reserved\n"
  "\n"
  "# Start of repeated block (numWords times)\n"
  "uint32[] dwrd           # The data words\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmSFRBX__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmSFRBX__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1133, 1133},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmSFRBX__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmSFRBX__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

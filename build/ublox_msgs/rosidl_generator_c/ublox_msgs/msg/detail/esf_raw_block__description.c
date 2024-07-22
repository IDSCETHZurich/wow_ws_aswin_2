// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/EsfRAWBlock.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/esf_raw_block__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__EsfRAWBlock__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xbf, 0x11, 0xe8, 0x21, 0xea, 0xc4, 0x34,
      0xbb, 0x90, 0x17, 0xfa, 0xbd, 0x37, 0x09, 0x05,
      0x03, 0x31, 0xcd, 0x2a, 0xae, 0xd3, 0x78, 0xbf,
      0xd3, 0x8c, 0x9a, 0x49, 0x75, 0x52, 0x16, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__EsfRAWBlock__TYPE_NAME[] = "ublox_msgs/msg/EsfRAWBlock";

// Define type names, field names, and default values
static char ublox_msgs__msg__EsfRAWBlock__FIELD_NAME__data[] = "data";
static char ublox_msgs__msg__EsfRAWBlock__FIELD_NAME__s_t_tag[] = "s_t_tag";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__EsfRAWBlock__FIELDS[] = {
  {
    {ublox_msgs__msg__EsfRAWBlock__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfRAWBlock__FIELD_NAME__s_t_tag, 7, 7},
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
ublox_msgs__msg__EsfRAWBlock__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__EsfRAWBlock__TYPE_NAME, 26, 26},
      {ublox_msgs__msg__EsfRAWBlock__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# See ESF-RAW\n"
  "\n"
  "uint32 data      # Its scaling and unit depends on the type and is\n"
  "                # the same as in ESF-MEAS\n"
  "uint32 DATA_FIELD_MASK = 16777215\n"
  "uint32 DATA_TYPE_MASK = 4278190080    # type of data\n"
  "                                      # (0 = no data; 1..255 = data type)\n"
  "uint32 s_t_tag     # sensor time tag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__EsfRAWBlock__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__EsfRAWBlock__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 322, 322},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__EsfRAWBlock__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__EsfRAWBlock__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

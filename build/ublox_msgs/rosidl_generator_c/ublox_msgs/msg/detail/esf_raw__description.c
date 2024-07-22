// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/EsfRAW.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/esf_raw__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__EsfRAW__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x9f, 0xaa, 0xe9, 0x92, 0x38, 0xe3, 0x60,
      0x47, 0xb3, 0xb3, 0x4a, 0x9c, 0xb4, 0x29, 0x0e,
      0x10, 0x0c, 0xb5, 0xa7, 0xd8, 0x24, 0x6c, 0x12,
      0x28, 0xe9, 0x5d, 0xcc, 0x0a, 0x56, 0xf3, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/esf_raw_block__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__EsfRAWBlock__EXPECTED_HASH = {1, {
    0x31, 0xbf, 0x11, 0xe8, 0x21, 0xea, 0xc4, 0x34,
    0xbb, 0x90, 0x17, 0xfa, 0xbd, 0x37, 0x09, 0x05,
    0x03, 0x31, 0xcd, 0x2a, 0xae, 0xd3, 0x78, 0xbf,
    0xd3, 0x8c, 0x9a, 0x49, 0x75, 0x52, 0x16, 0x93,
  }};
#endif

static char ublox_msgs__msg__EsfRAW__TYPE_NAME[] = "ublox_msgs/msg/EsfRAW";
static char ublox_msgs__msg__EsfRAWBlock__TYPE_NAME[] = "ublox_msgs/msg/EsfRAWBlock";

// Define type names, field names, and default values
static char ublox_msgs__msg__EsfRAW__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__EsfRAW__FIELD_NAME__blocks[] = "blocks";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__EsfRAW__FIELDS[] = {
  {
    {ublox_msgs__msg__EsfRAW__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfRAW__FIELD_NAME__blocks, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__EsfRAWBlock__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__EsfRAW__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__EsfRAWBlock__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__EsfRAW__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__EsfRAW__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__EsfRAW__FIELDS, 2, 2},
    },
    {ublox_msgs__msg__EsfRAW__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__EsfRAWBlock__EXPECTED_HASH, ublox_msgs__msg__EsfRAWBlock__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__EsfRAWBlock__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ESF-RAW (0x10 0x03)\n"
  "# Raw sensor measurements\n"
  "#\n"
  "# The message contains measurements from the active inertial sensors connected\n"
  "# to the GNSS chip. Possible data types for the data field are accelerometer,\n"
  "# gyroscope and temperature readings as described in the ESF Measurement Data\n"
  "# section. Note that the rate selected in CFG-MSG is not respected. If a\n"
  "# positive rate is selected then all raw measurements will be output.\n"
  "#\n"
  "# Supported on ADR/UDR products.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 16\n"
  "uint8 MESSAGE_ID = 3\n"
  "\n"
  "uint8[4] reserved0 # Reserved\n"
  "\n"
  "EsfRAWBlock[] blocks";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__EsfRAW__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__EsfRAW__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 560, 560},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__EsfRAW__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__EsfRAW__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__EsfRAWBlock__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

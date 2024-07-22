// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/MonVER.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/mon_ver__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__MonVER__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0xe5, 0xce, 0xc7, 0x96, 0x05, 0x07, 0x2b,
      0xe9, 0xd3, 0x01, 0x68, 0x6e, 0x5c, 0x8d, 0x0b,
      0xe1, 0xc6, 0x9e, 0x02, 0xd7, 0x50, 0x24, 0x93,
      0xce, 0x4e, 0x91, 0xe8, 0x8b, 0xea, 0x39, 0xfe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/mon_ver_extension__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__MonVERExtension__EXPECTED_HASH = {1, {
    0x6c, 0x5a, 0xa9, 0xa9, 0x98, 0x5c, 0xb0, 0x08,
    0x1b, 0xf3, 0xae, 0xc7, 0xd7, 0x2d, 0x5e, 0x09,
    0x3a, 0xc3, 0xe2, 0x05, 0x5d, 0xab, 0x43, 0x9b,
    0x15, 0x1f, 0xb9, 0xb9, 0x78, 0x71, 0x01, 0x54,
  }};
#endif

static char ublox_msgs__msg__MonVER__TYPE_NAME[] = "ublox_msgs/msg/MonVER";
static char ublox_msgs__msg__MonVERExtension__TYPE_NAME[] = "ublox_msgs/msg/MonVERExtension";

// Define type names, field names, and default values
static char ublox_msgs__msg__MonVER__FIELD_NAME__sw_version[] = "sw_version";
static char ublox_msgs__msg__MonVER__FIELD_NAME__hw_version[] = "hw_version";
static char ublox_msgs__msg__MonVER__FIELD_NAME__extension[] = "extension";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__MonVER__FIELDS[] = {
  {
    {ublox_msgs__msg__MonVER__FIELD_NAME__sw_version, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      30,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonVER__FIELD_NAME__hw_version, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      10,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonVER__FIELD_NAME__extension, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__MonVERExtension__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__MonVER__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__MonVERExtension__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__MonVER__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__MonVER__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__MonVER__FIELDS, 3, 3},
    },
    {ublox_msgs__msg__MonVER__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__MonVERExtension__EXPECTED_HASH, ublox_msgs__msg__MonVERExtension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__MonVERExtension__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# MON-VER (0x0A 0x04)\n"
  "#\n"
  "# Receiver/Software Version\n"
  "# Returned when the version is polled.\n"
  "\n"
  "uint8 CLASS_ID = 10\n"
  "uint8 MESSAGE_ID = 4\n"
  "\n"
  "char[30] sw_version    # Zero-terminated software version string.\n"
  "char[10] hw_version    # Zero-terminated hardware version string.\n"
  "\n"
  "# Start of repeated block (N times)\n"
  "MonVERExtension[] extension\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__MonVER__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__MonVER__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 355, 355},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__MonVER__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__MonVER__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__MonVERExtension__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

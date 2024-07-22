// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmSVSI.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_svsi__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmSVSI__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x0f, 0x2e, 0x8c, 0xf1, 0x6e, 0xec, 0x3e,
      0xaa, 0x62, 0xba, 0x72, 0x74, 0x44, 0xc2, 0xa6,
      0x99, 0xaf, 0x9c, 0xb6, 0xaa, 0x77, 0xaf, 0xad,
      0x41, 0x44, 0xcc, 0xcb, 0x85, 0x7b, 0x5b, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/rxm_svsisv__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__RxmSVSISV__EXPECTED_HASH = {1, {
    0x47, 0xea, 0xac, 0x08, 0x7f, 0xff, 0x1a, 0x81,
    0x6a, 0xd4, 0x35, 0x26, 0x7f, 0x77, 0x57, 0x83,
    0x84, 0x04, 0x4a, 0x8a, 0xc7, 0x17, 0xe5, 0x06,
    0x24, 0x84, 0x08, 0x12, 0x2d, 0x09, 0x55, 0xe8,
  }};
#endif

static char ublox_msgs__msg__RxmSVSI__TYPE_NAME[] = "ublox_msgs/msg/RxmSVSI";
static char ublox_msgs__msg__RxmSVSISV__TYPE_NAME[] = "ublox_msgs/msg/RxmSVSISV";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmSVSI__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__RxmSVSI__FIELD_NAME__week[] = "week";
static char ublox_msgs__msg__RxmSVSI__FIELD_NAME__num_vis[] = "num_vis";
static char ublox_msgs__msg__RxmSVSI__FIELD_NAME__num_sv[] = "num_sv";
static char ublox_msgs__msg__RxmSVSI__FIELD_NAME__sv[] = "sv";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmSVSI__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmSVSI__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSI__FIELD_NAME__week, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSI__FIELD_NAME__num_vis, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSI__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSVSI__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__RxmSVSISV__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__RxmSVSI__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__RxmSVSISV__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__RxmSVSI__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmSVSI__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__RxmSVSI__FIELDS, 5, 5},
    },
    {ublox_msgs__msg__RxmSVSI__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__RxmSVSISV__EXPECTED_HASH, ublox_msgs__msg__RxmSVSISV__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__RxmSVSISV__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RXM-SVSI (0x02 0x20)\n"
  "# SV Status Info\n"
  "#\n"
  "# Status of the receiver manager knowledge about GPS Orbit Validity\n"
  "#\n"
  "# This message has only been retained for backwards compatibility; users are\n"
  "# recommended to use the UBX-NAV-ORB message in preference.\n"
  "\n"
  "uint8 CLASS_ID = 2\n"
  "uint8 MESSAGE_ID = 32\n"
  "\n"
  "int32 i_tow              # GPS time of week of the navigation epoch [ms]\n"
  "int16 week              # GPS week number of the navigation epoch [weeks]\n"
  "\n"
  "uint8 num_vis            # Number of visible satellites\n"
  "uint8 num_sv             # Number of per-SV data blocks following\n"
  "\n"
  "RxmSVSISV[] sv";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmSVSI__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmSVSI__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 578, 578},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmSVSI__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmSVSI__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__RxmSVSISV__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

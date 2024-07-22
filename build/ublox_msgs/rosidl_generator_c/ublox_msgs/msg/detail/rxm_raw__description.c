// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmRAW.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_raw__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmRAW__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x88, 0xc4, 0x75, 0x44, 0x3d, 0x09, 0xe5,
      0xea, 0xf7, 0xd4, 0xe5, 0x6b, 0xee, 0x97, 0x02,
      0x20, 0x95, 0x78, 0x72, 0xc6, 0xd1, 0xbe, 0xd0,
      0x55, 0x05, 0xdc, 0x57, 0x5b, 0x66, 0xba, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/rxm_rawsv__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__RxmRAWSV__EXPECTED_HASH = {1, {
    0x2e, 0xaa, 0x9a, 0xe2, 0xcc, 0x90, 0xa2, 0x67,
    0xa1, 0x7f, 0xc9, 0x10, 0x0e, 0x5c, 0x9e, 0xec,
    0x05, 0xca, 0xa0, 0x25, 0x8b, 0x28, 0x3c, 0x44,
    0x5d, 0x74, 0x5c, 0xcc, 0x62, 0x45, 0xbb, 0x47,
  }};
#endif

static char ublox_msgs__msg__RxmRAW__TYPE_NAME[] = "ublox_msgs/msg/RxmRAW";
static char ublox_msgs__msg__RxmRAWSV__TYPE_NAME[] = "ublox_msgs/msg/RxmRAWSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmRAW__FIELD_NAME__rcv_tow[] = "rcv_tow";
static char ublox_msgs__msg__RxmRAW__FIELD_NAME__week[] = "week";
static char ublox_msgs__msg__RxmRAW__FIELD_NAME__num_sv[] = "num_sv";
static char ublox_msgs__msg__RxmRAW__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__RxmRAW__FIELD_NAME__sv[] = "sv";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmRAW__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmRAW__FIELD_NAME__rcv_tow, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAW__FIELD_NAME__week, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAW__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAW__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAW__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__RxmRAWSV__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__RxmRAW__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__RxmRAWSV__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__RxmRAW__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmRAW__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__RxmRAW__FIELDS, 5, 5},
    },
    {ublox_msgs__msg__RxmRAW__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__RxmRAWSV__EXPECTED_HASH, ublox_msgs__msg__RxmRAWSV__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__RxmRAWSV__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RXM-RAW (0x02 0x10)\n"
  "# Raw Measurement Data\n"
  "#\n"
  "# Supported up to ublox 7 firmware. See RxmRAWX for ublox 8\n"
  "# This message contains all information needed to be able to generate a RINEX\n"
  "# observation file.\n"
  "# This message outputs pseudorange, doppler and carrier phase measurements for\n"
  "# GPS satellites once signals have been synchronised. No other GNSS types are\n"
  "# currently supported.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 2\n"
  "uint8 MESSAGE_ID = 16\n"
  "\n"
  "int32 rcv_tow            # Measurement time of week in receiver local time [s]\n"
  "int16 week              # Measurement week number in receiver local time [weeks]\n"
  "\n"
  "uint8 num_sv             # # of satellites following\n"
  "uint8 reserved1         # Reserved\n"
  "\n"
  "RxmRAWSV[] sv          # numSV times";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmRAW__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmRAW__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 717, 717},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmRAW__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmRAW__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__RxmRAWSV__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

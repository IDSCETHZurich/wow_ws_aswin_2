// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmRAWX.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_rawx__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmRAWX__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x1d, 0x47, 0xa9, 0x26, 0xb4, 0x7b, 0x16,
      0x82, 0x80, 0x39, 0xde, 0x79, 0x43, 0x68, 0x81,
      0x67, 0x45, 0x9c, 0x8a, 0x75, 0xc2, 0x21, 0x9e,
      0x72, 0x52, 0xc1, 0x52, 0x2e, 0xe1, 0x21, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/rxm_rawx_meas__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__RxmRAWXMeas__EXPECTED_HASH = {1, {
    0xc1, 0x9b, 0xd7, 0x5a, 0x96, 0x5d, 0xb8, 0x09,
    0x62, 0x32, 0xfd, 0xfa, 0x00, 0xe0, 0x51, 0x27,
    0x0c, 0xc0, 0xf0, 0x24, 0x53, 0x68, 0x34, 0xde,
    0x0e, 0x82, 0x18, 0xab, 0x5d, 0x87, 0xc2, 0x77,
  }};
#endif

static char ublox_msgs__msg__RxmRAWX__TYPE_NAME[] = "ublox_msgs/msg/RxmRAWX";
static char ublox_msgs__msg__RxmRAWXMeas__TYPE_NAME[] = "ublox_msgs/msg/RxmRAWXMeas";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__rcv_tow[] = "rcv_tow";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__week[] = "week";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__leap_s[] = "leap_s";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__num_meas[] = "num_meas";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__rec_stat[] = "rec_stat";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__RxmRAWX__FIELD_NAME__meas[] = "meas";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmRAWX__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__rcv_tow, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__week, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__leap_s, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__num_meas, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__rec_stat, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWX__FIELD_NAME__meas, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__RxmRAWXMeas__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__RxmRAWX__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__RxmRAWXMeas__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__RxmRAWX__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmRAWX__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__RxmRAWX__FIELDS, 8, 8},
    },
    {ublox_msgs__msg__RxmRAWX__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__RxmRAWXMeas__EXPECTED_HASH, ublox_msgs__msg__RxmRAWXMeas__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__RxmRAWXMeas__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RXM-RAWX (0x02 0x15)\n"
  "# Multi-GNSS Raw Measurement Data\n"
  "#\n"
  "# This message contains the information needed to be able to generate a RINEX 3\n"
  "# multi-GNSS observation file.\n"
  "# This message contains pseudorange, Doppler, carrier phase, phase lock and\n"
  "# signal quality information for GNSS satellites once signals have been\n"
  "# synchronized. This message supports all active GNSS.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 2\n"
  "uint8 MESSAGE_ID = 21\n"
  "\n"
  "float64 rcv_tow          # Measurement time of week in receiver local time [s]\n"
  "                        # approximately aligned to the GPS time system. The\n"
  "                        # receiver local time of week number and leap second\n"
  "                        # information can be used to translate the time to other\n"
  "                        # time systems. More information about the difference in\n"
  "                        # time systems can be found in RINEX 3 documentation.\n"
  "                        # For a receiver operating in GLONASS only mode, UTC\n"
  "                        # time can be determined by subtracting the leapS field\n"
  "                        # from GPS time regardless of whether the GPS leap\n"
  "                        # seconds are valid.\n"
  "uint16 week             # GPS week number in receiver local time. [weeks]\n"
  "int8 leap_s              # GPS leap seconds (GPS-UTC). [s]\n"
  "                        # This field represents the receiver's best knowledge of\n"
  "                        # the leap seconds offset. A flag is given in the\n"
  "                        # recStat bitfield to indicate if the leap seconds\n"
  "                        # are known.\n"
  "uint8 num_meas           # # of measurements to follow\n"
  "uint8 rec_stat           # Receiver tracking status bitfield\n"
  "uint8 REC_STAT_LEAP_SEC = 1   # Leap seconds have been determined\n"
  "uint8 REC_STAT_CLK_RESET = 2  # Clock reset applied. Typically the receiver\n"
  "                              # clock is changed in increments of integer\n"
  "                              # milliseconds.\n"
  "uint8 version           # Message version (0x01 for this version).\n"
  "uint8[2] reserved1      # Reserved\n"
  "\n"
  "RxmRAWXMeas[] meas";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmRAWX__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmRAWX__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2067, 2067},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmRAWX__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmRAWX__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__RxmRAWXMeas__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmRAWSV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_rawsv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmRAWSV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0xaa, 0x9a, 0xe2, 0xcc, 0x90, 0xa2, 0x67,
      0xa1, 0x7f, 0xc9, 0x10, 0x0e, 0x5c, 0x9e, 0xec,
      0x05, 0xca, 0xa0, 0x25, 0x8b, 0x28, 0x3c, 0x44,
      0x5d, 0x74, 0x5c, 0xcc, 0x62, 0x45, 0xbb, 0x47,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__RxmRAWSV__TYPE_NAME[] = "ublox_msgs/msg/RxmRAWSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__cp_mes[] = "cp_mes";
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__pr_mes[] = "pr_mes";
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__do_mes[] = "do_mes";
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__sv[] = "sv";
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__mes_qi[] = "mes_qi";
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__cno[] = "cno";
static char ublox_msgs__msg__RxmRAWSV__FIELD_NAME__lli[] = "lli";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmRAWSV__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__cp_mes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__pr_mes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__do_mes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__sv, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__mes_qi, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__cno, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWSV__FIELD_NAME__lli, 3, 3},
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
ublox_msgs__msg__RxmRAWSV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmRAWSV__TYPE_NAME, 23, 23},
      {ublox_msgs__msg__RxmRAWSV__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see message RxmRAW\n"
  "#\n"
  "\n"
  "float64 cp_mes             # Carrier phase measurement [L1 cycles]\n"
  "float64 pr_mes             # Pseudorange measurement [m]\n"
  "float32 do_mes             # Doppler measurement [Hz]\n"
  "\n"
  "uint8 sv                  # Space Vehicle Number\n"
  "int8 mes_qi                # Nav Measurements Quality Indicator\n"
  "                          #  >=4 : PR+DO OK\n"
  "                          #  >=5 : PR+DO+CP OK\n"
  "                          #  <6 : likely loss of carrier lock in previous\n"
  "                          #       interval\n"
  "int8 cno                  # Signal strength C/No. [dbHz]\n"
  "uint8 lli                 # Loss of lock indicator (RINEX definition)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmRAWSV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmRAWSV__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 651, 651},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmRAWSV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmRAWSV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/EsfSTATUSSens.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/esf_status_sens__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__EsfSTATUSSens__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x90, 0x61, 0xf2, 0x4d, 0x9d, 0x0b, 0x9e,
      0x50, 0x5d, 0xbd, 0xd3, 0xce, 0xea, 0xaa, 0xf6,
      0xc7, 0x33, 0x11, 0xfc, 0x52, 0xfc, 0xd3, 0x96,
      0xb8, 0xf9, 0xea, 0x35, 0xf4, 0x73, 0xed, 0x6e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__EsfSTATUSSens__TYPE_NAME[] = "ublox_msgs/msg/EsfSTATUSSens";

// Define type names, field names, and default values
static char ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__sens_status1[] = "sens_status1";
static char ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__sens_status2[] = "sens_status2";
static char ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__freq[] = "freq";
static char ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__faults[] = "faults";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__EsfSTATUSSens__FIELDS[] = {
  {
    {ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__sens_status1, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__sens_status2, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__freq, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUSSens__FIELD_NAME__faults, 6, 6},
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
ublox_msgs__msg__EsfSTATUSSens__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__EsfSTATUSSens__TYPE_NAME, 28, 28},
      {ublox_msgs__msg__EsfSTATUSSens__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# See Esf-STATUS\n"
  "#\n"
  "\n"
  "uint8 sens_status1   # Sensor status, part 1 (see graphic below)\n"
  "uint8 sens_status2   # Sensor status, part 2 (see graphic below)\n"
  "uint8 freq          # Observation frequency [Hz]\n"
  "uint8 faults        # Sensor faults (see graphic below)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__EsfSTATUSSens__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__EsfSTATUSSens__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 255, 255},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__EsfSTATUSSens__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__EsfSTATUSSens__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

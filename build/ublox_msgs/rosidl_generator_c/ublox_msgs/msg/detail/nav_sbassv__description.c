// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavSBASSV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_sbassv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavSBASSV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x14, 0x83, 0xcf, 0x2a, 0x3c, 0xa9, 0x42,
      0x8f, 0x55, 0x66, 0x01, 0x56, 0xda, 0x42, 0x65,
      0xb7, 0x4f, 0x2c, 0x1c, 0xaa, 0x4c, 0xe1, 0x85,
      0x25, 0x23, 0x8e, 0xd5, 0xf0, 0x50, 0x05, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavSBASSV__TYPE_NAME[] = "ublox_msgs/msg/NavSBASSV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__udre[] = "udre";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__sv_sys[] = "sv_sys";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__sv_service[] = "sv_service";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__prc[] = "prc";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__reserved2[] = "reserved2";
static char ublox_msgs__msg__NavSBASSV__FIELD_NAME__ic[] = "ic";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavSBASSV__FIELDS[] = {
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__udre, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__sv_sys, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__sv_service, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__prc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavSBASSV__FIELD_NAME__ic, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavSBASSV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavSBASSV__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__NavSBASSV__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see message NavSBAS\n"
  "#\n"
  "\n"
  "uint8 svid              # SV Id\n"
  "uint8 flags             # Flags for this SV\n"
  "uint8 udre              # Monitoring status\n"
  "uint8 sv_sys             # System (WAAS/EGNOS/...), same as SYS\n"
  "uint8 sv_service         # Services available, same as SERVICE\n"
  "uint8 reserved1         # Reserved\n"
  "int16 prc               # Pseudo Range correction in [cm]\n"
  "uint16 reserved2        # Reserved\n"
  "int16 ic                # Ionosphere correction in [cm]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavSBASSV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavSBASSV__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 456, 456},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavSBASSV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavSBASSV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

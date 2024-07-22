// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavDOP.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_dop__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavDOP__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x77, 0xb1, 0x4a, 0xfd, 0x6b, 0xce, 0x9a,
      0xef, 0xff, 0x81, 0xb2, 0x47, 0x22, 0x71, 0x2a,
      0xf9, 0x37, 0xd0, 0x8d, 0xee, 0x7c, 0xbb, 0xf5,
      0xe6, 0x79, 0x93, 0xb0, 0x23, 0xbb, 0x4d, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavDOP__TYPE_NAME[] = "ublox_msgs/msg/NavDOP";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavDOP__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__g_dop[] = "g_dop";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__p_dop[] = "p_dop";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__t_dop[] = "t_dop";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__v_dop[] = "v_dop";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__h_dop[] = "h_dop";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__n_dop[] = "n_dop";
static char ublox_msgs__msg__NavDOP__FIELD_NAME__e_dop[] = "e_dop";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavDOP__FIELDS[] = {
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__g_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__p_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__t_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__v_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__h_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__n_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavDOP__FIELD_NAME__e_dop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavDOP__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavDOP__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__NavDOP__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-DOP (0x01 0x04)\n"
  "# Dilution of precision\n"
  "#\n"
  "# - DOP values are dimensionless.\n"
  "# - All DOP values are scaled by a factor of 100. If the unit transmits a value\n"
  "#   of e.g. 156, the DOP value is 1.56.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 4\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond Time of Week [ms]\n"
  "\n"
  "uint16 g_dop             # Geometric DOP [1 / 0.01]\n"
  "uint16 p_dop             # Position DOP  [1 / 0.01]\n"
  "uint16 t_dop             # Time DOP [1 / 0.01]\n"
  "uint16 v_dop             # Vertical DOP [1 / 0.01]\n"
  "uint16 h_dop             # Horizontal DOP [1 / 0.01]\n"
  "uint16 n_dop             # Northing DOP [1 / 0.01]\n"
  "uint16 e_dop             # Easting DOP [1 / 0.01]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavDOP__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavDOP__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 664, 664},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavDOP__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavDOP__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

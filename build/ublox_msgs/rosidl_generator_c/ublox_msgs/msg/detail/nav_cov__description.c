// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/NavCOV.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/nav_cov__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__NavCOV__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xec, 0x98, 0xf2, 0x22, 0x4b, 0xce, 0x61,
      0xf7, 0x2d, 0x9e, 0x67, 0x15, 0x5f, 0x32, 0xf9,
      0x77, 0x43, 0x9a, 0x00, 0xdb, 0xde, 0xe4, 0x82,
      0xb6, 0x30, 0x7e, 0xed, 0x81, 0xb0, 0x07, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__NavCOV__TYPE_NAME[] = "ublox_msgs/msg/NavCOV";

// Define type names, field names, and default values
static char ublox_msgs__msg__NavCOV__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_valid[] = "pos_cov_valid";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_valid[] = "vel_cov_valid";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__reserved_0[] = "reserved_0";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_nn[] = "pos_cov_nn";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_ne[] = "pos_cov_ne";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_nd[] = "pos_cov_nd";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_ee[] = "pos_cov_ee";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_ed[] = "pos_cov_ed";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_dd[] = "pos_cov_dd";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_nn[] = "vel_cov_nn";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_ne[] = "vel_cov_ne";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_nd[] = "vel_cov_nd";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_ee[] = "vel_cov_ee";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_ed[] = "vel_cov_ed";
static char ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_dd[] = "vel_cov_dd";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__NavCOV__FIELDS[] = {
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__reserved_0, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_nn, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_ne, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_nd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_ee, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_ed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__pos_cov_dd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_nn, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_ne, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_nd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_ee, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_ed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__NavCOV__FIELD_NAME__vel_cov_dd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__NavCOV__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__NavCOV__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__NavCOV__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NAV-COV (0x01 0x36)\n"
  "# Covariance matrices for position and velocity solutions\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 1\n"
  "uint8 MESSAGE_ID = 54\n"
  "\n"
  "uint32 i_tow             # GPS Millisecond time of week [ms]\n"
  "\n"
  "uint8 version            # Message version (0x00 for this version)\n"
  "uint8 pos_cov_valid      # Position covariance matrix validity flag\n"
  "uint8 vel_cov_valid      # Velocity covariance matrix validity flag\n"
  "uint8[9] reserved_0      # Reserved\n"
  "\n"
  "float32 pos_cov_nn       # Position covariance matrix value p_NN [m^2]\n"
  "float32 pos_cov_ne       # Position covariance matrix value p_NE [m^2]\n"
  "float32 pos_cov_nd       # Position covariance matrix value p_ND [m^2]\n"
  "float32 pos_cov_ee       # Position covariance matrix value p_EE [m^2]\n"
  "float32 pos_cov_ed       # Position covariance matrix value p_ED [m^2]\n"
  "float32 pos_cov_dd       # Position covariance matrix value p_DD [m^2]\n"
  "\n"
  "\n"
  "float32 vel_cov_nn       # Velocity covariance matrix value v_NN [m^2/s^2]\n"
  "float32 vel_cov_ne       # Velocity covariance matrix value v_NE [m^2/s^2]\n"
  "float32 vel_cov_nd       # Velocity covariance matrix value v_ND [m^2/s^2]\n"
  "float32 vel_cov_ee       # Velocity covariance matrix value v_EE [m^2/s^2]\n"
  "float32 vel_cov_ed       # Velocity covariance matrix value v_ED [m^2/s^2]\n"
  "float32 vel_cov_dd       # Velocity covariance matrix value v_DD [m^2/s^2]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__NavCOV__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__NavCOV__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1305, 1305},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__NavCOV__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__NavCOV__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

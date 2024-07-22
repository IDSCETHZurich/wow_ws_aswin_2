// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/EsfINS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/esf_ins__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__EsfINS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xd4, 0x0a, 0x39, 0x9f, 0x15, 0xea, 0x08,
      0x3d, 0x79, 0x46, 0x11, 0x25, 0x8b, 0x42, 0x01,
      0xe0, 0x87, 0x1b, 0x05, 0x28, 0x97, 0x17, 0x4a,
      0x71, 0x4e, 0xdb, 0x7f, 0x30, 0x1c, 0xa4, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__EsfINS__TYPE_NAME[] = "ublox_msgs/msg/EsfINS";

// Define type names, field names, and default values
static char ublox_msgs__msg__EsfINS__FIELD_NAME__bitfield0[] = "bitfield0";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__x_ang_rate[] = "x_ang_rate";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__y_ang_rate[] = "y_ang_rate";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__z_ang_rate[] = "z_ang_rate";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__x_accel[] = "x_accel";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__y_accel[] = "y_accel";
static char ublox_msgs__msg__EsfINS__FIELD_NAME__z_accel[] = "z_accel";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__EsfINS__FIELDS[] = {
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__bitfield0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__x_ang_rate, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__y_ang_rate, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__z_ang_rate, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__x_accel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__y_accel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfINS__FIELD_NAME__z_accel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__EsfINS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__EsfINS__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__EsfINS__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ESF-INS (0x10 0x15)\n"
  "# Vehicle dynamics information\n"
  "#\n"
  "# This message outputs information about vehicle dynamics computed by the\n"
  "# Inertial Navigation System (INS) during ESF-based navigation.\n"
  "# For ADR products, the output dynamics information (angular rates and\n"
  "# accelerations) is expressed with respect to the vehicle-frame.\n"
  "# For UDR products, the output dynamics information (angular rates and\n"
  "# accelerations) is expressed with respect to the body-frame.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 16\n"
  "uint8 MESSAGE_ID = 21\n"
  "\n"
  "uint32 bitfield0      # Bitfield (see graphic below)\n"
  "uint32 BITFIELD0_VERSION = 255            # Message version (1 for this version).\n"
  "uint32 BITFIELD0_X_ANG_RATE_VALID = 256   # Compensated x-axis angular rate data\n"
  "                                          # validity flag\n"
  "uint32 BITFIELD0_Y_ANG_RATE_VALID = 512   # Compensated y-axis angular rate data\n"
  "                                          # validity flag\n"
  "uint32 BITFIELD0_Z_ANG_RATE_VALID = 1024  # Compensated z-axis angular rate data\n"
  "                                          # validity flag\n"
  "uint32 BITFIELD0_X_ACCEL_VALID = 2048     # Compensated x-axis acceleration data\n"
  "                                          # validity flag\n"
  "uint32 BITFIELD0_Y_ACCEL_VALID = 4096     # Compensated y-axis acceleration data\n"
  "                                          # validity flag\n"
  "uint32 BITFIELD0_Z_ACCEL_VALID = 8192     # Compensated z-axis acceleration data\n"
  "                                          # validity flag\n"
  "\n"
  "uint8[4] reserved1    # Reserved\n"
  "\n"
  "uint32 i_tow           # GPS time of week of the navigation epoch [ms]\n"
  "int32 x_ang_rate        # Compensated x-axis angular rate [deg/s / 1e-3]\n"
  "int32 y_ang_rate        # Compensated y-axis angular rate [deg/s / 1e-3]\n"
  "int32 z_ang_rate        # Compensated z-axis angular rate [deg/s / 1e-3]\n"
  "int32 x_accel          # Compensated x-axis acceleration (gravity-free) [mg]\n"
  "int32 y_accel          # Compensated y-axis acceleration (gravity-free) [mg]\n"
  "int32 z_accel          # Compensated z-axis acceleration (gravity-free) [mg]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__EsfINS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__EsfINS__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2033, 2033},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__EsfINS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__EsfINS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

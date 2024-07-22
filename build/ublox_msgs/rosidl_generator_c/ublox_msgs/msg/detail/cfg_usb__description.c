// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgUSB.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_usb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgUSB__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xef, 0xa1, 0x9d, 0x7d, 0x60, 0x9a, 0xae,
      0xd7, 0x68, 0xc7, 0x2c, 0x07, 0x32, 0x3a, 0x1e,
      0xbc, 0xdc, 0x81, 0xcb, 0x81, 0x02, 0x28, 0xc4,
      0xcc, 0x01, 0x99, 0xc1, 0x96, 0xd3, 0x0a, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgUSB__TYPE_NAME[] = "ublox_msgs/msg/CfgUSB";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__vendor_id[] = "vendor_id";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__product_id[] = "product_id";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__reserved2[] = "reserved2";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__power_consumption[] = "power_consumption";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__vendor_string[] = "vendor_string";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__product_string[] = "product_string";
static char ublox_msgs__msg__CfgUSB__FIELD_NAME__serial_number[] = "serial_number";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgUSB__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__vendor_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__product_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__power_consumption, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__vendor_string, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__product_string, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgUSB__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgUSB__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgUSB__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgUSB__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UBX-CFG-USB (0x06 0x1B)\n"
  "# USB Configuration\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 27\n"
  "\n"
  "uint16 vendor_id             # Only set to registered Vendor IDs.\n"
  "                            # Changing this field requires special Host drivers.\n"
  "\n"
  "uint16 product_id            # Product ID. Changing this field requires special\n"
  "                            # Host drivers.\n"
  "\n"
  "uint8[2] reserved1          # Reserved\n"
  "uint8[2] reserved2          # Reserved\n"
  "\n"
  "uint16 power_consumption     # Power consumed by the device [mA]\n"
  "\n"
  "uint16 flags                # various configuration flags (see graphic below)\n"
  "uint16 FLAGS_RE_ENUM = 0       # force re-enumeration\n"
  "uint16 FLAGS_POWER_MODE = 2    # self-powered (1), bus-powered (0)\n"
  "\n"
  "int8[32] vendor_string      # String containing the vendor name.\n"
  "                           # 32 ASCII bytes including 0-termination.\n"
  "int8[32] product_string     # String containing the product name.\n"
  "                           # 32 ASCII bytes including 0-termination.\n"
  "int8[32] serial_number      # String containing the serial number.\n"
  "                           # 32 ASCII bytes including 0-termination.\n"
  "                           # Changing the String fields requires special Host\n"
  "                           # drivers.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgUSB__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgUSB__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1230, 1230},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgUSB__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgUSB__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

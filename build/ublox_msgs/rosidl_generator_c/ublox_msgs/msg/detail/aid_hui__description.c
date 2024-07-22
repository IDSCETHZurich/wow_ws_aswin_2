// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/AidHUI.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/aid_hui__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__AidHUI__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x04, 0x5a, 0x4c, 0x3f, 0x6f, 0xd7, 0x4c,
      0xa6, 0x69, 0xfa, 0x4c, 0x0e, 0x4f, 0xe5, 0x89,
      0x7e, 0x05, 0xaf, 0xf5, 0x39, 0xb3, 0x98, 0xd6,
      0x9a, 0xa8, 0x1f, 0x78, 0xc1, 0x1f, 0xbb, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__AidHUI__TYPE_NAME[] = "ublox_msgs/msg/AidHUI";

// Define type names, field names, and default values
static char ublox_msgs__msg__AidHUI__FIELD_NAME__health[] = "health";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_a0[] = "utc_a0";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_a1[] = "utc_a1";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_tow[] = "utc_tow";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_wnt[] = "utc_wnt";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_ls[] = "utc_ls";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_wnf[] = "utc_wnf";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_dn[] = "utc_dn";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_lsf[] = "utc_lsf";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__utc_spare[] = "utc_spare";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a0[] = "klob_a0";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a1[] = "klob_a1";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a2[] = "klob_a2";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a3[] = "klob_a3";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b0[] = "klob_b0";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b1[] = "klob_b1";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b2[] = "klob_b2";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b3[] = "klob_b3";
static char ublox_msgs__msg__AidHUI__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__AidHUI__FIELDS[] = {
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__health, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_a0, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_a1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_tow, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_wnt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_ls, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_wnf, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_dn, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_lsf, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__utc_spare, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a0, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a1, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a2, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_a3, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b0, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b1, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b2, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__klob_b3, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidHUI__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__AidHUI__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__AidHUI__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__AidHUI__FIELDS, 19, 19},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# AID-HUI (0x0B 0x02)\n"
  "# GPS Health, UTC and ionosphere parameters\n"
  "#\n"
  "# All UBX-AID messages are deprecated; use UBX-MGA messages instead.\n"
  "# This message contains a health bit mask, UTC time and Klobuchar parameters. For more\n"
  "# information on these parameters, please see the ICD-GPS-200 documentation.\n"
  "\n"
  "uint8 CLASS_ID = 11\n"
  "uint8 MESSAGE_ID = 2\n"
  "\n"
  "uint32  health           # Bitmask, every bit represents a GPS SV (1-32).\n"
  "                         # If the bit is set the SV is healthy.\n"
  "float64 utc_a0           # UTC - parameter A0\n"
  "float64 utc_a1           # UTC - parameter A1\n"
  "int32   utc_tow          # UTC - reference time of week\n"
  "int16   utc_wnt          # UTC - reference week number\n"
  "int16   utc_ls           # UTC - time difference due to leap seconds before event\n"
  "int16   utc_wnf          # UTC - week number when next leap second event occurs\n"
  "int16   utc_dn           # UTC - day of week when next leap second event occurs\n"
  "int16   utc_lsf          # UTC - time difference due to leap seconds after event\n"
  "int16   utc_spare        # UTC - Spare to ensure structure is a multiple of 4\n"
  "                         # bytes\n"
  "float32 klob_a0          # Klobuchar - alpha 0 [s]\n"
  "float32 klob_a1          # Klobuchar - alpha 1 [s/semicircle]\n"
  "float32 klob_a2          # Klobuchar - alpha 2 [s/semicircle^2]\n"
  "float32 klob_a3          # Klobuchar - alpha 3 [s/semicircle^3]\n"
  "float32 klob_b0          # Klobuchar - beta 0  [s]\n"
  "float32 klob_b1          # Klobuchar - beta 1  [s/semicircle]\n"
  "float32 klob_b2          # Klobuchar - beta 2  [s/semicircle^2]\n"
  "float32 klob_b3          # Klobuchar - beta 3  [s/semicircle^3]\n"
  "uint32 flags             # flags\n"
  "uint32 FLAGS_HEALTH = 1  # Healthmask field in this message is valid\n"
  "uint32 FLAGS_UTC = 2     # UTC parameter fields in this message are valid\n"
  "uint32 FLAGS_KLOB = 4    # Klobuchar parameter fields in this message are\n"
  "                         # valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__AidHUI__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__AidHUI__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1884, 1884},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__AidHUI__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__AidHUI__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

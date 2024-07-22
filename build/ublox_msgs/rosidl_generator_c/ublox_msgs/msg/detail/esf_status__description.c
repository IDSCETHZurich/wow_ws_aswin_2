// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/EsfSTATUS.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/esf_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__EsfSTATUS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xa3, 0x31, 0x59, 0xb4, 0xd9, 0xda, 0xcd,
      0xd3, 0x61, 0x65, 0x9e, 0xe0, 0xa9, 0x82, 0xc1,
      0xf4, 0x9c, 0x5b, 0xf6, 0x03, 0x28, 0x71, 0x00,
      0x02, 0x47, 0xcf, 0xec, 0xea, 0xac, 0xbe, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ublox_msgs/msg/detail/esf_status_sens__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ublox_msgs__msg__EsfSTATUSSens__EXPECTED_HASH = {1, {
    0x9b, 0x90, 0x61, 0xf2, 0x4d, 0x9d, 0x0b, 0x9e,
    0x50, 0x5d, 0xbd, 0xd3, 0xce, 0xea, 0xaa, 0xf6,
    0xc7, 0x33, 0x11, 0xfc, 0x52, 0xfc, 0xd3, 0x96,
    0xb8, 0xf9, 0xea, 0x35, 0xf4, 0x73, 0xed, 0x6e,
  }};
#endif

static char ublox_msgs__msg__EsfSTATUS__TYPE_NAME[] = "ublox_msgs/msg/EsfSTATUS";
static char ublox_msgs__msg__EsfSTATUSSens__TYPE_NAME[] = "ublox_msgs/msg/EsfSTATUSSens";

// Define type names, field names, and default values
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__i_tow[] = "i_tow";
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__fusion_mode[] = "fusion_mode";
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__reserved2[] = "reserved2";
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__num_sens[] = "num_sens";
static char ublox_msgs__msg__EsfSTATUS__FIELD_NAME__sens[] = "sens";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__EsfSTATUS__FIELDS[] = {
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__i_tow, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__fusion_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__num_sens, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__EsfSTATUS__FIELD_NAME__sens, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ublox_msgs__msg__EsfSTATUSSens__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ublox_msgs__msg__EsfSTATUS__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ublox_msgs__msg__EsfSTATUSSens__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__EsfSTATUS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__EsfSTATUS__TYPE_NAME, 24, 24},
      {ublox_msgs__msg__EsfSTATUS__FIELDS, 7, 7},
    },
    {ublox_msgs__msg__EsfSTATUS__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ublox_msgs__msg__EsfSTATUSSens__EXPECTED_HASH, ublox_msgs__msg__EsfSTATUSSens__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ublox_msgs__msg__EsfSTATUSSens__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ESF-STATUS (0x10 0x10)\n"
  "# External Sensor Fusion (ESF) status information\n"
  "#\n"
  "# Supported on UDR/ADR products\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 16\n"
  "uint8 MESSAGE_ID = 16\n"
  "\n"
  "uint32 i_tow                   # GPS time of week of the navigation epoch [ms]\n"
  "uint8 version                 # Message version (2 for this version)\n"
  "\n"
  "uint8[7] reserved1            # Reserved\n"
  "\n"
  "uint8 fusion_mode              # Fusion mode:\n"
  "uint8 FUSION_MODE_INIT = 0        # receiver is initializing some unknown values\n"
  "                                  # required for doing sensor fusion\n"
  "uint8 FUSION_MODE_FUSION = 1      # GNSS and sensor data are\n"
  "                                  # used for navigation solution computation\n"
  "uint8 FUSION_MODE_SUSPENDED = 2   # sensor fusion is temporarily disabled\n"
  "                                  # due to e.g. invalid sensor data or detected\n"
  "                                  # ferry\n"
  "uint8 FUSION_MODE_DISABLED = 3    # sensor fusion is permanently disabled\n"
  "                                  # until receiver reset due e.g. to sensor\n"
  "                                  # error\n"
  "\n"
  "uint8[2] reserved2            # Reserved\n"
  "\n"
  "uint8 num_sens                 # Number of sensors\n"
  "\n"
  "\n"
  "# Start of repeated block (numSens times)\n"
  "EsfSTATUSSens[] sens\n"
  "# End of repeated block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__EsfSTATUS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__EsfSTATUS__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1251, 1251},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__EsfSTATUS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__EsfSTATUS__get_individual_type_description_source(NULL),
    sources[1] = *ublox_msgs__msg__EsfSTATUSSens__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/AidALM.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/aid_alm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__AidALM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x0d, 0x87, 0x8f, 0x6a, 0x51, 0x00, 0x97,
      0xb9, 0x0f, 0xc7, 0x04, 0x3a, 0x61, 0xe6, 0x19,
      0x41, 0x66, 0xba, 0x2e, 0xf4, 0xd9, 0xb1, 0xe5,
      0xce, 0xb9, 0xcb, 0x59, 0x7a, 0xc5, 0x54, 0x9f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__AidALM__TYPE_NAME[] = "ublox_msgs/msg/AidALM";

// Define type names, field names, and default values
static char ublox_msgs__msg__AidALM__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__AidALM__FIELD_NAME__week[] = "week";
static char ublox_msgs__msg__AidALM__FIELD_NAME__dwrd[] = "dwrd";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__AidALM__FIELDS[] = {
  {
    {ublox_msgs__msg__AidALM__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidALM__FIELD_NAME__week, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidALM__FIELD_NAME__dwrd, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__AidALM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__AidALM__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__AidALM__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# AID-ALM (0x0B 0x30)\n"
  "# GPS Aiding Almanach Input/Output Message\n"
  "#\n"
  "# All UBX-AID messages are deprecated; use UBX-MGA messages instead\n"
  "# - If the WEEK Value is 0, DWRD0 to DWRD7 are not sent as the almanach is not\n"
  "#   available for the given SV. This may happen even if NAV-SVINFO and RXM-SVSI\n"
  "#   are indicating almanac availability as the internal data may not represent\n"
  "#   the content of an original broadcast almanac (or only parts thereof).\n"
  "# - DWORD0 to DWORD7 contain the 8 words following the Hand-Over Word ( HOW )\n"
  "#   from the GPS navigation message, either pages 1 to 24 of sub-frame 5 or\n"
  "#   pages 2 to 10 of subframe 4. See IS-GPS-200 for a full description of the\n"
  "#   contents of the Almanac pages.\n"
  "# - In DWORD0 to DWORD7, the parity bits have been removed, and the 24 bits of\n"
  "#   data are located in Bits 0 to 23. Bits 24 to 31 shall be ignored.\n"
  "# - Example: Parameter e (Eccentricity) from Almanach Subframe 4/5, Word 3,\n"
  "#   Bits 69-84 within the subframe can be found in DWRD0, Bits 15-0 whereas\n"
  "#   Bit 0 is the LSB.\n"
  "\n"
  "uint8 CLASS_ID = 11\n"
  "uint8 MESSAGE_ID = 48\n"
  "\n"
  "uint32 svid             # SV ID for which the receiver shall return its\n"
  "                        # Almanac Data (Valid Range: 1 .. 32 or 51, 56, 63).\n"
  "uint32 week             # Issue Date of Almanach (GPS week number)\n"
  "\n"
  "# Start of optional block\n"
  "uint32[] dwrd           # Almanac Words\n"
  "# End of optional block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__AidALM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__AidALM__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1388, 1388},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__AidALM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__AidALM__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/AidEPH.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/aid_eph__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__AidEPH__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x94, 0x6e, 0xd1, 0x85, 0x6c, 0xd8, 0x6b,
      0xb9, 0xbb, 0x92, 0xd0, 0x36, 0xed, 0x9f, 0x29,
      0x71, 0xb9, 0xfd, 0x43, 0xea, 0x93, 0x73, 0x85,
      0x10, 0x69, 0xa1, 0x86, 0x0d, 0x20, 0x65, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__AidEPH__TYPE_NAME[] = "ublox_msgs/msg/AidEPH";

// Define type names, field names, and default values
static char ublox_msgs__msg__AidEPH__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__AidEPH__FIELD_NAME__how[] = "how";
static char ublox_msgs__msg__AidEPH__FIELD_NAME__sf1d[] = "sf1d";
static char ublox_msgs__msg__AidEPH__FIELD_NAME__sf2d[] = "sf2d";
static char ublox_msgs__msg__AidEPH__FIELD_NAME__sf3d[] = "sf3d";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__AidEPH__FIELDS[] = {
  {
    {ublox_msgs__msg__AidEPH__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidEPH__FIELD_NAME__how, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidEPH__FIELD_NAME__sf1d, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidEPH__FIELD_NAME__sf2d, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__AidEPH__FIELD_NAME__sf3d, 4, 4},
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
ublox_msgs__msg__AidEPH__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__AidEPH__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__AidEPH__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# AID-EPH (0x0B 0x31)\n"
  "# GPS Aiding Ephemeris Input/Output Message\n"
  "#\n"
  "# All UBX-AID messages are deprecated; use UBX-MGA messages instead\n"
  "# - SF1D0 to SF3D7 is only sent if ephemeris is available for this SV. If not, the payload may\n"
  "#   be reduced to 8 Bytes, or all bytes are set to zero, indicating that this SV Number does\n"
  "#   not have valid ephemeris for the moment. This may happen even if NAV-SVINFO and\n"
  "#   RXM-SVSI are indicating ephemeris availability as the internal data may not represent the\n"
  "#   content of an original broadcast ephemeris (or only parts thereof).\n"
  "# - SF1D0 to SF3D7 contain the 24 words following the Hand-Over Word ( HOW ) from the\n"
  "#   GPS navigation message, subframes 1 to 3. The Truncated TOW Count is not valid and\n"
  "#   cannot be used. See IS-GPS-200 for a full description of the contents of the Subframes.\n"
  "# - In SF1D0 to SF3D7, the parity bits have been removed, and the 24 bits of data are\n"
  "#   located in Bits 0 to 23. Bits 24 to 31 shall be ignored.\n"
  "# - When polled, the data contained in this message does not represent the full original\n"
  "#   ephemeris broadcast. Some fields that are irrelevant to u-blox receivers may be missing.\n"
  "#   The week number in Subframe 1 has already been modified to match the Time Of\n"
  "#   Ephemeris (TOE).\n"
  "\n"
  "uint8 CLASS_ID = 11\n"
  "uint8 MESSAGE_ID = 49\n"
  "\n"
  "uint32 svid             # SV ID for which this ephemeris data is\n"
  "                        # (Valid Range: 1 .. 32).\n"
  "uint32 how              # Hand-Over Word of first Subframe. This is\n"
  "                        # required if data is sent to the receiver.\n"
  "                        # 0 indicates that no Ephemeris Data is following.\n"
  "\n"
  "# Start of optional block\n"
  "uint32[] sf1d           # Subframe 1 Words 3..10 (SF1D0..SF1D7)\n"
  "uint32[] sf2d           # Subframe 2 Words 3..10 (SF2D0..SF2D7)\n"
  "uint32[] sf3d           # Subframe 3 Words 3..10 (SF3D0..SF3D7)\n"
  "# End of optional block";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__AidEPH__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__AidEPH__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1883, 1883},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__AidEPH__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__AidEPH__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

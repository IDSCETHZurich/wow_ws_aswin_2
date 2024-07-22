// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmSFRB.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_sfrb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmSFRB__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x1b, 0x5e, 0x61, 0x85, 0xb8, 0x8c, 0xf0,
      0x23, 0xc9, 0xb2, 0x54, 0xa0, 0xd1, 0x93, 0x6c,
      0x68, 0xe7, 0x04, 0x82, 0x5f, 0x58, 0x50, 0x31,
      0x91, 0xb6, 0xe0, 0xf3, 0x31, 0x4b, 0xb1, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__RxmSFRB__TYPE_NAME[] = "ublox_msgs/msg/RxmSFRB";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmSFRB__FIELD_NAME__chn[] = "chn";
static char ublox_msgs__msg__RxmSFRB__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__RxmSFRB__FIELD_NAME__dwrd[] = "dwrd";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmSFRB__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmSFRB__FIELD_NAME__chn, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRB__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmSFRB__FIELD_NAME__dwrd, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      10,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__RxmSFRB__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmSFRB__TYPE_NAME, 22, 22},
      {ublox_msgs__msg__RxmSFRB__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RXM-SFRB (0x02 0x11)\n"
  "# Subframe Buffer\n"
  "#\n"
  "# The content of one single subframe buffer\n"
  "# For GPS satellites, the 10 dwrd values contain the parity checked subframe \n"
  "# data for 10 Words. Each dwrd has 24 Bits with valid data (Bits 23 to 0). The \n"
  "# remaining 8 bits (31 to 24) have an undefined value. The direction within the \n"
  "# Word is that the higher order bits are received from the SV first. Example: \n"
  "# The Preamble can be found in dwrd[0], at bit position 23 down to 16. For more \n"
  "# details on the data format please refer to the ICD-GPS-200C\n"
  "# Interface document.\n"
  "# For SBAS satellites, the 250 Bit message block can be found in dwrd[0] to \n"
  "# dwrd[6] for the first 224 bits. The remaining 26 bits are in dwrd[7], whereas\n"
  "# Bits 25 and 24 are the last two data bits, and Bits 23 down to 0 are the\n"
  "# parity bits. For more information on SBAS data format, please refer to \n"
  "# RTCA/DO-229C (MOPS), Appendix A.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 2\n"
  "uint8 MESSAGE_ID = 17\n"
  "\n"
  "uint8 chn               # Channel Number\n"
  "uint8 svid              # ID of Satellite transmitting Subframe\n"
  "uint32[10] dwrd         # Words of Data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmSFRB__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmSFRB__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1101, 1101},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmSFRB__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmSFRB__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

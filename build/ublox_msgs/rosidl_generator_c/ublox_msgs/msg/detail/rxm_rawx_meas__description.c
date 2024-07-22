// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/RxmRAWXMeas.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/rxm_rawx_meas__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__RxmRAWXMeas__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x9b, 0xd7, 0x5a, 0x96, 0x5d, 0xb8, 0x09,
      0x62, 0x32, 0xfd, 0xfa, 0x00, 0xe0, 0x51, 0x27,
      0x0c, 0xc0, 0xf0, 0x24, 0x53, 0x68, 0x34, 0xde,
      0x0e, 0x82, 0x18, 0xab, 0x5d, 0x87, 0xc2, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__RxmRAWXMeas__TYPE_NAME[] = "ublox_msgs/msg/RxmRAWXMeas";

// Define type names, field names, and default values
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__pr_mes[] = "pr_mes";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__cp_mes[] = "cp_mes";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__do_mes[] = "do_mes";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__gnss_id[] = "gnss_id";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__sv_id[] = "sv_id";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__freq_id[] = "freq_id";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__locktime[] = "locktime";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__cno[] = "cno";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__pr_stdev[] = "pr_stdev";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__cp_stdev[] = "cp_stdev";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__do_stdev[] = "do_stdev";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__trk_stat[] = "trk_stat";
static char ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__RxmRAWXMeas__FIELDS[] = {
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__pr_mes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__cp_mes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__do_mes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__gnss_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__sv_id, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__freq_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__locktime, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__cno, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__pr_stdev, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__cp_stdev, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__do_stdev, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__trk_stat, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__RxmRAWXMeas__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__RxmRAWXMeas__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__RxmRAWXMeas__TYPE_NAME, 26, 26},
      {ublox_msgs__msg__RxmRAWXMeas__FIELDS, 14, 14},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see message RxmRAWX\n"
  "#\n"
  "\n"
  "float64 pr_mes             # Pseudorange measurement [m]. GLONASS inter frequency\n"
  "                          # channel delays are compensated with an internal\n"
  "                          # calibration table.\n"
  "float64 cp_mes             # Carrier phase measurement [L1 cycles]. The carrier\n"
  "                          # phase initial ambiguity is initialized using an\n"
  "                          # approximate value to make the magnitude of\n"
  "                          # the phase close to the pseudorange\n"
  "                          # measurement. Clock resets are applied to both\n"
  "                          # phase and code measurements in accordance\n"
  "                          # with the RINEX specification.\n"
  "float32 do_mes             # Doppler measurement [Hz] (positive sign for\n"
  "                          # approaching satellites)\n"
  "uint8 gnss_id              # GNSS identifier (see CfgGNSS for constants)\n"
  "\n"
  "uint8 sv_id                # Satellite identifier (see Satellite Numbering)\n"
  "\n"
  "uint8 reserved0           # Reserved\n"
  "\n"
  "uint8 freq_id              # Only used for GLONASS: This is the frequency\n"
  "                          # slot + 7 (range from 0 to 13)\n"
  "uint16 locktime           # Carrier phase locktime counter [ms]\n"
  "                          # (maximum 64500 ms)\n"
  "int8 cno                  # Carrier-to-noise density ratio (signal strength)\n"
  "                          # [dB-Hz]\n"
  "uint8 pr_stdev             # Estimated pseudorange measurement standard\n"
  "                          # deviation [m / 0.01*2^n]\n"
  "uint8 cp_stdev             # Estimated carrier phase measurement standard\n"
  "                          # deviation (note a raw value of 0x0F indicates the\n"
  "                          # value is invalid) [cycles / 0.004]\n"
  "uint8 do_stdev             # Estimated Doppler measurement standard deviation\n"
  "                          # [Hz / 0.002*2^n]\n"
  "\n"
  "uint8 trk_stat             # Tracking status bitfield\n"
  "uint8 TRK_STAT_PR_VALID = 1       # Pseudorange valid\n"
  "uint8 TRK_STAT_CP_VALID = 2       # Carrier phase valid\n"
  "uint8 TRK_STAT_HALF_CYC = 4       # Half cycle valid\n"
  "uint8 TRK_STAT_SUB_HALF_CYC = 8   # Half cycle subtracted from phase\n"
  "\n"
  "uint8 reserved1           # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__RxmRAWXMeas__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__RxmRAWXMeas__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2180, 2180},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__RxmRAWXMeas__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__RxmRAWXMeas__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

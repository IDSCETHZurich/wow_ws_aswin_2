// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/MgaGAL.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/mga_gal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__MgaGAL__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xc3, 0x8a, 0x23, 0x92, 0x21, 0x31, 0x1f,
      0xb3, 0x30, 0xc0, 0xa9, 0x55, 0xbb, 0xba, 0xfc,
      0x05, 0x72, 0x17, 0x93, 0xf6, 0x69, 0x47, 0xd4,
      0x38, 0xf4, 0xf3, 0xea, 0xb7, 0x74, 0x0e, 0x30,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__MgaGAL__TYPE_NAME[] = "ublox_msgs/msg/MgaGAL";

// Define type names, field names, and default values
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__type[] = "type";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__version[] = "version";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__svid[] = "svid";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__iod_nav[] = "iod_nav";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__delta_n[] = "delta_n";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__m0[] = "m0";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__e[] = "e";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__sqrt_a[] = "sqrt_a";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__omega0[] = "omega0";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__i0[] = "i0";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__omega[] = "omega";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__omega_dot[] = "omega_dot";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__i_dot[] = "i_dot";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__cuc[] = "cuc";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__cus[] = "cus";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__crc[] = "crc";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__crs[] = "crs";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__cic[] = "cic";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__cis[] = "cis";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__toe[] = "toe";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__af0[] = "af0";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__af1[] = "af1";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__af2[] = "af2";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__sisaindex_e1_e5b[] = "sisaindex_e1_e5b";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__toc[] = "toc";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__bgd_e1_e5b[] = "bgd_e1_e5b";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__health_e1b[] = "health_e1b";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__data_validity_e1b[] = "data_validity_e1b";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__health_e5b[] = "health_e5b";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__data_validity_e5b[] = "data_validity_e5b";
static char ublox_msgs__msg__MgaGAL__FIELD_NAME__reserved2[] = "reserved2";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__MgaGAL__FIELDS[] = {
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__svid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__iod_nav, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__delta_n, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__m0, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__e, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__sqrt_a, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__omega0, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__i0, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__omega, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__omega_dot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__i_dot, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__cuc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__cus, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__crs, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__cic, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__cis, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__toe, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__af0, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__af1, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__af2, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__sisaindex_e1_e5b, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__toc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__bgd_e1_e5b, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__health_e1b, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__data_validity_e1b, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__health_e5b, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__data_validity_e5b, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MgaGAL__FIELD_NAME__reserved2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__MgaGAL__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__MgaGAL__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__MgaGAL__FIELDS, 33, 33},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# MGA-GAL (0x13 0x02)\n"
  "# Galileo Ephemeris Assistance\n"
  "#\n"
  "# This message allows the delivery of Galileo ephemeris assistance to a\n"
  "# receiver. See the description of AssistNow Online for details.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 19\n"
  "uint8 MESSAGE_ID = 2\n"
  "\n"
  "uint8 type              # Message type (0x01 for this type)\n"
  "uint8 version           # Message version (0x00 for this version)\n"
  "uint8 svid              # Galileo Satellite identifier\n"
  "\n"
  "uint8 reserved0         # Reserved\n"
  "\n"
  "uint16 iod_nav           # Ephemeris and clock correction issue of Data\n"
  "int16 delta_n            # Mean motion difference from computed value\n"
  "                        # [semi-cir cles/s * 2^-43]\n"
  "int32 m0                # Mean anomaly at reference time [semi-cir cles 2^-31]\n"
  "uint32 e                # Eccentricity [2^-33]\n"
  "uint32 sqrt_a            # Square root of the semi-major axis [m^0.5 * 2^-19]\n"
  "int32 omega0            # Longitude of ascending node of orbital plane at weekly\n"
  "                        # epoch [semi-cir cles 2^-31]\n"
  "int32 i0                # inclination angle at reference time\n"
  "                        # [semi-cir cles 2^-31]\n"
  "int32 omega             # Argument of perigee [semi-cir cles 2^-31]\n"
  "int32 omega_dot          # Rate of change of right ascension\n"
  "                        # [semi-cir cles/s 2^-43]\n"
  "int16 i_dot              # Rate of change of inclination angle\n"
  "                        # [semi-cir cles/s 2^-43]\n"
  "int16 cuc               # Amplitude of the cosine harmonic correction term to\n"
  "                        # the argument of latitude [radians * 2^-29]\n"
  "int16 cus               # Amplitude of the sine harmonic correction term to\n"
  "                        # the argument of latitude [radians * 2^-29]\n"
  "int16 crc               # Amplitude of the cosine harmonic correction term\n"
  "                        # to the orbit radius [radians * 2^-5]\n"
  "int16 crs               # Amplitude of the sine harmonic correction term to the\n"
  "                        # orbit radius [radians * 2^-5]\n"
  "int16 cic               # Amplitude of the cosine harmonic correction term to\n"
  "                        # the angle of inclination [radians * 2^-29]\n"
  "int16 cis               # Amplitude of the sine harmonic correction term to the\n"
  "                        # angle of inclination [radians * 2^-29]\n"
  "uint16 toe              # Ephemeris reference time [60 * s]\n"
  "int32 af0               # clock bias correction coefficient [s * 2^-34]\n"
  "int32 af1               # SV clock drift correction coefficient [s/s * 2^-46]\n"
  "int8 af2               # SV clock drift rate correction coefficient\n"
  "                        # [s/s^2 * 2^-59]\n"
  "uint8 sisaindex_e1_e5b   # Signal-in-Space Accuracy index for dual frequency\n"
  "                        # E1-E5b\n"
  "uint16 toc              # Clock correction data reference Time of Week [60 * s]\n"
  "int16 bgd_e1_e5b          # E1-E5b Broadcast Group Delay\n"
  "\n"
  "uint8[2] reserved1     # Reserved\n"
  "\n"
  "uint8 health_e1b        # E1-B Signal Health Status\n"
  "uint8 data_validity_e1b  # E1-B Data Validity Status\n"
  "uint8 health_e5b        # E5b Signal Health Status\n"
  "uint8 data_validity_e5b  # E5b Data Validity Status\n"
  "\n"
  "uint8[4] reserved2     # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__MgaGAL__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__MgaGAL__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3094, 3094},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__MgaGAL__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__MgaGAL__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

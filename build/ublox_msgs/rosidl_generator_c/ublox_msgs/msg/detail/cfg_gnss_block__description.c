// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgGNSSBlock.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_gnss_block__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgGNSSBlock__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x9d, 0xed, 0x5c, 0x28, 0xc5, 0xda, 0xed,
      0x1c, 0xcb, 0x97, 0xda, 0xce, 0x2c, 0xe5, 0x1b,
      0x38, 0x2e, 0x00, 0x6e, 0x9b, 0x24, 0x54, 0xc7,
      0x79, 0xdb, 0x2d, 0x16, 0x4e, 0x0c, 0xfc, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgGNSSBlock__TYPE_NAME[] = "ublox_msgs/msg/CfgGNSSBlock";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__gnss_id[] = "gnss_id";
static char ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__res_trk_ch[] = "res_trk_ch";
static char ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__max_trk_ch[] = "max_trk_ch";
static char ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgGNSSBlock__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__gnss_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__res_trk_ch, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__max_trk_ch, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgGNSSBlock__FIELD_NAME__flags, 5, 5},
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
ublox_msgs__msg__CfgGNSSBlock__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgGNSSBlock__TYPE_NAME, 27, 27},
      {ublox_msgs__msg__CfgGNSSBlock__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# see Cfg-GNSS message\n"
  "#\n"
  "\n"
  "uint8 gnss_id                          # System identifier (see Satellite Numbering)\n"
  "\n"
  "uint8 GNSS_ID_GPS = 0\n"
  "uint8 GNSS_ID_SBAS = 1\n"
  "uint8 GNSS_ID_GALILEO = 2\n"
  "uint8 GNSS_ID_BEIDOU = 3\n"
  "uint8 GNSS_ID_IMES = 4\n"
  "uint8 GNSS_ID_QZSS = 5\n"
  "uint8 GNSS_ID_GLONASS = 6\n"
  "\n"
  "uint8 res_trk_ch                       # (Read only in protocol versions greater than 23)\n"
  "                                       # Number of reserved (minimum) tracking channels\n"
  "                                       # for this GNSS system\n"
  "uint8 RES_TRK_CH_GPS = 8\n"
  "uint8 RES_TRK_CH_QZSS = 0\n"
  "uint8 RES_TRK_CH_SBAS = 0\n"
  "uint8 RES_TRK_CH_GLONASS = 8\n"
  "uint8 max_trk_ch                       # (Read only in protocol versions greater than 23)\n"
  "                                       # Maximum number of tracking channels used for this\n"
  "                                       # system. Must be > 0, >= resTrkChn, <= numTrkChUse and\n"
  "                                       # <= maximum number of tracking channels supported for\n"
  "                                       # this system\n"
  "uint8 MAX_TRK_CH_MAJOR_MIN = 4         # max_trk_ch must have this minimum value\n"
  "                                       # for each enabled major GNSS\n"
  "uint8 MAX_TRK_CH_GPS = 16\n"
  "uint8 MAX_TRK_CH_GLONASS = 14\n"
  "uint8 MAX_TRK_CH_QZSS = 3\n"
  "uint8 MAX_TRK_CH_SBAS = 3\n"
  "\n"
  "uint8 reserved1                        # Reserved\n"
  "\n"
  "uint32 flags                           # Bitfield of flags. At least one signal must be\n"
  "                                       # configured in every enabled system.\n"
  "uint32 FLAGS_ENABLE = 1                # Enable this system\n"
  "uint32 FLAGS_SIG_CFG_MASK = 16711680   # Signal configuration mask\n"
  "uint32 SIG_CFG_GPS_L1CA = 65536        # When gnssId is 0 (GPS)\n"
  "                                       # * 0x01 = GPS L1C/A\n"
  "uint32 SIG_CFG_SBAS_L1CA = 65536       # When gnssId is 1 (SBAS)\n"
  "                                       # * 0x01 = SBAS L1C/A\n"
  "uint32 SIG_CFG_GALILEO_E1OS = 65536    # When gnssId is 2 (Galileo)\n"
  "                                       # * 0x01 = Galileo E1OS (not supported in\n"
  "                                       #   protocol versions less than 18)\n"
  "uint32 SIG_CFG_BEIDOU_B1I = 65536      # When gnssId is 3 (BeiDou)\n"
  "                                       # * 0x01 = BeiDou B1I\n"
  "uint32 SIG_CFG_IMES_L1 = 65536         # When gnssId is 4 (IMES)\n"
  "                                       # * 0x01 = IMES L1\n"
  "uint32 SIG_CFG_QZSS_L1CA = 65536       # When gnssId is 5 (QZSS)\n"
  "                                       # * 0x01 = QZSS L1C/A\n"
  "uint32 SIG_CFG_QZSS_L1SAIF = 262144    # * 0x04 = QZSS L1SAIF\n"
  "uint32 SIG_CFG_GLONASS_L1OF = 65536    # When gnssId is 6 (GLONASS)\n"
  "                                       # * 0x01 = GLONASS L1OF";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgGNSSBlock__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgGNSSBlock__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2696, 2696},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgGNSSBlock__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgGNSSBlock__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgVALSETCfgdata.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_valset_cfgdata__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgVALSETCfgdata__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0xf9, 0x72, 0xbc, 0xf7, 0xe5, 0xd2, 0xe2,
      0x7c, 0x82, 0xeb, 0x3c, 0x1a, 0x8e, 0x78, 0x8c,
      0x9b, 0xd1, 0x0e, 0x1c, 0xd2, 0xb2, 0x42, 0x5c,
      0xc7, 0x4d, 0x63, 0x99, 0x5b, 0x1a, 0xb9, 0x86,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgVALSETCfgdata__TYPE_NAME[] = "ublox_msgs/msg/CfgVALSETCfgdata";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgVALSETCfgdata__FIELD_NAME__key[] = "key";
static char ublox_msgs__msg__CfgVALSETCfgdata__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgVALSETCfgdata__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgVALSETCfgdata__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgVALSETCfgdata__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgVALSETCfgdata__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgVALSETCfgdata__TYPE_NAME, 31, 31},
      {ublox_msgs__msg__CfgVALSETCfgdata__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-SIGNAL Keys\n"
  "uint32 GPS_ENABLE =         271646751   # 0x1031001f\n"
  "uint32 GPS_L1CA_ENABLE =    271646721   # 0x10310001\n"
  "uint32 GPS_L2C_ENABLE =     271646723   # 0x10310003\n"
  "\n"
  "uint32 SBAS_ENABLE =        271646752   # 0x10310020\n"
  "uint32 SBAS_L1CA_ENABLE =   271646725   # 0x10310005\n"
  "\n"
  "uint32 GAL_ENABLE =         271646753   # 0x10310021\n"
  "uint32 GAL_E1_ENABLE =      271646727   # 0x10310007\n"
  "uint32 GAL_E5B_ENABLE =     271646730   # 0x1031000a\n"
  "\n"
  "uint32 BDS_ENABLE =         271646754   # 0x10310022\n"
  "uint32 BDS_B1_ENABLE =      271646733   # 0x1031000d\n"
  "uint32 BDS_B2_ENABLE =      271646734   # 0x1031000e\n"
  "\n"
  "uint32 QZSS_ENABLE =        271646756   # 0x10310024\n"
  "uint32 QZSS_L1CA_ENABLE =   271646738   # 0x10310012\n"
  "uint32 QZSS_L1S_ENABLE =    271646740   # 0x10310014\n"
  "uint32 QZSS_L2C_ENABLE =    271646741   # 0x10310015\n"
  "\n"
  "uint32 GLO_ENABLE =         271646757   # 0x10310025\n"
  "uint32 GLO_L1_ENABLE =      271646744   # 0x10310018\n"
  "uint32 GLO_L2_ENABLE =      271646746   # 0x1031001a\n"
  "\n"
  "# See Cfg-VALSET\n"
  "#\n"
  "\n"
  "uint32 key      # Key for configuration item being changed\n"
  "\n"
  "uint8[] data    # Data for configuration item being changed,\n"
  "                # array can be of length 1 - 8 (i.e. 1 - 8 bytes long)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgVALSETCfgdata__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgVALSETCfgdata__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1190, 1190},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgVALSETCfgdata__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgVALSETCfgdata__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

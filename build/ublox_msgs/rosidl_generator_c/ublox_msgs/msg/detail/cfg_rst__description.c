// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgRST.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_rst__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgRST__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x79, 0x9e, 0x41, 0xea, 0x32, 0xf5, 0x93,
      0x84, 0x21, 0x03, 0xaa, 0x83, 0xeb, 0x8a, 0xb2,
      0x0a, 0x47, 0x1c, 0xbf, 0x08, 0x9f, 0xe2, 0x26,
      0x2f, 0xce, 0xf2, 0x15, 0x6b, 0x28, 0x73, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgRST__TYPE_NAME[] = "ublox_msgs/msg/CfgRST";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgRST__FIELD_NAME__nav_bbr_mask[] = "nav_bbr_mask";
static char ublox_msgs__msg__CfgRST__FIELD_NAME__reset_mode[] = "reset_mode";
static char ublox_msgs__msg__CfgRST__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgRST__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgRST__FIELD_NAME__nav_bbr_mask, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgRST__FIELD_NAME__reset_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgRST__FIELD_NAME__reserved1, 9, 9},
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
ublox_msgs__msg__CfgRST__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgRST__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgRST__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-RST (0x06 0x04)\n"
  "# Reset Receiver / Clear Backup Data Structures\n"
  "#\n"
  "# Don't expect this message to be acknowledged by the receiver.\n"
  "#  - Newer FW version won't acknowledge this message at all.\n"
  "#  - Older FW version will acknowledge this message but the acknowledge may not\n"
  "#    be sent completely before the receiver is reset.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 4\n"
  "\n"
  "uint16 nav_bbr_mask # BBR Sections to clear.\n"
  "# The following Special Sets apply:\n"
  "uint16 NAV_BBR_HOT_START = 0       # Hot start the device\n"
  "uint16 NAV_BBR_WARM_START = 1      # Warm start the device\n"
  "uint16 NAV_BBR_COLD_START = 65535  # Cold start the device\n"
  "uint16 NAV_BBR_EPH = 1       # Ephemeris\n"
  "uint16 NAV_BBR_ALM = 2       # Almanac\n"
  "uint16 NAV_BBR_HEALTH = 4    # Health\n"
  "uint16 NAV_BBR_KLOB = 8      # Klobuchar parameters\n"
  "uint16 NAV_BBR_POS = 16      # Position\n"
  "uint16 NAV_BBR_CLKD = 32     # Clock Drift\n"
  "uint16 NAV_BBR_OSC = 64      # Oscillator Parameter\n"
  "uint16 NAV_BBR_UTC = 128     # UTC Correction + GPS Leap Seconds Parameters\n"
  "uint16 NAV_BBR_RTC = 256     # RTC\n"
  "uint16 NAV_BBR_AOP = 32768   # Autonomous Orbit Parameters\n"
  "\n"
  "uint8 reset_mode              # Reset Type:\n"
  "uint8 RESET_MODE_HW_IMMEDIATE = 0       # Hardware reset (Watchdog) immediately\n"
  "uint8 RESET_MODE_SW = 1                 # Controlled Software reset\n"
  "uint8 RESET_MODE_GNSS = 2               # Controlled Software reset (GNSS only)\n"
  "uint8 RESET_MODE_HW_AFTER_SHUTDOWN = 4  # Hardware reset (Watchdog) after\n"
  "                                        # shutdown\n"
  "uint8 RESET_MODE_GNSS_STOP = 8          # Controlled GNSS stop\n"
  "uint8 RESET_MODE_GNSS_START = 9         # Controlled GNSS start\n"
  "\n"
  "uint8 reserved1     # Reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgRST__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgRST__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1664, 1664},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgRST__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgRST__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

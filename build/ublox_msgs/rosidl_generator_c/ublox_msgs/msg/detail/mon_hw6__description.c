// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/MonHW6.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/mon_hw6__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__MonHW6__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0x81, 0xa7, 0x06, 0x58, 0x06, 0x8a, 0xc5,
      0x35, 0xa6, 0x40, 0xdf, 0xf9, 0xc2, 0x01, 0xa2,
      0x35, 0x17, 0x9e, 0xc6, 0x10, 0x9c, 0xca, 0xcb,
      0x6f, 0x5b, 0x46, 0x20, 0x5c, 0xc5, 0x83, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__MonHW6__TYPE_NAME[] = "ublox_msgs/msg/MonHW6";

// Define type names, field names, and default values
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pin_sel[] = "pin_sel";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pin_bank[] = "pin_bank";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pin_dir[] = "pin_dir";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pin_val[] = "pin_val";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__noise_per_ms[] = "noise_per_ms";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__agc_cnt[] = "agc_cnt";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__a_status[] = "a_status";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__a_power[] = "a_power";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__used_mask[] = "used_mask";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__vp[] = "vp";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__jam_ind[] = "jam_ind";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__reserved1[] = "reserved1";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pin_irq[] = "pin_irq";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pull_h[] = "pull_h";
static char ublox_msgs__msg__MonHW6__FIELD_NAME__pull_l[] = "pull_l";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__MonHW6__FIELDS[] = {
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pin_sel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pin_bank, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pin_dir, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pin_val, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__noise_per_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__agc_cnt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__a_status, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__a_power, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__used_mask, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__vp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      25,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__jam_ind, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pin_irq, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pull_h, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__MonHW6__FIELD_NAME__pull_l, 6, 6},
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
ublox_msgs__msg__MonHW6__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__MonHW6__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__MonHW6__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# MON-HW (0x0A 0x09)\n"
  "# Hardware Status\n"
  "# Firmware 6\n"
  "#\n"
  "# Status of different aspect of the hardware, such as Antenna, PIO/Peripheral\n"
  "# Pins, Noise Level, Automatic Gain Control (AGC)\n"
  "#\n"
  "# WARNING: this message is a different length than the MonHW message for\n"
  "# firmware version 7 & 8\n"
  "\n"
  "uint8 CLASS_ID = 10\n"
  "uint8 MESSAGE_ID = 9\n"
  "\n"
  "uint32 pin_sel                 # Mask of Pins Set as Peripheral/PIO\n"
  "uint32 pin_bank                # Mask of Pins Set as Bank A/B\n"
  "uint32 pin_dir                 # Mask of Pins Set as Input/Output\n"
  "uint32 pin_val                 # Mask of Pins Value Low/High\n"
  "uint16 noise_per_ms             # Noise Level as measured by the GPS Core\n"
  "uint16 agc_cnt                 # AGC Monitor (counts SIGHI xor SIGLO,\n"
  "                              # range 0 to 8191)\n"
  "uint8 a_status                 # Status of the Antenna Supervisor State Machine\n"
  "uint8 A_STATUS_INIT = 0\n"
  "uint8 A_STATUS_UNKNOWN = 1\n"
  "uint8 A_STATUS_OK = 2\n"
  "uint8 A_STATUS_SHORT = 3\n"
  "uint8 A_STATUS_OPEN = 4\n"
  "\n"
  "uint8 a_power                  # Current PowerStatus of Antenna\n"
  "uint8 A_POWER_OFF = 0\n"
  "uint8 A_POWER_ON = 1\n"
  "uint8 A_POWER_UNKNOWN = 2\n"
  "\n"
  "uint8 flags                   # Flags:\n"
  "uint8 FLAGS_RTC_CALIB = 1            # RTC is calibrated\n"
  "uint8 FLAGS_SAFE_BOOT =  2           # Safe boot mode (0 = inactive, 1 = active)\n"
  "uint8 FLAGS_JAMMING_STATE_MASK = 12  # output from Jamming/Interference Monitor:\n"
  "uint8 JAMMING_STATE_UNKNOWN_OR_DISABLED = 0   # unknown or feature disabled\n"
  "uint8 JAMMING_STATE_OK = 4                    # ok - no significant jamming\n"
  "uint8 JAMMING_STATE_WARNING = 8               # interference visible but fix OK\n"
  "uint8 JAMMING_STATE_CRITICAL = 12             # interference visible and no fix\n"
  "uint8 FLAGS_XTAL_ABSENT =  16        # RTC XTAL is absent\n"
  "                                     # (not supported in protocol versions < 18)\n"
  "uint8 reserved0               # Reserved\n"
  "uint32 used_mask               # Mask of Pins that are used by the Virtual Pin\n"
  "                              # Manager\n"
  "uint8[25] vp                  # Array of Pin Mappings for each of the 25\n"
  "                              # Physical Pins\n"
  "uint8 jam_ind                  # CW Jamming indicator, scaled:\n"
  "uint8 JAM_IND_NONE = 0          # No CW Jamming\n"
  "uint8 JAM_IND_STRONG = 255      # Strong CW Jamming\n"
  "\n"
  "uint8[2] reserved1            # Reserved\n"
  "\n"
  "uint32 pin_irq                 # Mask of Pins Value using the PIO Irq\n"
  "uint32 pull_h                  # Mask of Pins Value using the PIO Pull High\n"
  "                              # Resistor\n"
  "uint32 pull_l                  # Mask of Pins Value using the PIO Pull Low\n"
  "                              # Resistor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__MonHW6__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__MonHW6__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2609, 2609},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__MonHW6__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__MonHW6__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

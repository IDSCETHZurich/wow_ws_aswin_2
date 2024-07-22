// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ublox_msgs:msg/CfgPRT.idl
// generated code does not contain a copyright notice

#include "ublox_msgs/msg/detail/cfg_prt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ublox_msgs
const rosidl_type_hash_t *
ublox_msgs__msg__CfgPRT__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0x95, 0xbf, 0x54, 0xe9, 0x76, 0xbd, 0x40,
      0xd9, 0x1f, 0x25, 0x06, 0xbc, 0x43, 0x69, 0x08,
      0xd3, 0x13, 0xc5, 0x9a, 0x38, 0x53, 0xa2, 0xe5,
      0x58, 0xbf, 0x53, 0xed, 0xbd, 0x8d, 0xce, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ublox_msgs__msg__CfgPRT__TYPE_NAME[] = "ublox_msgs/msg/CfgPRT";

// Define type names, field names, and default values
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__port_id[] = "port_id";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__reserved0[] = "reserved0";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__tx_ready[] = "tx_ready";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__mode[] = "mode";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__baud_rate[] = "baud_rate";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__in_proto_mask[] = "in_proto_mask";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__out_proto_mask[] = "out_proto_mask";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__flags[] = "flags";
static char ublox_msgs__msg__CfgPRT__FIELD_NAME__reserved1[] = "reserved1";

static rosidl_runtime_c__type_description__Field ublox_msgs__msg__CfgPRT__FIELDS[] = {
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__port_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__reserved0, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__tx_ready, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__baud_rate, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__in_proto_mask, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__out_proto_mask, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ublox_msgs__msg__CfgPRT__FIELD_NAME__reserved1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ublox_msgs__msg__CfgPRT__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ublox_msgs__msg__CfgPRT__TYPE_NAME, 21, 21},
      {ublox_msgs__msg__CfgPRT__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CFG-PRT (0x06 0x00)\n"
  "# Port Configuration for DDC, UART, USB, SPI\n"
  "#\n"
  "# Several configurations can be concatenated to one input message. In this case\n"
  "# the payload length can be a multiple of the normal length (see the other\n"
  "# versions of CFG-PRT). Output messages from the module contain only one\n"
  "# configuration unit.\n"
  "#\n"
  "\n"
  "uint8 CLASS_ID = 6\n"
  "uint8 MESSAGE_ID = 0\n"
  "\n"
  "uint8 port_id              # Port Identifier Number\n"
  "uint8 PORT_ID_DDC = 0\n"
  "uint8 PORT_ID_UART1 = 1\n"
  "uint8 PORT_ID_UART2 = 2\n"
  "uint8 PORT_ID_USB = 3\n"
  "uint8 PORT_ID_SPI = 4\n"
  "\n"
  "uint8 reserved0           # Reserved\n"
  "\n"
  "uint16 tx_ready            # TX ready PIN configuration (since Firmware 7.01)\n"
  "                          # reserved (Always set to zero) up to Firmware 7.01\n"
  "\n"
  "uint16 TX_READY_EN = 1                    # Enable TX ready feature for this\n"
  "                                          # port\n"
  "uint16 TX_READY_POLARITY_HIGH_ACTIVE = 0  # Polarity High-active\n"
  "uint16 TX_READY_POLARITY_LOW_ACTIVE = 2   # Polarity Low-active\n"
  "uint16 TX_READY_PIN_SHIFT = 2             # PIO to be used (must not be in use\n"
  "                                          # already by another function)\n"
  "uint16 TX_READY_PIN_MASK = 124            #\n"
  "uint16 TX_READY_THRES_SHIFT = 7           # Threshold\n"
  "uint16 TX_READY_THRES_MASK = 65408        # The given threshold is multiplied by\n"
  "                                          # 8 bytes.\n"
  "                                          # The TX ready PIN goes active\n"
  "                                          # after >= thres*8 bytes are pending\n"
  "                                          # for the port and going inactive\n"
  "                                          # after the last pending bytes have\n"
  "                                          # been written to hardware (0-4 bytes\n"
  "                                          # before end of stream).\n"
  "\n"
  "uint32 mode               # A bit mask describing the DDC, UART or SPI mode\n"
  "                          # Reserved for USB\n"
  "# DDC Mode Constants\n"
  "uint32 MODE_DDC_SLAVE_ADDR_SHIFT = 1\n"
  "uint32 MODE_DDC_SLAVE_ADDR_MASK = 254     # Slave address\n"
  "                                          # Range: 0x07 < slaveAddr < 0x78.\n"
  "# UART Mode Constants\n"
  "uint32 MODE_RESERVED1 = 16                # Default 1 for compatibility with A4\n"
  "uint32 MODE_CHAR_LEN_MASK = 192           # Character Length\n"
  "uint32 MODE_CHAR_LEN_5BIT = 0               # 5bit (not supported)\n"
  "uint32 MODE_CHAR_LEN_6BIT = 64              # 6bit (not supported)\n"
  "uint32 MODE_CHAR_LEN_7BIT = 128             # 7bit (supported only with parity)\n"
  "uint32 MODE_CHAR_LEN_8BIT = 192             # 8bit\n"
  "uint32 MODE_PARITY_MASK = 3584            #\n"
  "uint32 MODE_PARITY_EVEN = 0                 # Even Parity\n"
  "uint32 MODE_PARITY_ODD = 512                # Odd Parity\n"
  "uint32 MODE_PARITY_NO = 2048                # No Parity (even/odd ignored)\n"
  "uint32 MODE_STOP_BITS_MASK = 12288        # Number of Stop Bits\n"
  "uint32 MODE_STOP_BITS_1 = 0                 # 1 Stop Bit\n"
  "uint32 MODE_STOP_BITS_15 = 4096             # 1.5 Stop Bit\n"
  "uint32 MODE_STOP_BITS_2 = 8192              # 2 Stop Bit\n"
  "uint32 MODE_STOP_BITS_05 = 12288            # 0.5 Stop Bit\n"
  "# SPI Mode Constants\n"
  "uint32 MODE_SPI_SPI_MODE_CPOL = 4         # SPI Mode CPOL (0/1)\n"
  "uint32 MODE_SPI_SPI_MODE_CPHA = 2         # SPI Mode CPH (0/1)\n"
  "                                          # (both CPOL/CPHA) can be = 1\n"
  "uint32 MODE_SPI_FLOW_CONTROL = 64         # (u-blox 6 only)\n"
  "                                          # 0 Flow control disabled\n"
  "                                          # 1 Flow control enabled (9-bit mode)\n"
  "uint32 MODE_SPI_FF_COUNT_SHIFT = 8\n"
  "uint32 MODE_SPI_FF_COUNT_MASK = 16128     # Number of bytes containing 0xFF to\n"
  "                                          # receive before switching off\n"
  "                                          # reception.\n"
  "                                          # Range: 0(mechanism off)-63\n"
  "\n"
  "uint32 baud_rate           # UART Baudrate in bits/second [bits/s]\n"
  "                          # Reserved for USB, SPI, DDC\n"
  "                          # Possible values: 4800, 9600, 19200, 38400, 57600,\n"
  "                          #                  115200, 230400, 460800\n"
  "\n"
  "uint16 in_proto_mask        # A mask describing which input protocols are active.\n"
  "                          # Each bit of this mask is used for a protocol.\n"
  "                          # Through that, multiple protocols can be defined\n"
  "                          # on a single port.\n"
  "\n"
  "uint16 out_proto_mask       # A mask describing which output protocols are active.\n"
  "                          # Each bit of this mask is used for a protocol.\n"
  "                          # Through that, multiple protocols can be defined\n"
  "                          # on a single port.\n"
  "\n"
  "uint16 PROTO_UBX = 1\n"
  "uint16 PROTO_NMEA = 2\n"
  "uint16 PROTO_RTCM = 4     # only for inProtoMask\n"
  "uint16 PROTO_RTCM3 = 32   # (not supported in protocol versions less than 20)\n"
  "\n"
  "uint16 flags              # Flags for UART & SPI, Reserved for USB\n"
  "uint16 FLAGS_EXTENDED_TX_TIMEOUT = 2  # if set, the port will timeout if\n"
  "                                      # allocated TX memory >=4 kB and no\n"
  "                                      # activity for 1.5s. If not set the port\n"
  "                                      # will timoout if no activity for 1.5s\n"
  "                                      # regardless on the amount of allocated\n"
  "                                      # TX memory.\n"
  "\n"
  "uint16 reserved1          # Always set to zero";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ublox_msgs__msg__CfgPRT__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ublox_msgs__msg__CfgPRT__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 5377, 5377},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ublox_msgs__msg__CfgPRT__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ublox_msgs__msg__CfgPRT__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

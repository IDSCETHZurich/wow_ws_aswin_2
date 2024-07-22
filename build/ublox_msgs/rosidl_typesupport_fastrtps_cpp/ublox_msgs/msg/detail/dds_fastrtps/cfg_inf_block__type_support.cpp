// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_msgs:msg/CfgINFBlock.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/cfg_inf_block__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_msgs/msg/detail/cfg_inf_block__functions.h"
#include "ublox_msgs/msg/detail/cfg_inf_block__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ublox_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_serialize(
  const ublox_msgs::msg::CfgINFBlock & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: protocol_id
  cdr << ros_message.protocol_id;
  // Member: reserved1
  {
    cdr << ros_message.reserved1;
  }
  // Member: inf_msg_mask
  {
    cdr << ros_message.inf_msg_mask;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs::msg::CfgINFBlock & ros_message)
{
  // Member: protocol_id
  cdr >> ros_message.protocol_id;

  // Member: reserved1
  {
    cdr >> ros_message.reserved1;
  }

  // Member: inf_msg_mask
  {
    cdr >> ros_message.inf_msg_mask;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
get_serialized_size(
  const ublox_msgs::msg::CfgINFBlock & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: protocol_id
  {
    size_t item_size = sizeof(ros_message.protocol_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.reserved1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inf_msg_mask
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.inf_msg_mask[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_msgs
max_serialized_size_CfgINFBlock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: protocol_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserved1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: inf_msg_mask
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ublox_msgs::msg::CfgINFBlock;
    is_plain =
      (
      offsetof(DataType, inf_msg_mask) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CfgINFBlock__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::CfgINFBlock *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CfgINFBlock__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_msgs::msg::CfgINFBlock *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CfgINFBlock__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_msgs::msg::CfgINFBlock *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CfgINFBlock__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CfgINFBlock(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CfgINFBlock__callbacks = {
  "ublox_msgs::msg",
  "CfgINFBlock",
  _CfgINFBlock__cdr_serialize,
  _CfgINFBlock__cdr_deserialize,
  _CfgINFBlock__get_serialized_size,
  _CfgINFBlock__max_serialized_size
};

static rosidl_message_type_support_t _CfgINFBlock__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CfgINFBlock__callbacks,
  get_message_typesupport_handle_function,
  &ublox_msgs__msg__CfgINFBlock__get_type_hash,
  &ublox_msgs__msg__CfgINFBlock__get_type_description,
  &ublox_msgs__msg__CfgINFBlock__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ublox_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ublox_msgs::msg::CfgINFBlock>()
{
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_CfgINFBlock__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_msgs, msg, CfgINFBlock)() {
  return &ublox_msgs::msg::typesupport_fastrtps_cpp::_CfgINFBlock__handle;
}

#ifdef __cplusplus
}
#endif

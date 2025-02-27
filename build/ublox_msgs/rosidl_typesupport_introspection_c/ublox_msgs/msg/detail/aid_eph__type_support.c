// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_msgs:msg/AidEPH.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_msgs/msg/detail/aid_eph__rosidl_typesupport_introspection_c.h"
#include "ublox_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_msgs/msg/detail/aid_eph__functions.h"
#include "ublox_msgs/msg/detail/aid_eph__struct.h"


// Include directives for member types
// Member `sf1d`
// Member `sf2d`
// Member `sf3d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_msgs__msg__AidEPH__init(message_memory);
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_fini_function(void * message_memory)
{
  ublox_msgs__msg__AidEPH__fini(message_memory);
}

size_t ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__size_function__AidEPH__sf1d(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf1d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf1d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__fetch_function__AidEPH__sf1d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf1d(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__assign_function__AidEPH__sf1d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf1d(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__resize_function__AidEPH__sf1d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__size_function__AidEPH__sf2d(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf2d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf2d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__fetch_function__AidEPH__sf2d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf2d(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__assign_function__AidEPH__sf2d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf2d(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__resize_function__AidEPH__sf2d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__size_function__AidEPH__sf3d(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf3d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf3d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__fetch_function__AidEPH__sf3d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf3d(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__assign_function__AidEPH__sf3d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf3d(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__resize_function__AidEPH__sf3d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_member_array[5] = {
  {
    "svid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__AidEPH, svid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "how",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__AidEPH, how),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sf1d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__AidEPH, sf1d),  // bytes offset in struct
    NULL,  // default value
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__size_function__AidEPH__sf1d,  // size() function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf1d,  // get_const(index) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf1d,  // get(index) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__fetch_function__AidEPH__sf1d,  // fetch(index, &value) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__assign_function__AidEPH__sf1d,  // assign(index, value) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__resize_function__AidEPH__sf1d  // resize(index) function pointer
  },
  {
    "sf2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__AidEPH, sf2d),  // bytes offset in struct
    NULL,  // default value
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__size_function__AidEPH__sf2d,  // size() function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf2d,  // get_const(index) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf2d,  // get(index) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__fetch_function__AidEPH__sf2d,  // fetch(index, &value) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__assign_function__AidEPH__sf2d,  // assign(index, value) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__resize_function__AidEPH__sf2d  // resize(index) function pointer
  },
  {
    "sf3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_msgs__msg__AidEPH, sf3d),  // bytes offset in struct
    NULL,  // default value
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__size_function__AidEPH__sf3d,  // size() function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_const_function__AidEPH__sf3d,  // get_const(index) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__get_function__AidEPH__sf3d,  // get(index) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__fetch_function__AidEPH__sf3d,  // fetch(index, &value) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__assign_function__AidEPH__sf3d,  // assign(index, value) function pointer
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__resize_function__AidEPH__sf3d  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_members = {
  "ublox_msgs__msg",  // message namespace
  "AidEPH",  // message name
  5,  // number of fields
  sizeof(ublox_msgs__msg__AidEPH),
  ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_member_array,  // message members
  ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_init_function,  // function to initialize message memory (memory has to be allocated)
  ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_type_support_handle = {
  0,
  &ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_members,
  get_message_typesupport_handle_function,
  &ublox_msgs__msg__AidEPH__get_type_hash,
  &ublox_msgs__msg__AidEPH__get_type_description,
  &ublox_msgs__msg__AidEPH__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_msgs, msg, AidEPH)() {
  if (!ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_type_support_handle.typesupport_identifier) {
    ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ublox_msgs__msg__AidEPH__rosidl_typesupport_introspection_c__AidEPH_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

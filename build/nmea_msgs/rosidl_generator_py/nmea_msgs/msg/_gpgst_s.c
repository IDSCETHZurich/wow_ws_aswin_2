// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "nmea_msgs/msg/detail/gpgst__struct.h"
#include "nmea_msgs/msg/detail/gpgst__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nmea_msgs__msg__gpgst__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("nmea_msgs.msg._gpgst.Gpgst", full_classname_dest, 26) == 0);
  }
  nmea_msgs__msg__Gpgst * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // message_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // utc_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utc_seconds = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "rms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // semi_major_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "semi_major_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->semi_major_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // semi_minor_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "semi_minor_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->semi_minor_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nmea_msgs__msg__gpgst__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpgst */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nmea_msgs.msg._gpgst");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpgst");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nmea_msgs__msg__Gpgst * ros_message = (nmea_msgs__msg__Gpgst *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_id.data,
      strlen(ros_message->message_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utc_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // semi_major_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->semi_major_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "semi_major_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // semi_minor_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->semi_minor_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "semi_minor_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

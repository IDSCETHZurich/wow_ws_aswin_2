# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_msgs:msg/CfgDGNSS.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'reserved0'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CfgDGNSS(type):
    """Metaclass of message 'CfgDGNSS'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CLASS_ID': 6,
        'MESSAGE_ID': 112,
        'DGNSS_MODE_RTK_FLOAT': 2,
        'DGNSS_MODE_RTK_FIXED': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ublox_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ublox_msgs.msg.CfgDGNSS')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cfg_dgnss
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cfg_dgnss
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cfg_dgnss
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cfg_dgnss
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cfg_dgnss

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CLASS_ID': cls.__constants['CLASS_ID'],
            'MESSAGE_ID': cls.__constants['MESSAGE_ID'],
            'DGNSS_MODE_RTK_FLOAT': cls.__constants['DGNSS_MODE_RTK_FLOAT'],
            'DGNSS_MODE_RTK_FIXED': cls.__constants['DGNSS_MODE_RTK_FIXED'],
        }

    @property
    def CLASS_ID(self):
        """Message constant 'CLASS_ID'."""
        return Metaclass_CfgDGNSS.__constants['CLASS_ID']

    @property
    def MESSAGE_ID(self):
        """Message constant 'MESSAGE_ID'."""
        return Metaclass_CfgDGNSS.__constants['MESSAGE_ID']

    @property
    def DGNSS_MODE_RTK_FLOAT(self):
        """Message constant 'DGNSS_MODE_RTK_FLOAT'."""
        return Metaclass_CfgDGNSS.__constants['DGNSS_MODE_RTK_FLOAT']

    @property
    def DGNSS_MODE_RTK_FIXED(self):
        """Message constant 'DGNSS_MODE_RTK_FIXED'."""
        return Metaclass_CfgDGNSS.__constants['DGNSS_MODE_RTK_FIXED']


class CfgDGNSS(metaclass=Metaclass_CfgDGNSS):
    """
    Message class 'CfgDGNSS'.

    Constants:
      CLASS_ID
      MESSAGE_ID
      DGNSS_MODE_RTK_FLOAT
      DGNSS_MODE_RTK_FIXED
    """

    __slots__ = [
        '_dgnss_mode',
        '_reserved0',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'dgnss_mode': 'uint8',
        'reserved0': 'uint8[3]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dgnss_mode = kwargs.get('dgnss_mode', int())
        if 'reserved0' not in kwargs:
            self.reserved0 = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.reserved0 = numpy.array(kwargs.get('reserved0'), dtype=numpy.uint8)
            assert self.reserved0.shape == (3, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.dgnss_mode != other.dgnss_mode:
            return False
        if all(self.reserved0 != other.reserved0):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dgnss_mode(self):
        """Message field 'dgnss_mode'."""
        return self._dgnss_mode

    @dgnss_mode.setter
    def dgnss_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dgnss_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dgnss_mode' field must be an unsigned integer in [0, 255]"
        self._dgnss_mode = value

    @builtins.property
    def reserved0(self):
        """Message field 'reserved0'."""
        return self._reserved0

    @reserved0.setter
    def reserved0(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'reserved0' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 3, \
                    "The 'reserved0' numpy.ndarray() must have a size of 3"
                self._reserved0 = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved0' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved0 = numpy.array(value, dtype=numpy.uint8)

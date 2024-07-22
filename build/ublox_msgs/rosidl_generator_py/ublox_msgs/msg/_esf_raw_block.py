# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_msgs:msg/EsfRAWBlock.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsfRAWBlock(type):
    """Metaclass of message 'EsfRAWBlock'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DATA_FIELD_MASK': 16777215,
        'DATA_TYPE_MASK': 4278190080,
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
                'ublox_msgs.msg.EsfRAWBlock')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esf_raw_block
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esf_raw_block
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esf_raw_block
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esf_raw_block
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esf_raw_block

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DATA_FIELD_MASK': cls.__constants['DATA_FIELD_MASK'],
            'DATA_TYPE_MASK': cls.__constants['DATA_TYPE_MASK'],
        }

    @property
    def DATA_FIELD_MASK(self):
        """Message constant 'DATA_FIELD_MASK'."""
        return Metaclass_EsfRAWBlock.__constants['DATA_FIELD_MASK']

    @property
    def DATA_TYPE_MASK(self):
        """Message constant 'DATA_TYPE_MASK'."""
        return Metaclass_EsfRAWBlock.__constants['DATA_TYPE_MASK']


class EsfRAWBlock(metaclass=Metaclass_EsfRAWBlock):
    """
    Message class 'EsfRAWBlock'.

    Constants:
      DATA_FIELD_MASK
      DATA_TYPE_MASK
    """

    __slots__ = [
        '_data',
        '_s_t_tag',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'data': 'uint32',
        's_t_tag': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.data = kwargs.get('data', int())
        self.s_t_tag = kwargs.get('s_t_tag', int())

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
        if self.data != other.data:
            return False
        if self.s_t_tag != other.s_t_tag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'data' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'data' field must be an unsigned integer in [0, 4294967295]"
        self._data = value

    @builtins.property
    def s_t_tag(self):
        """Message field 's_t_tag'."""
        return self._s_t_tag

    @s_t_tag.setter
    def s_t_tag(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 's_t_tag' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 's_t_tag' field must be an unsigned integer in [0, 4294967295]"
        self._s_t_tag = value
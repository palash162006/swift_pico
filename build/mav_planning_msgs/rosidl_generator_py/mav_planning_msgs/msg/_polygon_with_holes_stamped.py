# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mav_planning_msgs:msg/PolygonWithHolesStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PolygonWithHolesStamped(type):
    """Metaclass of message 'PolygonWithHolesStamped'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.msg.PolygonWithHolesStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__polygon_with_holes_stamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__polygon_with_holes_stamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__polygon_with_holes_stamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__polygon_with_holes_stamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__polygon_with_holes_stamped

            from mav_planning_msgs.msg import PolygonWithHoles
            if PolygonWithHoles.__class__._TYPE_SUPPORT is None:
                PolygonWithHoles.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PolygonWithHolesStamped(metaclass=Metaclass_PolygonWithHolesStamped):
    """Message class 'PolygonWithHolesStamped'."""

    __slots__ = [
        '_header',
        '_altitude',
        '_polygon',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'altitude': 'double',
        'polygon': 'mav_planning_msgs/PolygonWithHoles',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mav_planning_msgs', 'msg'], 'PolygonWithHoles'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.altitude = kwargs.get('altitude', float())
        from mav_planning_msgs.msg import PolygonWithHoles
        self.polygon = kwargs.get('polygon', PolygonWithHoles())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.altitude != other.altitude:
            return False
        if self.polygon != other.polygon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from mav_planning_msgs.msg import PolygonWithHoles
            assert \
                isinstance(value, PolygonWithHoles), \
                "The 'polygon' field must be a sub message of type 'PolygonWithHoles'"
        self._polygon = value

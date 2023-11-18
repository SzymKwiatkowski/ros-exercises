# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ex_solution:action/ExerciseAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExerciseAction_Goal(type):
    """Metaclass of message 'ExerciseAction_Goal'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_Goal(metaclass=Metaclass_ExerciseAction_Goal):
    """Message class 'ExerciseAction_Goal'."""

    __slots__ = [
        '_goal_distance',
        '_timeout',
        '_precision',
    ]

    _fields_and_field_types = {
        'goal_distance': 'float',
        'timeout': 'float',
        'precision': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_distance = kwargs.get('goal_distance', float())
        self.timeout = kwargs.get('timeout', float())
        self.precision = kwargs.get('precision', float())

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
        if self.goal_distance != other.goal_distance:
            return False
        if self.timeout != other.timeout:
            return False
        if self.precision != other.precision:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_distance(self):
        """Message field 'goal_distance'."""
        return self._goal_distance

    @goal_distance.setter
    def goal_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_distance = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timeout' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timeout = value

    @builtins.property
    def precision(self):
        """Message field 'precision'."""
        return self._precision

    @precision.setter
    def precision(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'precision' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'precision' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._precision = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_Result(type):
    """Metaclass of message 'ExerciseAction_Result'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_Result(metaclass=Metaclass_ExerciseAction_Result):
    """Message class 'ExerciseAction_Result'."""

    __slots__ = [
        '_succeeded',
        '_final_precision',
        '_total_time',
    ]

    _fields_and_field_types = {
        'succeeded': 'boolean',
        'final_precision': 'float',
        'total_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.succeeded = kwargs.get('succeeded', bool())
        self.final_precision = kwargs.get('final_precision', float())
        self.total_time = kwargs.get('total_time', float())

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
        if self.succeeded != other.succeeded:
            return False
        if self.final_precision != other.final_precision:
            return False
        if self.total_time != other.total_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def succeeded(self):
        """Message field 'succeeded'."""
        return self._succeeded

    @succeeded.setter
    def succeeded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'succeeded' field must be of type 'bool'"
        self._succeeded = value

    @builtins.property
    def final_precision(self):
        """Message field 'final_precision'."""
        return self._final_precision

    @final_precision.setter
    def final_precision(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_precision' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'final_precision' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._final_precision = value

    @builtins.property
    def total_time(self):
        """Message field 'total_time'."""
        return self._total_time

    @total_time.setter
    def total_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_Feedback(type):
    """Metaclass of message 'ExerciseAction_Feedback'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_Feedback(metaclass=Metaclass_ExerciseAction_Feedback):
    """Message class 'ExerciseAction_Feedback'."""

    __slots__ = [
        '_current_distance',
        '_estimated_time',
    ]

    _fields_and_field_types = {
        'current_distance': 'float',
        'estimated_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_distance = kwargs.get('current_distance', float())
        self.estimated_time = kwargs.get('estimated_time', float())

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
        if self.current_distance != other.current_distance:
            return False
        if self.estimated_time != other.estimated_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_distance(self):
        """Message field 'current_distance'."""
        return self._current_distance

    @current_distance.setter
    def current_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_distance = value

    @builtins.property
    def estimated_time(self):
        """Message field 'estimated_time'."""
        return self._estimated_time

    @estimated_time.setter
    def estimated_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_SendGoal_Request(type):
    """Metaclass of message 'ExerciseAction_SendGoal_Request'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__send_goal__request

            from ex_solution.action import ExerciseAction
            if ExerciseAction.Goal.__class__._TYPE_SUPPORT is None:
                ExerciseAction.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_SendGoal_Request(metaclass=Metaclass_ExerciseAction_SendGoal_Request):
    """Message class 'ExerciseAction_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ex_solution/ExerciseAction_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ex_solution', 'action'], 'ExerciseAction_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ex_solution.action._exercise_action import ExerciseAction_Goal
        self.goal = kwargs.get('goal', ExerciseAction_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ex_solution.action._exercise_action import ExerciseAction_Goal
            assert \
                isinstance(value, ExerciseAction_Goal), \
                "The 'goal' field must be a sub message of type 'ExerciseAction_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_SendGoal_Response(type):
    """Metaclass of message 'ExerciseAction_SendGoal_Response'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_SendGoal_Response(metaclass=Metaclass_ExerciseAction_SendGoal_Response):
    """Message class 'ExerciseAction_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ExerciseAction_SendGoal(type):
    """Metaclass of service 'ExerciseAction_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__exercise_action__send_goal

            from ex_solution.action import _exercise_action
            if _exercise_action.Metaclass_ExerciseAction_SendGoal_Request._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_SendGoal_Request.__import_type_support__()
            if _exercise_action.Metaclass_ExerciseAction_SendGoal_Response._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_SendGoal_Response.__import_type_support__()


class ExerciseAction_SendGoal(metaclass=Metaclass_ExerciseAction_SendGoal):
    from ex_solution.action._exercise_action import ExerciseAction_SendGoal_Request as Request
    from ex_solution.action._exercise_action import ExerciseAction_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_GetResult_Request(type):
    """Metaclass of message 'ExerciseAction_GetResult_Request'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_GetResult_Request(metaclass=Metaclass_ExerciseAction_GetResult_Request):
    """Message class 'ExerciseAction_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_GetResult_Response(type):
    """Metaclass of message 'ExerciseAction_GetResult_Response'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__get_result__response

            from ex_solution.action import ExerciseAction
            if ExerciseAction.Result.__class__._TYPE_SUPPORT is None:
                ExerciseAction.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_GetResult_Response(metaclass=Metaclass_ExerciseAction_GetResult_Response):
    """Message class 'ExerciseAction_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ex_solution/ExerciseAction_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ex_solution', 'action'], 'ExerciseAction_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ex_solution.action._exercise_action import ExerciseAction_Result
        self.result = kwargs.get('result', ExerciseAction_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ex_solution.action._exercise_action import ExerciseAction_Result
            assert \
                isinstance(value, ExerciseAction_Result), \
                "The 'result' field must be a sub message of type 'ExerciseAction_Result'"
        self._result = value


class Metaclass_ExerciseAction_GetResult(type):
    """Metaclass of service 'ExerciseAction_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__exercise_action__get_result

            from ex_solution.action import _exercise_action
            if _exercise_action.Metaclass_ExerciseAction_GetResult_Request._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_GetResult_Request.__import_type_support__()
            if _exercise_action.Metaclass_ExerciseAction_GetResult_Response._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_GetResult_Response.__import_type_support__()


class ExerciseAction_GetResult(metaclass=Metaclass_ExerciseAction_GetResult):
    from ex_solution.action._exercise_action import ExerciseAction_GetResult_Request as Request
    from ex_solution.action._exercise_action import ExerciseAction_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExerciseAction_FeedbackMessage(type):
    """Metaclass of message 'ExerciseAction_FeedbackMessage'."""

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
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__exercise_action__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__exercise_action__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__exercise_action__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__exercise_action__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__exercise_action__feedback_message

            from ex_solution.action import ExerciseAction
            if ExerciseAction.Feedback.__class__._TYPE_SUPPORT is None:
                ExerciseAction.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExerciseAction_FeedbackMessage(metaclass=Metaclass_ExerciseAction_FeedbackMessage):
    """Message class 'ExerciseAction_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ex_solution/ExerciseAction_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ex_solution', 'action'], 'ExerciseAction_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ex_solution.action._exercise_action import ExerciseAction_Feedback
        self.feedback = kwargs.get('feedback', ExerciseAction_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ex_solution.action._exercise_action import ExerciseAction_Feedback
            assert \
                isinstance(value, ExerciseAction_Feedback), \
                "The 'feedback' field must be a sub message of type 'ExerciseAction_Feedback'"
        self._feedback = value


class Metaclass_ExerciseAction(type):
    """Metaclass of action 'ExerciseAction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ex_solution')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ex_solution.action.ExerciseAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__exercise_action

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ex_solution.action import _exercise_action
            if _exercise_action.Metaclass_ExerciseAction_SendGoal._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_SendGoal.__import_type_support__()
            if _exercise_action.Metaclass_ExerciseAction_GetResult._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_GetResult.__import_type_support__()
            if _exercise_action.Metaclass_ExerciseAction_FeedbackMessage._TYPE_SUPPORT is None:
                _exercise_action.Metaclass_ExerciseAction_FeedbackMessage.__import_type_support__()


class ExerciseAction(metaclass=Metaclass_ExerciseAction):

    # The goal message defined in the action definition.
    from ex_solution.action._exercise_action import ExerciseAction_Goal as Goal
    # The result message defined in the action definition.
    from ex_solution.action._exercise_action import ExerciseAction_Result as Result
    # The feedback message defined in the action definition.
    from ex_solution.action._exercise_action import ExerciseAction_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ex_solution.action._exercise_action import ExerciseAction_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ex_solution.action._exercise_action import ExerciseAction_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ex_solution.action._exercise_action import ExerciseAction_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')

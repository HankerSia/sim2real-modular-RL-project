# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kinova_msgs/PoseVelocity.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PoseVelocity(genpy.Message):
  _md5sum = "37cb696ff239fbcc6aa4a04f7318d9da"
  _type = "kinova_msgs/PoseVelocity"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 twist_linear_x
float32 twist_linear_y
float32 twist_linear_z
float32 twist_angular_x
float32 twist_angular_y
float32 twist_angular_z
"""
  __slots__ = ['twist_linear_x','twist_linear_y','twist_linear_z','twist_angular_x','twist_angular_y','twist_angular_z']
  _slot_types = ['float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       twist_linear_x,twist_linear_y,twist_linear_z,twist_angular_x,twist_angular_y,twist_angular_z

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PoseVelocity, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.twist_linear_x is None:
        self.twist_linear_x = 0.
      if self.twist_linear_y is None:
        self.twist_linear_y = 0.
      if self.twist_linear_z is None:
        self.twist_linear_z = 0.
      if self.twist_angular_x is None:
        self.twist_angular_x = 0.
      if self.twist_angular_y is None:
        self.twist_angular_y = 0.
      if self.twist_angular_z is None:
        self.twist_angular_z = 0.
    else:
      self.twist_linear_x = 0.
      self.twist_linear_y = 0.
      self.twist_linear_z = 0.
      self.twist_angular_x = 0.
      self.twist_angular_y = 0.
      self.twist_angular_z = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_6f().pack(_x.twist_linear_x, _x.twist_linear_y, _x.twist_linear_z, _x.twist_angular_x, _x.twist_angular_y, _x.twist_angular_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.twist_linear_x, _x.twist_linear_y, _x.twist_linear_z, _x.twist_angular_x, _x.twist_angular_y, _x.twist_angular_z,) = _get_struct_6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6f().pack(_x.twist_linear_x, _x.twist_linear_y, _x.twist_linear_z, _x.twist_angular_x, _x.twist_angular_y, _x.twist_angular_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.twist_linear_x, _x.twist_linear_y, _x.twist_linear_z, _x.twist_angular_x, _x.twist_angular_y, _x.twist_angular_z,) = _get_struct_6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6f = None
def _get_struct_6f():
    global _struct_6f
    if _struct_6f is None:
        _struct_6f = struct.Struct("<6f")
    return _struct_6f
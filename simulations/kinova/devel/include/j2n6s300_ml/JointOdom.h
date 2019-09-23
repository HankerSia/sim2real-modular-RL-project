// Generated by gencpp from file j2n6s300_ml/JointOdom.msg
// DO NOT EDIT!


#ifndef J2N6S300_ML_MESSAGE_JOINTODOM_H
#define J2N6S300_ML_MESSAGE_JOINTODOM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/String.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/Float64.h>

namespace j2n6s300_ml
{
template <class ContainerAllocator>
struct JointOdom_
{
  typedef JointOdom_<ContainerAllocator> Type;

  JointOdom_()
    : header()
    , names()
    , poses()
    , twist()
    , velocity()  {
    }
  JointOdom_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , names(_alloc)
    , poses(_alloc)
    , twist(_alloc)
    , velocity(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::std_msgs::String_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::String_<ContainerAllocator> >::other >  _names_type;
  _names_type names;

   typedef std::vector< ::geometry_msgs::PoseArray_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseArray_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Twist_<ContainerAllocator> >::other >  _twist_type;
  _twist_type twist;

   typedef std::vector< ::std_msgs::Float64_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Float64_<ContainerAllocator> >::other >  _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::j2n6s300_ml::JointOdom_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::j2n6s300_ml::JointOdom_<ContainerAllocator> const> ConstPtr;

}; // struct JointOdom_

typedef ::j2n6s300_ml::JointOdom_<std::allocator<void> > JointOdom;

typedef boost::shared_ptr< ::j2n6s300_ml::JointOdom > JointOdomPtr;
typedef boost::shared_ptr< ::j2n6s300_ml::JointOdom const> JointOdomConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::j2n6s300_ml::JointOdom_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace j2n6s300_ml

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'j2n6s300_ml': ['/home/simon/sim2real/simulations/kinova/src/sim2Real_j2n6s300/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::j2n6s300_ml::JointOdom_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::j2n6s300_ml::JointOdom_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::j2n6s300_ml::JointOdom_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a11b0b66ccf504317c8c0454f9c74a7";
  }

  static const char* value(const ::j2n6s300_ml::JointOdom_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a11b0b66ccf5043ULL;
  static const uint64_t static_value2 = 0x17c8c0454f9c74a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "j2n6s300_ml/JointOdom";
  }

  static const char* value(const ::j2n6s300_ml::JointOdom_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A twist with reference coordinate frame and timestamp\n"
"std_msgs/Header header\n"
"std_msgs/String[] names\n"
"geometry_msgs/PoseArray[] poses\n"
"geometry_msgs/Twist[] twist\n"
"std_msgs/Float64[] velocity\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseArray\n"
"# An array of poses with a header for global reference.\n"
"\n"
"Header header\n"
"\n"
"Pose[] poses\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: std_msgs/Float64\n"
"float64 data\n"
;
  }

  static const char* value(const ::j2n6s300_ml::JointOdom_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.names);
      stream.next(m.poses);
      stream.next(m.twist);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointOdom_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::j2n6s300_ml::JointOdom_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::j2n6s300_ml::JointOdom_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "names[]" << std::endl;
    for (size_t i = 0; i < v.names.size(); ++i)
    {
      s << indent << "  names[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "    ", v.names[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
    s << indent << "twist[]" << std::endl;
    for (size_t i = 0; i < v.twist.size(); ++i)
    {
      s << indent << "  twist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.twist[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Float64_<ContainerAllocator> >::stream(s, indent + "    ", v.velocity[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // J2N6S300_ML_MESSAGE_JOINTODOM_H

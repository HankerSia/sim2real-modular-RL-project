// Generated by gencpp from file moveit_msgs/OrientedBoundingBox.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_ORIENTEDBOUNDINGBOX_H
#define MOVEIT_MSGS_MESSAGE_ORIENTEDBOUNDINGBOX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Point32.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct OrientedBoundingBox_
{
  typedef OrientedBoundingBox_<ContainerAllocator> Type;

  OrientedBoundingBox_()
    : pose()
    , extents()  {
    }
  OrientedBoundingBox_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , extents(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _extents_type;
  _extents_type extents;





  typedef boost::shared_ptr< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> const> ConstPtr;

}; // struct OrientedBoundingBox_

typedef ::moveit_msgs::OrientedBoundingBox_<std::allocator<void> > OrientedBoundingBox;

typedef boost::shared_ptr< ::moveit_msgs::OrientedBoundingBox > OrientedBoundingBoxPtr;
typedef boost::shared_ptr< ::moveit_msgs::OrientedBoundingBox const> OrientedBoundingBoxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/acis/sim2real/simulations/kinova/devel/.private/moveit_msgs/share/moveit_msgs/msg', '/home/acis/sim2real/simulations/kinova/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da3bd98e7cb14efa4141367a9d886ee7";
  }

  static const char* value(const ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda3bd98e7cb14efaULL;
  static const uint64_t static_value2 = 0x4141367a9d886ee7ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/OrientedBoundingBox";
  }

  static const char* value(const ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# the pose of the box\n"
"geometry_msgs/Pose pose\n"
"\n"
"# the extents of the box, assuming the center is at the origin\n"
"geometry_msgs/Point32 extents\n"
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
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.extents);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OrientedBoundingBox_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "extents: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.extents);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_ORIENTEDBOUNDINGBOX_H

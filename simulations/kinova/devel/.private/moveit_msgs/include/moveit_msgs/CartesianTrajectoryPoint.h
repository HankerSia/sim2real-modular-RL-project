// Generated by gencpp from file moveit_msgs/CartesianTrajectoryPoint.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_CARTESIANTRAJECTORYPOINT_H
#define MOVEIT_MSGS_MESSAGE_CARTESIANTRAJECTORYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/CartesianPoint.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct CartesianTrajectoryPoint_
{
  typedef CartesianTrajectoryPoint_<ContainerAllocator> Type;

  CartesianTrajectoryPoint_()
    : point()
    , time_from_start()  {
    }
  CartesianTrajectoryPoint_(const ContainerAllocator& _alloc)
    : point(_alloc)
    , time_from_start()  {
  (void)_alloc;
    }



   typedef  ::moveit_msgs::CartesianPoint_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef ros::Duration _time_from_start_type;
  _time_from_start_type time_from_start;





  typedef boost::shared_ptr< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianTrajectoryPoint_

typedef ::moveit_msgs::CartesianTrajectoryPoint_<std::allocator<void> > CartesianTrajectoryPoint;

typedef boost::shared_ptr< ::moveit_msgs::CartesianTrajectoryPoint > CartesianTrajectoryPointPtr;
typedef boost::shared_ptr< ::moveit_msgs::CartesianTrajectoryPoint const> CartesianTrajectoryPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e996ea294f646e6911b3e85e624f5acf";
  }

  static const char* value(const ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe996ea294f646e69ULL;
  static const uint64_t static_value2 = 0x11b3e85e624f5acfULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/CartesianTrajectoryPoint";
  }

  static const char* value(const ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The definition of a cartesian point in a trajectory. Defines the cartesian state of the point and it's time,\n"
"# following the pattern of the JointTrajectory message\n"
"CartesianPoint point\n"
"\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianPoint\n"
"# This message defines a point in a cartesian trajectory\n"
"geometry_msgs/Pose pose\n"
"geometry_msgs/Twist velocity\n"
"geometry_msgs/Accel acceleration\n"
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
"MSG: geometry_msgs/Accel\n"
"# This expresses acceleration in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
;
  }

  static const char* value(const ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
      stream.next(m.time_from_start);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianTrajectoryPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::CartesianTrajectoryPoint_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::moveit_msgs::CartesianPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "time_from_start: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_from_start);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_CARTESIANTRAJECTORYPOINT_H
// Generated by gencpp from file kinova_msgs/SetForceControlParamsRequest.msg
// DO NOT EDIT!


#ifndef KINOVA_MSGS_MESSAGE_SETFORCECONTROLPARAMSREQUEST_H
#define KINOVA_MSGS_MESSAGE_SETFORCECONTROLPARAMSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace kinova_msgs
{
template <class ContainerAllocator>
struct SetForceControlParamsRequest_
{
  typedef SetForceControlParamsRequest_<ContainerAllocator> Type;

  SetForceControlParamsRequest_()
    : inertia_linear()
    , inertia_angular()
    , damping_linear()
    , damping_angular()
    , force_min_linear()
    , force_min_angular()
    , force_max_linear()
    , force_max_angular()  {
    }
  SetForceControlParamsRequest_(const ContainerAllocator& _alloc)
    : inertia_linear(_alloc)
    , inertia_angular(_alloc)
    , damping_linear(_alloc)
    , damping_angular(_alloc)
    , force_min_linear(_alloc)
    , force_min_angular(_alloc)
    , force_max_linear(_alloc)
    , force_max_angular(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _inertia_linear_type;
  _inertia_linear_type inertia_linear;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _inertia_angular_type;
  _inertia_angular_type inertia_angular;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _damping_linear_type;
  _damping_linear_type damping_linear;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _damping_angular_type;
  _damping_angular_type damping_angular;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_min_linear_type;
  _force_min_linear_type force_min_linear;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_min_angular_type;
  _force_min_angular_type force_min_angular;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_max_linear_type;
  _force_max_linear_type force_max_linear;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_max_angular_type;
  _force_max_angular_type force_max_angular;





  typedef boost::shared_ptr< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetForceControlParamsRequest_

typedef ::kinova_msgs::SetForceControlParamsRequest_<std::allocator<void> > SetForceControlParamsRequest;

typedef boost::shared_ptr< ::kinova_msgs::SetForceControlParamsRequest > SetForceControlParamsRequestPtr;
typedef boost::shared_ptr< ::kinova_msgs::SetForceControlParamsRequest const> SetForceControlParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kinova_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'kinova_msgs': ['/home/acis/sim2real/simulations/kinova/src/kinova-ros/kinova_msgs/msg', '/home/acis/sim2real/simulations/kinova/devel/share/kinova_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c0999be3d1c60dba47ea0b2fd08231e";
  }

  static const char* value(const ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c0999be3d1c60dbULL;
  static const uint64_t static_value2 = 0xa47ea0b2fd08231eULL;
};

template<class ContainerAllocator>
struct DataType< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kinova_msgs/SetForceControlParamsRequest";
  }

  static const char* value(const ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 inertia_linear\n"
"geometry_msgs/Vector3 inertia_angular\n"
"geometry_msgs/Vector3 damping_linear\n"
"geometry_msgs/Vector3 damping_angular\n"
"geometry_msgs/Vector3 force_min_linear\n"
"geometry_msgs/Vector3 force_min_angular\n"
"geometry_msgs/Vector3 force_max_linear\n"
"geometry_msgs/Vector3 force_max_angular\n"
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
;
  }

  static const char* value(const ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.inertia_linear);
      stream.next(m.inertia_angular);
      stream.next(m.damping_linear);
      stream.next(m.damping_angular);
      stream.next(m.force_min_linear);
      stream.next(m.force_min_angular);
      stream.next(m.force_max_linear);
      stream.next(m.force_max_angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetForceControlParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kinova_msgs::SetForceControlParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "inertia_linear: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.inertia_linear);
    s << indent << "inertia_angular: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.inertia_angular);
    s << indent << "damping_linear: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.damping_linear);
    s << indent << "damping_angular: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.damping_angular);
    s << indent << "force_min_linear: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force_min_linear);
    s << indent << "force_min_angular: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force_min_angular);
    s << indent << "force_max_linear: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force_max_linear);
    s << indent << "force_max_angular: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force_max_angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINOVA_MSGS_MESSAGE_SETFORCECONTROLPARAMSREQUEST_H

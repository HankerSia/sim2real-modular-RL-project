// Generated by gencpp from file kinova_msgs/SetFingersPositionFeedback.msg
// DO NOT EDIT!


#ifndef KINOVA_MSGS_MESSAGE_SETFINGERSPOSITIONFEEDBACK_H
#define KINOVA_MSGS_MESSAGE_SETFINGERSPOSITIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kinova_msgs/FingerPosition.h>

namespace kinova_msgs
{
template <class ContainerAllocator>
struct SetFingersPositionFeedback_
{
  typedef SetFingersPositionFeedback_<ContainerAllocator> Type;

  SetFingersPositionFeedback_()
    : fingers()  {
    }
  SetFingersPositionFeedback_(const ContainerAllocator& _alloc)
    : fingers(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kinova_msgs::FingerPosition_<ContainerAllocator>  _fingers_type;
  _fingers_type fingers;





  typedef boost::shared_ptr< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct SetFingersPositionFeedback_

typedef ::kinova_msgs::SetFingersPositionFeedback_<std::allocator<void> > SetFingersPositionFeedback;

typedef boost::shared_ptr< ::kinova_msgs::SetFingersPositionFeedback > SetFingersPositionFeedbackPtr;
typedef boost::shared_ptr< ::kinova_msgs::SetFingersPositionFeedback const> SetFingersPositionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kinova_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'kinova_msgs': ['/home/acis/sim2real/simulations/kinova/src/kinova-ros/kinova_msgs/msg', '/home/acis/sim2real/simulations/kinova/devel/.private/kinova_msgs/share/kinova_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bdbf88b45be6ef8cd65f0b4fc487d49d";
  }

  static const char* value(const ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbdbf88b45be6ef8cULL;
  static const uint64_t static_value2 = 0xd65f0b4fc487d49dULL;
};

template<class ContainerAllocator>
struct DataType< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kinova_msgs/SetFingersPositionFeedback";
  }

  static const char* value(const ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Feedback message\n"
"FingerPosition fingers\n"
"\n"
"\n"
"================================================================================\n"
"MSG: kinova_msgs/FingerPosition\n"
"float32 finger1\n"
"float32 finger2\n"
"float32 finger3\n"
;
  }

  static const char* value(const ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fingers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetFingersPositionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kinova_msgs::SetFingersPositionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "fingers: ";
    s << std::endl;
    Printer< ::kinova_msgs::FingerPosition_<ContainerAllocator> >::stream(s, indent + "  ", v.fingers);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINOVA_MSGS_MESSAGE_SETFINGERSPOSITIONFEEDBACK_H

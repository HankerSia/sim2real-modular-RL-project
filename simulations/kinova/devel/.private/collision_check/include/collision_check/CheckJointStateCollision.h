// Generated by gencpp from file collision_check/CheckJointStateCollision.msg
// DO NOT EDIT!


#ifndef COLLISION_CHECK_MESSAGE_CHECKJOINTSTATECOLLISION_H
#define COLLISION_CHECK_MESSAGE_CHECKJOINTSTATECOLLISION_H

#include <ros/service_traits.h>


#include <collision_check/CheckJointStateCollisionRequest.h>
#include <collision_check/CheckJointStateCollisionResponse.h>


namespace collision_check
{

struct CheckJointStateCollision
{

typedef CheckJointStateCollisionRequest Request;
typedef CheckJointStateCollisionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckJointStateCollision
} // namespace collision_check


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::collision_check::CheckJointStateCollision > {
  static const char* value()
  {
    return "95d7107aa9a79f1c107abc9acf788b2f";
  }

  static const char* value(const ::collision_check::CheckJointStateCollision&) { return value(); }
};

template<>
struct DataType< ::collision_check::CheckJointStateCollision > {
  static const char* value()
  {
    return "collision_check/CheckJointStateCollision";
  }

  static const char* value(const ::collision_check::CheckJointStateCollision&) { return value(); }
};


// service_traits::MD5Sum< ::collision_check::CheckJointStateCollisionRequest> should match 
// service_traits::MD5Sum< ::collision_check::CheckJointStateCollision > 
template<>
struct MD5Sum< ::collision_check::CheckJointStateCollisionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::collision_check::CheckJointStateCollision >::value();
  }
  static const char* value(const ::collision_check::CheckJointStateCollisionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::collision_check::CheckJointStateCollisionRequest> should match 
// service_traits::DataType< ::collision_check::CheckJointStateCollision > 
template<>
struct DataType< ::collision_check::CheckJointStateCollisionRequest>
{
  static const char* value()
  {
    return DataType< ::collision_check::CheckJointStateCollision >::value();
  }
  static const char* value(const ::collision_check::CheckJointStateCollisionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::collision_check::CheckJointStateCollisionResponse> should match 
// service_traits::MD5Sum< ::collision_check::CheckJointStateCollision > 
template<>
struct MD5Sum< ::collision_check::CheckJointStateCollisionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::collision_check::CheckJointStateCollision >::value();
  }
  static const char* value(const ::collision_check::CheckJointStateCollisionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::collision_check::CheckJointStateCollisionResponse> should match 
// service_traits::DataType< ::collision_check::CheckJointStateCollision > 
template<>
struct DataType< ::collision_check::CheckJointStateCollisionResponse>
{
  static const char* value()
  {
    return DataType< ::collision_check::CheckJointStateCollision >::value();
  }
  static const char* value(const ::collision_check::CheckJointStateCollisionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COLLISION_CHECK_MESSAGE_CHECKJOINTSTATECOLLISION_H

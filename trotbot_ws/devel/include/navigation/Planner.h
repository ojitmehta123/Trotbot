// Generated by gencpp from file navigation/Planner.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MESSAGE_PLANNER_H
#define NAVIGATION_MESSAGE_PLANNER_H

#include <ros/service_traits.h>


#include <navigation/PlannerRequest.h>
#include <navigation/PlannerResponse.h>


namespace navigation
{

struct Planner
{

typedef PlannerRequest Request;
typedef PlannerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Planner
} // namespace navigation


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::navigation::Planner > {
  static const char* value()
  {
    return "59d496e471e2ce1a2e0dd836fb1cdfb4";
  }

  static const char* value(const ::navigation::Planner&) { return value(); }
};

template<>
struct DataType< ::navigation::Planner > {
  static const char* value()
  {
    return "navigation/Planner";
  }

  static const char* value(const ::navigation::Planner&) { return value(); }
};


// service_traits::MD5Sum< ::navigation::PlannerRequest> should match 
// service_traits::MD5Sum< ::navigation::Planner > 
template<>
struct MD5Sum< ::navigation::PlannerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::navigation::Planner >::value();
  }
  static const char* value(const ::navigation::PlannerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::navigation::PlannerRequest> should match 
// service_traits::DataType< ::navigation::Planner > 
template<>
struct DataType< ::navigation::PlannerRequest>
{
  static const char* value()
  {
    return DataType< ::navigation::Planner >::value();
  }
  static const char* value(const ::navigation::PlannerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::navigation::PlannerResponse> should match 
// service_traits::MD5Sum< ::navigation::Planner > 
template<>
struct MD5Sum< ::navigation::PlannerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::navigation::Planner >::value();
  }
  static const char* value(const ::navigation::PlannerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::navigation::PlannerResponse> should match 
// service_traits::DataType< ::navigation::Planner > 
template<>
struct DataType< ::navigation::PlannerResponse>
{
  static const char* value()
  {
    return DataType< ::navigation::Planner >::value();
  }
  static const char* value(const ::navigation::PlannerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAVIGATION_MESSAGE_PLANNER_H
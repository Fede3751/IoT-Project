// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iot_project_interfaces:srv/TargetManagerInterface.idl
// generated code does not contain a copyright notice

#ifndef IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__TRAITS_HPP_
#define IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iot_project_interfaces/srv/detail/target_manager_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iot_project_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetManagerInterface_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetManagerInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetManagerInterface_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace iot_project_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iot_project_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iot_project_interfaces::srv::TargetManagerInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iot_project_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iot_project_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iot_project_interfaces::srv::TargetManagerInterface_Request & msg)
{
  return iot_project_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iot_project_interfaces::srv::TargetManagerInterface_Request>()
{
  return "iot_project_interfaces::srv::TargetManagerInterface_Request";
}

template<>
inline const char * name<iot_project_interfaces::srv::TargetManagerInterface_Request>()
{
  return "iot_project_interfaces/srv/TargetManagerInterface_Request";
}

template<>
struct has_fixed_size<iot_project_interfaces::srv::TargetManagerInterface_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iot_project_interfaces::srv::TargetManagerInterface_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iot_project_interfaces::srv::TargetManagerInterface_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'targets'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace iot_project_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetManagerInterface_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expiration_times
  {
    if (msg.expiration_times.size() == 0) {
      out << "expiration_times: []";
    } else {
      out << "expiration_times: [";
      size_t pending_items = msg.expiration_times.size();
      for (auto item : msg.expiration_times) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: last_visits
  {
    if (msg.last_visits.size() == 0) {
      out << "last_visits: []";
    } else {
      out << "last_visits: [";
      size_t pending_items = msg.last_visits.size();
      for (auto item : msg.last_visits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetManagerInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: expiration_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expiration_times.size() == 0) {
      out << "expiration_times: []\n";
    } else {
      out << "expiration_times:\n";
      for (auto item : msg.expiration_times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: last_visits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.last_visits.size() == 0) {
      out << "last_visits: []\n";
    } else {
      out << "last_visits:\n";
      for (auto item : msg.last_visits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetManagerInterface_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace iot_project_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iot_project_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iot_project_interfaces::srv::TargetManagerInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iot_project_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iot_project_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iot_project_interfaces::srv::TargetManagerInterface_Response & msg)
{
  return iot_project_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iot_project_interfaces::srv::TargetManagerInterface_Response>()
{
  return "iot_project_interfaces::srv::TargetManagerInterface_Response";
}

template<>
inline const char * name<iot_project_interfaces::srv::TargetManagerInterface_Response>()
{
  return "iot_project_interfaces/srv/TargetManagerInterface_Response";
}

template<>
struct has_fixed_size<iot_project_interfaces::srv::TargetManagerInterface_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iot_project_interfaces::srv::TargetManagerInterface_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iot_project_interfaces::srv::TargetManagerInterface_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iot_project_interfaces::srv::TargetManagerInterface>()
{
  return "iot_project_interfaces::srv::TargetManagerInterface";
}

template<>
inline const char * name<iot_project_interfaces::srv::TargetManagerInterface>()
{
  return "iot_project_interfaces/srv/TargetManagerInterface";
}

template<>
struct has_fixed_size<iot_project_interfaces::srv::TargetManagerInterface>
  : std::integral_constant<
    bool,
    has_fixed_size<iot_project_interfaces::srv::TargetManagerInterface_Request>::value &&
    has_fixed_size<iot_project_interfaces::srv::TargetManagerInterface_Response>::value
  >
{
};

template<>
struct has_bounded_size<iot_project_interfaces::srv::TargetManagerInterface>
  : std::integral_constant<
    bool,
    has_bounded_size<iot_project_interfaces::srv::TargetManagerInterface_Request>::value &&
    has_bounded_size<iot_project_interfaces::srv::TargetManagerInterface_Response>::value
  >
{
};

template<>
struct is_service<iot_project_interfaces::srv::TargetManagerInterface>
  : std::true_type
{
};

template<>
struct is_service_request<iot_project_interfaces::srv::TargetManagerInterface_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iot_project_interfaces::srv::TargetManagerInterface_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IOT_PROJECT_INTERFACES__SRV__DETAIL__TARGET_MANAGER_INTERFACE__TRAITS_HPP_

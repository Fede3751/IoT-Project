// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iot_project_interfaces:srv/ColorTarget.idl
// generated code does not contain a copyright notice
#include "iot_project_interfaces/srv/detail/color_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iot_project_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iot_project_interfaces/srv/detail/color_target__struct.h"
#include "iot_project_interfaces/srv/detail/color_target__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // target
#include "rosidl_runtime_c/string_functions.h"  // target

// forward declare type support functions


using _ColorTarget_Request__ros_msg_type = iot_project_interfaces__srv__ColorTarget_Request;

static bool _ColorTarget_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ColorTarget_Request__ros_msg_type * ros_message = static_cast<const _ColorTarget_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    const rosidl_runtime_c__String * str = &ros_message->target;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: r
  {
    cdr << ros_message->r;
  }

  // Field name: g
  {
    cdr << ros_message->g;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  return true;
}

static bool _ColorTarget_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ColorTarget_Request__ros_msg_type * ros_message = static_cast<_ColorTarget_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target.data) {
      rosidl_runtime_c__String__init(&ros_message->target);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target'\n");
      return false;
    }
  }

  // Field name: r
  {
    cdr >> ros_message->r;
  }

  // Field name: g
  {
    cdr >> ros_message->g;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: a
  {
    cdr >> ros_message->a;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iot_project_interfaces
size_t get_serialized_size_iot_project_interfaces__srv__ColorTarget_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ColorTarget_Request__ros_msg_type * ros_message = static_cast<const _ColorTarget_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target.size + 1);
  // field.name r
  {
    size_t item_size = sizeof(ros_message->r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name g
  {
    size_t item_size = sizeof(ros_message->g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ColorTarget_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iot_project_interfaces__srv__ColorTarget_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iot_project_interfaces
size_t max_serialized_size_iot_project_interfaces__srv__ColorTarget_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: target
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: g
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ColorTarget_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iot_project_interfaces__srv__ColorTarget_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ColorTarget_Request = {
  "iot_project_interfaces::srv",
  "ColorTarget_Request",
  _ColorTarget_Request__cdr_serialize,
  _ColorTarget_Request__cdr_deserialize,
  _ColorTarget_Request__get_serialized_size,
  _ColorTarget_Request__max_serialized_size
};

static rosidl_message_type_support_t _ColorTarget_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ColorTarget_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iot_project_interfaces, srv, ColorTarget_Request)() {
  return &_ColorTarget_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "iot_project_interfaces/srv/detail/color_target__struct.h"
// already included above
// #include "iot_project_interfaces/srv/detail/color_target__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ColorTarget_Response__ros_msg_type = iot_project_interfaces__srv__ColorTarget_Response;

static bool _ColorTarget_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ColorTarget_Response__ros_msg_type * ros_message = static_cast<const _ColorTarget_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _ColorTarget_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ColorTarget_Response__ros_msg_type * ros_message = static_cast<_ColorTarget_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iot_project_interfaces
size_t get_serialized_size_iot_project_interfaces__srv__ColorTarget_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ColorTarget_Response__ros_msg_type * ros_message = static_cast<const _ColorTarget_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ColorTarget_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iot_project_interfaces__srv__ColorTarget_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iot_project_interfaces
size_t max_serialized_size_iot_project_interfaces__srv__ColorTarget_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ColorTarget_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iot_project_interfaces__srv__ColorTarget_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ColorTarget_Response = {
  "iot_project_interfaces::srv",
  "ColorTarget_Response",
  _ColorTarget_Response__cdr_serialize,
  _ColorTarget_Response__cdr_deserialize,
  _ColorTarget_Response__get_serialized_size,
  _ColorTarget_Response__max_serialized_size
};

static rosidl_message_type_support_t _ColorTarget_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ColorTarget_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iot_project_interfaces, srv, ColorTarget_Response)() {
  return &_ColorTarget_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "iot_project_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iot_project_interfaces/srv/color_target.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ColorTarget__callbacks = {
  "iot_project_interfaces::srv",
  "ColorTarget",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iot_project_interfaces, srv, ColorTarget_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iot_project_interfaces, srv, ColorTarget_Response)(),
};

static rosidl_service_type_support_t ColorTarget__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ColorTarget__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iot_project_interfaces, srv, ColorTarget)() {
  return &ColorTarget__handle;
}

#if defined(__cplusplus)
}
#endif

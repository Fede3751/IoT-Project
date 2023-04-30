# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_iot_project_target_animator_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED iot_project_target_animator_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(iot_project_target_animator_FOUND FALSE)
  elseif(NOT iot_project_target_animator_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(iot_project_target_animator_FOUND FALSE)
  endif()
  return()
endif()
set(_iot_project_target_animator_CONFIG_INCLUDED TRUE)

# output package information
if(NOT iot_project_target_animator_FIND_QUIETLY)
  message(STATUS "Found iot_project_target_animator: 0.0.0 (${iot_project_target_animator_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'iot_project_target_animator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${iot_project_target_animator_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(iot_project_target_animator_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${iot_project_target_animator_DIR}/${_extra}")
endforeach()

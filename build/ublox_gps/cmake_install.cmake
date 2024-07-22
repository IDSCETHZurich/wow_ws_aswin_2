# Install script for directory: /home/pi/test_ws/src/ublox/ublox_gps

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/pi/test_ws/install/ublox_gps")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pi/test_ws/build/ublox_gps/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/test_ws/build/ublox_gps/libublox_gps.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so"
         OLD_RPATH "/home/pi/ros2_iron/install/diagnostic_msgs/lib:/home/pi/ros2_iron/install/builtin_interfaces/lib:/home/pi/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/pi/ros2_iron/install/rmw/lib:/home/pi/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/pi/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/pi/ros2_iron/install/rcpputils/lib:/home/pi/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/pi/ros2_iron/install/rcutils/lib:/home/pi/ros2_iron/install/rosidl_runtime_c/lib:/home/pi/ros2_iron/install/rosgraph_msgs/lib:/home/pi/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/pi/ros2_iron/install/rosidl_typesupport_c/lib:/home/pi/ros2_iron/install/rcl_yaml_param_parser/lib:/home/pi/ros2_iron/install/statistics_msgs/lib:/home/pi/ros2_iron/install/tracetools/lib:/home/pi/ros2_iron/install/rclcpp/lib:/home/pi/ros2_iron/install/std_msgs/lib:/home/pi/wow_ws/install/nmea_msgs/lib:/home/pi/wow_ws/install/rtcm_msgs/lib:/home/pi/ros2_iron/install/tf2/lib:/home/pi/test_ws/install/ublox_msgs/lib:/home/pi/ros2_iron/install/libstatistics_collector/lib:/home/pi/ros2_iron/install/rcl/lib:/home/pi/ros2_iron/install/rcl_logging_interface/lib:/home/pi/ros2_iron/install/rmw_implementation/lib:/home/pi/ros2_iron/install/ament_index_cpp/lib:/home/pi/ros2_iron/install/type_description_interfaces/lib:/home/pi/ros2_iron/install/rcl_interfaces/lib:/home/pi/ros2_iron/install/class_loader/lib:/home/pi/ros2_iron/install/sensor_msgs/lib:/home/pi/ros2_iron/install/service_msgs/lib:/home/pi/ros2_iron/install/geometry_msgs/lib:/home/pi/ros2_iron/install/fastcdr/lib:/home/pi/ros2_iron/install/rosidl_dynamic_typesupport/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libublox_gps.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ublox_gps/cmake/export_ublox_gpsExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ublox_gps/cmake/export_ublox_gpsExport.cmake"
         "/home/pi/test_ws/build/ublox_gps/CMakeFiles/Export/58900e1cc446344374a85d75a3db0f15/export_ublox_gpsExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ublox_gps/cmake/export_ublox_gpsExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ublox_gps/cmake/export_ublox_gpsExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ublox_gps/cmake" TYPE FILE FILES "/home/pi/test_ws/build/ublox_gps/CMakeFiles/Export/58900e1cc446344374a85d75a3db0f15/export_ublox_gpsExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ublox_gps/cmake" TYPE FILE FILES "/home/pi/test_ws/build/ublox_gps/CMakeFiles/Export/58900e1cc446344374a85d75a3db0f15/export_ublox_gpsExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/pi/test_ws/build/ublox_gps/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

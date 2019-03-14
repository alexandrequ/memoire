# Install script for directory: /Users/alexandrequintart/soft/jsbsim/src/models/flight_control

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/alexandrequintart/soft/jsbsim_lib/jsbsim_modif")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JSBSim/models/flight_control" TYPE FILE FILES
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGDeadBand.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGFCSComponent.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGFilter.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGGain.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGKinemat.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGSummer.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGSwitch.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGFCSFunction.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGSensor.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGPID.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGActuator.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGAccelerometer.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGGyro.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGMagnetometer.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGSensorOrientation.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGAngles.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGWaypoint.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGDistributor.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/flight_control/FGLinearActuator.h"
    )
endif()


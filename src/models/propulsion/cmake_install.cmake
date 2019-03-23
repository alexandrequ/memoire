# Install script for directory: /Users/alexandrequintart/soft/jsbsim/src/models/propulsion

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JSBSim/models/propulsion" TYPE FILE FILES
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGElectric.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGEngine.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGForce.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGNozzle.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGPiston.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGPropeller.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGRocket.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGTank.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGThruster.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGTurbine.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGTurboProp.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGTransmission.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/propulsion/FGRotor.h"
    )
endif()


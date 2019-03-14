# Install script for directory: /Users/alexandrequintart/soft/jsbsim/src/models

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JSBSim/models" TYPE FILE FILES
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGAerodynamics.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGAircraft.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGAtmosphere.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGAuxiliary.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGFCS.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGSurface.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGGroundReactions.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGInertial.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGLGear.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGMassBalance.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGModel.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGOutput.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGPropagate.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGPropulsion.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGInput.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGExternalReactions.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGExternalForce.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGBuoyantForces.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGGasCell.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGAccelerations.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/FGFCSChannel.h"
    "/Users/alexandrequintart/soft/jsbsim/src/models/gridWAPT.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/alexandrequintart/soft/jsbsim/build/src/models/atmosphere/cmake_install.cmake")
  include("/Users/alexandrequintart/soft/jsbsim/build/src/models/propulsion/cmake_install.cmake")
  include("/Users/alexandrequintart/soft/jsbsim/build/src/models/flight_control/cmake_install.cmake")

endif()


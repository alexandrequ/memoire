# Install script for directory: /Users/alexandrequintart/soft/jsbsim/src/math

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JSBSim/math" TYPE FILE FILES
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGColumnVector3.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGFunction.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGLocation.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGMatrix33.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGParameter.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGPropertyValue.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGQuaternion.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGRealValue.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGTable.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGCondition.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGRungeKutta.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGModelFunctions.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/LagrangeMultiplier.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGTemplateFunc.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGFunctionValue.h"
    "/Users/alexandrequintart/soft/jsbsim/src/math/FGParameterValue.h"
    )
endif()

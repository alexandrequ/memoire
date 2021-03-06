# Install script for directory: /Users/alexandrequintart/soft/jsbsim/src/input_output

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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JSBSim/input_output" TYPE FILE FILES
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGGroundCallback.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGPropertyManager.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGScript.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGXMLElement.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGXMLParse.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGfdmSocket.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGXMLFileRead.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/net_fdm.hxx"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/string_utilities.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGOutputType.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGOutputFG.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGOutputSocket.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGOutputFile.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGOutputTextFile.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGPropertyReader.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGModelLoader.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGInputType.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGInputSocket.h"
    "/Users/alexandrequintart/soft/jsbsim/src/input_output/FGUDPInputSocket.h"
    )
endif()


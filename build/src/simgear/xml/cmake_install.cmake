# Install script for directory: /Users/alexandrequintart/soft/jsbsim/src/simgear/xml

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JSBSim/simgear/xml" TYPE FILE FILES
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/easyxml.hxx"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/ascii.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/asciitab.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/expat.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/expat_external.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/iasciitab.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/internal.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/latin1tab.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/macconfig.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/nametab.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/utf8tab.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/winconfig.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlrole.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmltok.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmltok_impl.h"
    "/Users/alexandrequintart/soft/jsbsim/src/simgear/xml/expat_config.h"
    )
endif()


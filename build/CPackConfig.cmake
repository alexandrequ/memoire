# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_7Z "")
SET(CPACK_BINARY_BUNDLE "OFF")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "OFF")
SET(CPACK_BINARY_DRAGNDROP "OFF")
SET(CPACK_BINARY_IFW "OFF")
SET(CPACK_BINARY_NSIS "OFF")
SET(CPACK_BINARY_OSXX11 "OFF")
SET(CPACK_BINARY_PACKAGEMAKER "OFF")
SET(CPACK_BINARY_RPM "OFF")
SET(CPACK_BINARY_STGZ "ON")
SET(CPACK_BINARY_TBZ2 "OFF")
SET(CPACK_BINARY_TGZ "ON")
SET(CPACK_BINARY_TXZ "OFF")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENTS_ALL "devel;runtime")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_DEBIAN_DEVEL_FILE_NAME "JSBSim-devel_1.0.0.dev1.x86_64.deb")
SET(CPACK_DEBIAN_PACKAGE_SECTION "science")
SET(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "ON")
SET(CPACK_DEBIAN_PYMODULES_FILE_NAME "python3-JSBSim_1.0.0.dev1.x86_64.deb")
SET(CPACK_DEBIAN_PYMODULES_PACKAGE_NAME "python3-jsbsim")
SET(CPACK_DEBIAN_RUNTIME_FILE_NAME "JSBSim_1.0.0.dev1.x86_64.deb")
SET(CPACK_DEBIAN_RUNTIME_PACKAGE_NAME "jsbsim")
SET(CPACK_DEB_COMPONENT_INSTALL "ON")
SET(CPACK_GENERATOR "STGZ;TGZ")
SET(CPACK_INSTALL_CMAKE_PROJECTS "/Users/alexandrequintart/soft/jsbsim/build;JSBSim;ALL;/")
SET(CPACK_INSTALL_PREFIX "/Users/alexandrequintart/soft/jsbsim_lib/jsbsim_modif")
SET(CPACK_MODULE_PATH "/Users/alexandrequintart/soft/jsbsim/python/CMakeModules")
SET(CPACK_NSIS_DISPLAY_NAME "jsbsim 1.0.0.dev1")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "jsbsim 1.0.0.dev1")
SET(CPACK_OUTPUT_CONFIG_FILE "/Users/alexandrequintart/soft/jsbsim/build/CPackConfig.cmake")
SET(CPACK_PACKAGE_CONTACT "jsbsim-devel@lists.sourceforge.net")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/Users/alexandrequintart/soft/jsbsim/README.md")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "JSBSim, an open source, platform-independent, flight dynamics & control software library in C++.")
SET(CPACK_PACKAGE_FILE_NAME "JSBSim_1.0.0.dev1.x86_64")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "jsbsim 1.0.0.dev1")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "jsbsim 1.0.0.dev1")
SET(CPACK_PACKAGE_NAME "jsbsim")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "The JSBSim team")
SET(CPACK_PACKAGE_VERSION "1.0.0.dev1")
SET(CPACK_PACKAGE_VERSION_MAJOR "1")
SET(CPACK_PACKAGE_VERSION_MINOR "0")
SET(CPACK_PACKAGE_VERSION_PATCH "0.dev1")
SET(CPACK_RESOURCE_FILE_LICENSE "/Users/alexandrequintart/soft/jsbsim/COPYING")
SET(CPACK_RESOURCE_FILE_README "/Users/alexandrequintart/soft/jsbsim/README.md")
SET(CPACK_RESOURCE_FILE_WELCOME "/Applications/CMake.app/Contents/share/cmake-3.5/Templates/CPack.GenericWelcome.txt")
SET(CPACK_RPM_COMPONENT_INSTALL "ON")
SET(CPACK_RPM_DEVEL_FILE_NAME "JSBSim-devel_1.0.0.dev1.x86_64.rpm")
SET(CPACK_RPM_PACKAGE_LICENSE "LGPL-2.1")
SET(CPACK_RPM_PYMODULES_FILE_NAME "python3-JSBSim_1.0.0.dev1.x86_64.rpm")
SET(CPACK_RPM_PYMODULES_PACKAGE_NAME "python3-jsbsim")
SET(CPACK_RPM_RUNTIME_FILE_NAME "JSBSim_1.0.0.dev1.x86_64.rpm")
SET(CPACK_RPM_RUNTIME_PACKAGE_NAME "jsbsim")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_7Z "")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
SET(CPACK_SOURCE_IGNORE_FILES "/Users/alexandrequintart/soft/jsbsim/build/;/admin/;/autom4te.cache;/Makefile$;/Makefile.in$;depcomp$;install-sh$;libtool$;ltmain.sh;missing;/.*\\.csv$;/.*\\.o$;/.*\\.a$;/.*\\.m4$;/.cvsignore$;config.guess;config.log;config.status;config.sub;configure$;/JSBSim$;/.deps/;/.libs/;/CVS/;TAGS;")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/Users/alexandrequintart/soft/jsbsim/build/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_TBZ2 "ON")
SET(CPACK_SOURCE_TGZ "ON")
SET(CPACK_SOURCE_TXZ "ON")
SET(CPACK_SOURCE_TZ "ON")
SET(CPACK_SOURCE_ZIP "OFF")
SET(CPACK_SYSTEM_NAME "Darwin")
SET(CPACK_TOPLEVEL_TAG "Darwin")
SET(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/Users/alexandrequintart/soft/jsbsim/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()

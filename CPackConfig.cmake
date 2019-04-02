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


set(CPACK_BINARY_7Z "")
set(CPACK_BINARY_BUNDLE "OFF")
set(CPACK_BINARY_CYGWIN "")
set(CPACK_BINARY_DEB "OFF")
set(CPACK_BINARY_DRAGNDROP "OFF")
set(CPACK_BINARY_FREEBSD "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_NSIS "OFF")
set(CPACK_BINARY_NUGET "")
set(CPACK_BINARY_OSXX11 "OFF")
set(CPACK_BINARY_PACKAGEMAKER "OFF")
set(CPACK_BINARY_PRODUCTBUILD "OFF")
set(CPACK_BINARY_RPM "OFF")
set(CPACK_BINARY_STGZ "ON")
set(CPACK_BINARY_TBZ2 "OFF")
set(CPACK_BINARY_TGZ "ON")
set(CPACK_BINARY_TXZ "OFF")
set(CPACK_BINARY_TZ "")
set(CPACK_BINARY_WIX "")
set(CPACK_BINARY_ZIP "")
set(CPACK_BUILD_SOURCE_DIRS "/Users/alexandrequintart/soft/jsbsim;/Users/alexandrequintart/soft/jsbsim")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "devel;runtime")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_DEVEL_FILE_NAME "JSBSim-devel_1.0.0.dev1.x86_64.deb")
set(CPACK_DEBIAN_PACKAGE_SECTION "science")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "ON")
set(CPACK_DEBIAN_PYMODULES_FILE_NAME "python3-JSBSim_1.0.0.dev1.x86_64.deb")
set(CPACK_DEBIAN_PYMODULES_PACKAGE_NAME "python3-jsbsim")
set(CPACK_DEBIAN_RUNTIME_FILE_NAME "JSBSim_1.0.0.dev1.x86_64.deb")
set(CPACK_DEBIAN_RUNTIME_PACKAGE_NAME "jsbsim")
set(CPACK_DEB_COMPONENT_INSTALL "ON")
set(CPACK_GENERATOR "STGZ;TGZ")
set(CPACK_INSTALL_CMAKE_PROJECTS "/Users/alexandrequintart/soft/jsbsim;JSBSim;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/Users/alexandrequintart/soft/jsbsim/python/CMakeModules")
set(CPACK_NSIS_DISPLAY_NAME "jsbsim 1.0.0.dev1")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "jsbsim 1.0.0.dev1")
set(CPACK_OUTPUT_CONFIG_FILE "/Users/alexandrequintart/soft/jsbsim/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "jsbsim-devel@lists.sourceforge.net")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/Users/alexandrequintart/soft/jsbsim/README.md")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "JSBSim, an open source, platform-independent, flight dynamics & control software library in C++.")
set(CPACK_PACKAGE_FILE_NAME "JSBSim_1.0.0.dev1.x86_64")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "jsbsim 1.0.0.dev1")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "jsbsim 1.0.0.dev1")
set(CPACK_PACKAGE_NAME "jsbsim")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "The JSBSim team")
set(CPACK_PACKAGE_VERSION "1.0.0.dev1")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0.dev1")
set(CPACK_RESOURCE_FILE_LICENSE "/Users/alexandrequintart/soft/jsbsim/COPYING")
set(CPACK_RESOURCE_FILE_README "/Users/alexandrequintart/soft/jsbsim/README.md")
set(CPACK_RESOURCE_FILE_WELCOME "/Applications/CMake.app/Contents/share/cmake-3.14/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_COMPONENT_INSTALL "ON")
set(CPACK_RPM_DEVEL_FILE_NAME "JSBSim-devel_1.0.0.dev1.x86_64.rpm")
set(CPACK_RPM_PACKAGE_LICENSE "LGPL-2.1")
set(CPACK_RPM_PYMODULES_FILE_NAME "python3-JSBSim_1.0.0.dev1.x86_64.rpm")
set(CPACK_RPM_PYMODULES_PACKAGE_NAME "python3-jsbsim")
set(CPACK_RPM_RUNTIME_FILE_NAME "JSBSim_1.0.0.dev1.x86_64.rpm")
set(CPACK_RPM_RUNTIME_PACKAGE_NAME "jsbsim")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "")
set(CPACK_SOURCE_CYGWIN "")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_IGNORE_FILES "/Users/alexandrequintart/soft/jsbsim/;/admin/;/autom4te.cache;/Makefile$;/Makefile.in$;depcomp$;install-sh$;libtool$;ltmain.sh;missing;/.*\\.csv$;/.*\\.o$;/.*\\.a$;/.*\\.m4$;/.cvsignore$;config.guess;config.log;config.status;config.sub;configure$;/JSBSim$;/.deps/;/.libs/;/CVS/;TAGS;")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/Users/alexandrequintart/soft/jsbsim/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Darwin")
set(CPACK_TOPLEVEL_TAG "Darwin")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/Users/alexandrequintart/soft/jsbsim/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alexandrequintart/soft/jsbsim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexandrequintart/soft/jsbsim/build

# Include any dependencies generated for this target.
include src/simgear/xml/CMakeFiles/Xml.dir/depend.make

# Include the progress variables for this target.
include src/simgear/xml/CMakeFiles/Xml.dir/progress.make

# Include the compile flags for this target's objects.
include src/simgear/xml/CMakeFiles/Xml.dir/flags.make

src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o: src/simgear/xml/CMakeFiles/Xml.dir/flags.make
src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o: ../src/simgear/xml/easyxml.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/g++-8   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Xml.dir/easyxml.cxx.o -c /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/easyxml.cxx

src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Xml.dir/easyxml.cxx.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/easyxml.cxx > CMakeFiles/Xml.dir/easyxml.cxx.i

src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Xml.dir/easyxml.cxx.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/easyxml.cxx -o CMakeFiles/Xml.dir/easyxml.cxx.s

src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.requires:

.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.requires

src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.provides: src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.requires
	$(MAKE) -f src/simgear/xml/CMakeFiles/Xml.dir/build.make src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.provides.build
.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.provides

src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.provides.build: src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o


src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o: src/simgear/xml/CMakeFiles/Xml.dir/flags.make
src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o: ../src/simgear/xml/xmlparse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Xml.dir/xmlparse.c.o   -c /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlparse.c

src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Xml.dir/xmlparse.c.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlparse.c > CMakeFiles/Xml.dir/xmlparse.c.i

src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Xml.dir/xmlparse.c.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlparse.c -o CMakeFiles/Xml.dir/xmlparse.c.s

src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.requires:

.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.requires

src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.provides: src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.requires
	$(MAKE) -f src/simgear/xml/CMakeFiles/Xml.dir/build.make src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.provides.build
.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.provides

src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.provides.build: src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o


src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o: src/simgear/xml/CMakeFiles/Xml.dir/flags.make
src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o: ../src/simgear/xml/xmltok.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Xml.dir/xmltok.c.o   -c /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmltok.c

src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Xml.dir/xmltok.c.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmltok.c > CMakeFiles/Xml.dir/xmltok.c.i

src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Xml.dir/xmltok.c.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmltok.c -o CMakeFiles/Xml.dir/xmltok.c.s

src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.requires:

.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.requires

src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.provides: src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.requires
	$(MAKE) -f src/simgear/xml/CMakeFiles/Xml.dir/build.make src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.provides.build
.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.provides

src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.provides.build: src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o


src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o: src/simgear/xml/CMakeFiles/Xml.dir/flags.make
src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o: ../src/simgear/xml/xmlrole.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Xml.dir/xmlrole.c.o   -c /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlrole.c

src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Xml.dir/xmlrole.c.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlrole.c > CMakeFiles/Xml.dir/xmlrole.c.i

src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Xml.dir/xmlrole.c.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && /usr/local/bin/gcc-8  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/xml/xmlrole.c -o CMakeFiles/Xml.dir/xmlrole.c.s

src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.requires:

.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.requires

src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.provides: src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.requires
	$(MAKE) -f src/simgear/xml/CMakeFiles/Xml.dir/build.make src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.provides.build
.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.provides

src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.provides.build: src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o


Xml: src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o
Xml: src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o
Xml: src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o
Xml: src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o
Xml: src/simgear/xml/CMakeFiles/Xml.dir/build.make

.PHONY : Xml

# Rule to build all files generated by this target.
src/simgear/xml/CMakeFiles/Xml.dir/build: Xml

.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/build

src/simgear/xml/CMakeFiles/Xml.dir/requires: src/simgear/xml/CMakeFiles/Xml.dir/easyxml.cxx.o.requires
src/simgear/xml/CMakeFiles/Xml.dir/requires: src/simgear/xml/CMakeFiles/Xml.dir/xmlparse.c.o.requires
src/simgear/xml/CMakeFiles/Xml.dir/requires: src/simgear/xml/CMakeFiles/Xml.dir/xmltok.c.o.requires
src/simgear/xml/CMakeFiles/Xml.dir/requires: src/simgear/xml/CMakeFiles/Xml.dir/xmlrole.c.o.requires

.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/requires

src/simgear/xml/CMakeFiles/Xml.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml && $(CMAKE_COMMAND) -P CMakeFiles/Xml.dir/cmake_clean.cmake
.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/clean

src/simgear/xml/CMakeFiles/Xml.dir/depend:
	cd /Users/alexandrequintart/soft/jsbsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src/simgear/xml /Users/alexandrequintart/soft/jsbsim/build /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml /Users/alexandrequintart/soft/jsbsim/build/src/simgear/xml/CMakeFiles/Xml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/simgear/xml/CMakeFiles/Xml.dir/depend

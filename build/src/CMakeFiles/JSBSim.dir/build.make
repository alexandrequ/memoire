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
include src/CMakeFiles/JSBSim.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/JSBSim.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/JSBSim.dir/flags.make

src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o: src/CMakeFiles/JSBSim.dir/flags.make
src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o: ../src/JSBSim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src && /usr/local/bin/g++-8   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JSBSim.dir/JSBSim.cpp.o -c /Users/alexandrequintart/soft/jsbsim/src/JSBSim.cpp

src/CMakeFiles/JSBSim.dir/JSBSim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JSBSim.dir/JSBSim.cpp.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/JSBSim.cpp > CMakeFiles/JSBSim.dir/JSBSim.cpp.i

src/CMakeFiles/JSBSim.dir/JSBSim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JSBSim.dir/JSBSim.cpp.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/JSBSim.cpp -o CMakeFiles/JSBSim.dir/JSBSim.cpp.s

src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.requires:

.PHONY : src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.requires

src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.provides: src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/JSBSim.dir/build.make src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.provides.build
.PHONY : src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.provides

src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.provides.build: src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o


# Object files for target JSBSim
JSBSim_OBJECTS = \
"CMakeFiles/JSBSim.dir/JSBSim.cpp.o"

# External object files for target JSBSim
JSBSim_EXTERNAL_OBJECTS =

src/JSBSim: src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o
src/JSBSim: src/CMakeFiles/JSBSim.dir/build.make
src/JSBSim: src/libJSBSim.a
src/JSBSim: src/CMakeFiles/JSBSim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable JSBSim"
	cd /Users/alexandrequintart/soft/jsbsim/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JSBSim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/JSBSim.dir/build: src/JSBSim

.PHONY : src/CMakeFiles/JSBSim.dir/build

src/CMakeFiles/JSBSim.dir/requires: src/CMakeFiles/JSBSim.dir/JSBSim.cpp.o.requires

.PHONY : src/CMakeFiles/JSBSim.dir/requires

src/CMakeFiles/JSBSim.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/build/src && $(CMAKE_COMMAND) -P CMakeFiles/JSBSim.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/JSBSim.dir/clean

src/CMakeFiles/JSBSim.dir/depend:
	cd /Users/alexandrequintart/soft/jsbsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src /Users/alexandrequintart/soft/jsbsim/build /Users/alexandrequintart/soft/jsbsim/build/src /Users/alexandrequintart/soft/jsbsim/build/src/CMakeFiles/JSBSim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/JSBSim.dir/depend


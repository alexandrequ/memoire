# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_BINARY_DIR = /Users/alexandrequintart/soft/jsbsim

# Include any dependencies generated for this target.
include src/simgear/misc/CMakeFiles/Misc.dir/depend.make

# Include the progress variables for this target.
include src/simgear/misc/CMakeFiles/Misc.dir/progress.make

# Include the compile flags for this target's objects.
include src/simgear/misc/CMakeFiles/Misc.dir/flags.make

src/simgear/misc/CMakeFiles/Misc.dir/sg_path.cxx.o: src/simgear/misc/CMakeFiles/Misc.dir/flags.make
src/simgear/misc/CMakeFiles/Misc.dir/sg_path.cxx.o: src/simgear/misc/sg_path.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/simgear/misc/CMakeFiles/Misc.dir/sg_path.cxx.o"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Misc.dir/sg_path.cxx.o -c /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/sg_path.cxx

src/simgear/misc/CMakeFiles/Misc.dir/sg_path.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Misc.dir/sg_path.cxx.i"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/sg_path.cxx > CMakeFiles/Misc.dir/sg_path.cxx.i

src/simgear/misc/CMakeFiles/Misc.dir/sg_path.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Misc.dir/sg_path.cxx.s"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/sg_path.cxx -o CMakeFiles/Misc.dir/sg_path.cxx.s

src/simgear/misc/CMakeFiles/Misc.dir/strutils.cxx.o: src/simgear/misc/CMakeFiles/Misc.dir/flags.make
src/simgear/misc/CMakeFiles/Misc.dir/strutils.cxx.o: src/simgear/misc/strutils.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/simgear/misc/CMakeFiles/Misc.dir/strutils.cxx.o"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Misc.dir/strutils.cxx.o -c /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/strutils.cxx

src/simgear/misc/CMakeFiles/Misc.dir/strutils.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Misc.dir/strutils.cxx.i"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/strutils.cxx > CMakeFiles/Misc.dir/strutils.cxx.i

src/simgear/misc/CMakeFiles/Misc.dir/strutils.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Misc.dir/strutils.cxx.s"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/strutils.cxx -o CMakeFiles/Misc.dir/strutils.cxx.s

Misc: src/simgear/misc/CMakeFiles/Misc.dir/sg_path.cxx.o
Misc: src/simgear/misc/CMakeFiles/Misc.dir/strutils.cxx.o
Misc: src/simgear/misc/CMakeFiles/Misc.dir/build.make

.PHONY : Misc

# Rule to build all files generated by this target.
src/simgear/misc/CMakeFiles/Misc.dir/build: Misc

.PHONY : src/simgear/misc/CMakeFiles/Misc.dir/build

src/simgear/misc/CMakeFiles/Misc.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/misc && $(CMAKE_COMMAND) -P CMakeFiles/Misc.dir/cmake_clean.cmake
.PHONY : src/simgear/misc/CMakeFiles/Misc.dir/clean

src/simgear/misc/CMakeFiles/Misc.dir/depend:
	cd /Users/alexandrequintart/soft/jsbsim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src/simgear/misc /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src/simgear/misc /Users/alexandrequintart/soft/jsbsim/src/simgear/misc/CMakeFiles/Misc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/simgear/misc/CMakeFiles/Misc.dir/depend


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
include utils/aeromatic++/CMakeFiles/aeromatic.dir/depend.make

# Include the progress variables for this target.
include utils/aeromatic++/CMakeFiles/aeromatic.dir/progress.make

# Include the compile flags for this target's objects.
include utils/aeromatic++/CMakeFiles/aeromatic.dir/flags.make

utils/aeromatic++/CMakeFiles/aeromatic.dir/aeromatic.cpp.o: utils/aeromatic++/CMakeFiles/aeromatic.dir/flags.make
utils/aeromatic++/CMakeFiles/aeromatic.dir/aeromatic.cpp.o: utils/aeromatic++/aeromatic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object utils/aeromatic++/CMakeFiles/aeromatic.dir/aeromatic.cpp.o"
	cd /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aeromatic.dir/aeromatic.cpp.o -c /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++/aeromatic.cpp

utils/aeromatic++/CMakeFiles/aeromatic.dir/aeromatic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aeromatic.dir/aeromatic.cpp.i"
	cd /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++/aeromatic.cpp > CMakeFiles/aeromatic.dir/aeromatic.cpp.i

utils/aeromatic++/CMakeFiles/aeromatic.dir/aeromatic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aeromatic.dir/aeromatic.cpp.s"
	cd /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++/aeromatic.cpp -o CMakeFiles/aeromatic.dir/aeromatic.cpp.s

# Object files for target aeromatic
aeromatic_OBJECTS = \
"CMakeFiles/aeromatic.dir/aeromatic.cpp.o"

# External object files for target aeromatic
aeromatic_EXTERNAL_OBJECTS =

utils/aeromatic++/aeromatic: utils/aeromatic++/CMakeFiles/aeromatic.dir/aeromatic.cpp.o
utils/aeromatic++/aeromatic: utils/aeromatic++/CMakeFiles/aeromatic.dir/build.make
utils/aeromatic++/aeromatic: utils/aeromatic++/libAeromatic++.a
utils/aeromatic++/aeromatic: utils/aeromatic++/CMakeFiles/aeromatic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable aeromatic"
	cd /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aeromatic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/aeromatic++/CMakeFiles/aeromatic.dir/build: utils/aeromatic++/aeromatic

.PHONY : utils/aeromatic++/CMakeFiles/aeromatic.dir/build

utils/aeromatic++/CMakeFiles/aeromatic.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ && $(CMAKE_COMMAND) -P CMakeFiles/aeromatic.dir/cmake_clean.cmake
.PHONY : utils/aeromatic++/CMakeFiles/aeromatic.dir/clean

utils/aeromatic++/CMakeFiles/aeromatic.dir/depend:
	cd /Users/alexandrequintart/soft/jsbsim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++ /Users/alexandrequintart/soft/jsbsim/utils/aeromatic++/CMakeFiles/aeromatic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/aeromatic++/CMakeFiles/aeromatic.dir/depend


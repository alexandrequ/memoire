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
include src/simgear/props/CMakeFiles/Properties.dir/depend.make

# Include the progress variables for this target.
include src/simgear/props/CMakeFiles/Properties.dir/progress.make

# Include the compile flags for this target's objects.
include src/simgear/props/CMakeFiles/Properties.dir/flags.make

src/simgear/props/CMakeFiles/Properties.dir/props.cxx.o: src/simgear/props/CMakeFiles/Properties.dir/flags.make
src/simgear/props/CMakeFiles/Properties.dir/props.cxx.o: src/simgear/props/props.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/simgear/props/CMakeFiles/Properties.dir/props.cxx.o"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Properties.dir/props.cxx.o -c /Users/alexandrequintart/soft/jsbsim/src/simgear/props/props.cxx

src/simgear/props/CMakeFiles/Properties.dir/props.cxx.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/Properties.dir/props.cxx.i"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/props/props.cxx > CMakeFiles/Properties.dir/props.cxx.i

src/simgear/props/CMakeFiles/Properties.dir/props.cxx.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/Properties.dir/props.cxx.s"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/props/props.cxx -o CMakeFiles/Properties.dir/props.cxx.s

src/simgear/props/CMakeFiles/Properties.dir/propertyObject.cxx.o: src/simgear/props/CMakeFiles/Properties.dir/flags.make
src/simgear/props/CMakeFiles/Properties.dir/propertyObject.cxx.o: src/simgear/props/propertyObject.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/simgear/props/CMakeFiles/Properties.dir/propertyObject.cxx.o"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Properties.dir/propertyObject.cxx.o -c /Users/alexandrequintart/soft/jsbsim/src/simgear/props/propertyObject.cxx

src/simgear/props/CMakeFiles/Properties.dir/propertyObject.cxx.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/Properties.dir/propertyObject.cxx.i"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/simgear/props/propertyObject.cxx > CMakeFiles/Properties.dir/propertyObject.cxx.i

src/simgear/props/CMakeFiles/Properties.dir/propertyObject.cxx.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/Properties.dir/propertyObject.cxx.s"
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/simgear/props/propertyObject.cxx -o CMakeFiles/Properties.dir/propertyObject.cxx.s

Properties: src/simgear/props/CMakeFiles/Properties.dir/props.cxx.o
Properties: src/simgear/props/CMakeFiles/Properties.dir/propertyObject.cxx.o
Properties: src/simgear/props/CMakeFiles/Properties.dir/build.make

.PHONY : Properties

# Rule to build all files generated by this target.
src/simgear/props/CMakeFiles/Properties.dir/build: Properties

.PHONY : src/simgear/props/CMakeFiles/Properties.dir/build

src/simgear/props/CMakeFiles/Properties.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/src/simgear/props && $(CMAKE_COMMAND) -P CMakeFiles/Properties.dir/cmake_clean.cmake
.PHONY : src/simgear/props/CMakeFiles/Properties.dir/clean

src/simgear/props/CMakeFiles/Properties.dir/depend:
	cd /Users/alexandrequintart/soft/jsbsim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src/simgear/props /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src/simgear/props /Users/alexandrequintart/soft/jsbsim/src/simgear/props/CMakeFiles/Properties.dir/DependInfo.cmake
.PHONY : src/simgear/props/CMakeFiles/Properties.dir/depend


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
include src/initialization/CMakeFiles/Init.dir/depend.make

# Include the progress variables for this target.
include src/initialization/CMakeFiles/Init.dir/progress.make

# Include the compile flags for this target's objects.
include src/initialization/CMakeFiles/Init.dir/flags.make

src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o: src/initialization/CMakeFiles/Init.dir/flags.make
src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o: ../src/initialization/FGInitialCondition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Init.dir/FGInitialCondition.cpp.o -c /Users/alexandrequintart/soft/jsbsim/src/initialization/FGInitialCondition.cpp

src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Init.dir/FGInitialCondition.cpp.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/initialization/FGInitialCondition.cpp > CMakeFiles/Init.dir/FGInitialCondition.cpp.i

src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Init.dir/FGInitialCondition.cpp.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/initialization/FGInitialCondition.cpp -o CMakeFiles/Init.dir/FGInitialCondition.cpp.s

src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.requires:

.PHONY : src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.requires

src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.provides: src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.requires
	$(MAKE) -f src/initialization/CMakeFiles/Init.dir/build.make src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.provides.build
.PHONY : src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.provides

src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.provides.build: src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o


src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o: src/initialization/CMakeFiles/Init.dir/flags.make
src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o: ../src/initialization/FGTrim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Init.dir/FGTrim.cpp.o -c /Users/alexandrequintart/soft/jsbsim/src/initialization/FGTrim.cpp

src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Init.dir/FGTrim.cpp.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/initialization/FGTrim.cpp > CMakeFiles/Init.dir/FGTrim.cpp.i

src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Init.dir/FGTrim.cpp.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/initialization/FGTrim.cpp -o CMakeFiles/Init.dir/FGTrim.cpp.s

src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.requires:

.PHONY : src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.requires

src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.provides: src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.requires
	$(MAKE) -f src/initialization/CMakeFiles/Init.dir/build.make src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.provides.build
.PHONY : src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.provides

src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.provides.build: src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o


src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o: src/initialization/CMakeFiles/Init.dir/flags.make
src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o: ../src/initialization/FGTrimAxis.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrequintart/soft/jsbsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Init.dir/FGTrimAxis.cpp.o -c /Users/alexandrequintart/soft/jsbsim/src/initialization/FGTrimAxis.cpp

src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Init.dir/FGTrimAxis.cpp.i"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/src/initialization/FGTrimAxis.cpp > CMakeFiles/Init.dir/FGTrimAxis.cpp.i

src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Init.dir/FGTrimAxis.cpp.s"
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && /usr/local/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/src/initialization/FGTrimAxis.cpp -o CMakeFiles/Init.dir/FGTrimAxis.cpp.s

src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.requires:

.PHONY : src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.requires

src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.provides: src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.requires
	$(MAKE) -f src/initialization/CMakeFiles/Init.dir/build.make src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.provides.build
.PHONY : src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.provides

src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.provides.build: src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o


Init: src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o
Init: src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o
Init: src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o
Init: src/initialization/CMakeFiles/Init.dir/build.make

.PHONY : Init

# Rule to build all files generated by this target.
src/initialization/CMakeFiles/Init.dir/build: Init

.PHONY : src/initialization/CMakeFiles/Init.dir/build

src/initialization/CMakeFiles/Init.dir/requires: src/initialization/CMakeFiles/Init.dir/FGInitialCondition.cpp.o.requires
src/initialization/CMakeFiles/Init.dir/requires: src/initialization/CMakeFiles/Init.dir/FGTrim.cpp.o.requires
src/initialization/CMakeFiles/Init.dir/requires: src/initialization/CMakeFiles/Init.dir/FGTrimAxis.cpp.o.requires

.PHONY : src/initialization/CMakeFiles/Init.dir/requires

src/initialization/CMakeFiles/Init.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/build/src/initialization && $(CMAKE_COMMAND) -P CMakeFiles/Init.dir/cmake_clean.cmake
.PHONY : src/initialization/CMakeFiles/Init.dir/clean

src/initialization/CMakeFiles/Init.dir/depend:
	cd /Users/alexandrequintart/soft/jsbsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/src/initialization /Users/alexandrequintart/soft/jsbsim/build /Users/alexandrequintart/soft/jsbsim/build/src/initialization /Users/alexandrequintart/soft/jsbsim/build/src/initialization/CMakeFiles/Init.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/initialization/CMakeFiles/Init.dir/depend

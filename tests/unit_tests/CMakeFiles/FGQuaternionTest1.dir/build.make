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
include tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/depend.make

# Include the progress variables for this target.
include tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/progress.make

# Include the compile flags for this target's objects.
include tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/flags.make

tests/unit_tests/FGQuaternionTest.cpp: tests/unit_tests/FGQuaternionTest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FGQuaternionTest.cpp"
	cd /Users/alexandrequintart/soft/jsbsim/tests/unit_tests && /usr/local/bin/cxxtestgen --error-printer -o /Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGQuaternionTest.cpp /Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGQuaternionTest.h

tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.o: tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/flags.make
tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.o: tests/unit_tests/FGQuaternionTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.o"
	cd /Users/alexandrequintart/soft/jsbsim/tests/unit_tests && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.o -c /Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGQuaternionTest.cpp

tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.i"
	cd /Users/alexandrequintart/soft/jsbsim/tests/unit_tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGQuaternionTest.cpp > CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.i

tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.s"
	cd /Users/alexandrequintart/soft/jsbsim/tests/unit_tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGQuaternionTest.cpp -o CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.s

# Object files for target FGQuaternionTest1
FGQuaternionTest1_OBJECTS = \
"CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.o"

# External object files for target FGQuaternionTest1
FGQuaternionTest1_EXTERNAL_OBJECTS =

tests/unit_tests/FGQuaternionTest1: tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/FGQuaternionTest.cpp.o
tests/unit_tests/FGQuaternionTest1: tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/build.make
tests/unit_tests/FGQuaternionTest1: src/libJSBSim.a
tests/unit_tests/FGQuaternionTest1: tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/alexandrequintart/soft/jsbsim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FGQuaternionTest1"
	cd /Users/alexandrequintart/soft/jsbsim/tests/unit_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FGQuaternionTest1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/build: tests/unit_tests/FGQuaternionTest1

.PHONY : tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/build

tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/clean:
	cd /Users/alexandrequintart/soft/jsbsim/tests/unit_tests && $(CMAKE_COMMAND) -P CMakeFiles/FGQuaternionTest1.dir/cmake_clean.cmake
.PHONY : tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/clean

tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/depend: tests/unit_tests/FGQuaternionTest.cpp
	cd /Users/alexandrequintart/soft/jsbsim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/tests/unit_tests /Users/alexandrequintart/soft/jsbsim /Users/alexandrequintart/soft/jsbsim/tests/unit_tests /Users/alexandrequintart/soft/jsbsim/tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/DependInfo.cmake
.PHONY : tests/unit_tests/CMakeFiles/FGQuaternionTest1.dir/depend

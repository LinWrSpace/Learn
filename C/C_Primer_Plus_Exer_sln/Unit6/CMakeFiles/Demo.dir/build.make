# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/spacelg/workspace/c_test/Unit6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/spacelg/workspace/c_test/Unit6

# Include any dependencies generated for this target.
include CMakeFiles/Demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Demo.dir/flags.make

CMakeFiles/Demo.dir/Demo.c.o: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/Demo.c.o: Demo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spacelg/workspace/c_test/Unit6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Demo.dir/Demo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Demo.dir/Demo.c.o   -c /home/spacelg/workspace/c_test/Unit6/Demo.c

CMakeFiles/Demo.dir/Demo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Demo.dir/Demo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/spacelg/workspace/c_test/Unit6/Demo.c > CMakeFiles/Demo.dir/Demo.c.i

CMakeFiles/Demo.dir/Demo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Demo.dir/Demo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/spacelg/workspace/c_test/Unit6/Demo.c -o CMakeFiles/Demo.dir/Demo.c.s

CMakeFiles/Demo.dir/Demo.c.o.requires:

.PHONY : CMakeFiles/Demo.dir/Demo.c.o.requires

CMakeFiles/Demo.dir/Demo.c.o.provides: CMakeFiles/Demo.dir/Demo.c.o.requires
	$(MAKE) -f CMakeFiles/Demo.dir/build.make CMakeFiles/Demo.dir/Demo.c.o.provides.build
.PHONY : CMakeFiles/Demo.dir/Demo.c.o.provides

CMakeFiles/Demo.dir/Demo.c.o.provides.build: CMakeFiles/Demo.dir/Demo.c.o


# Object files for target Demo
Demo_OBJECTS = \
"CMakeFiles/Demo.dir/Demo.c.o"

# External object files for target Demo
Demo_EXTERNAL_OBJECTS =

Demo: CMakeFiles/Demo.dir/Demo.c.o
Demo: CMakeFiles/Demo.dir/build.make
Demo: CMakeFiles/Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/spacelg/workspace/c_test/Unit6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Demo.dir/build: Demo

.PHONY : CMakeFiles/Demo.dir/build

CMakeFiles/Demo.dir/requires: CMakeFiles/Demo.dir/Demo.c.o.requires

.PHONY : CMakeFiles/Demo.dir/requires

CMakeFiles/Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Demo.dir/clean

CMakeFiles/Demo.dir/depend:
	cd /home/spacelg/workspace/c_test/Unit6 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/spacelg/workspace/c_test/Unit6 /home/spacelg/workspace/c_test/Unit6 /home/spacelg/workspace/c_test/Unit6 /home/spacelg/workspace/c_test/Unit6 /home/spacelg/workspace/c_test/Unit6/CMakeFiles/Demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Demo.dir/depend


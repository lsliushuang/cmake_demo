# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/lius/work/HCBB/ti-sdk/linux-devkit/sysroots/x86_64-arago-linux/usr/bin/cmake

# The command to remove a file.
RM = /home/lius/work/HCBB/ti-sdk/linux-devkit/sysroots/x86_64-arago-linux/usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lius/stduy/cmake_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lius/stduy/cmake_demo/build

# Include any dependencies generated for this target.
include src/process1/CMakeFiles/process1.dir/depend.make

# Include the progress variables for this target.
include src/process1/CMakeFiles/process1.dir/progress.make

# Include the compile flags for this target's objects.
include src/process1/CMakeFiles/process1.dir/flags.make

src/process1/CMakeFiles/process1.dir/process1.c.o: src/process1/CMakeFiles/process1.dir/flags.make
src/process1/CMakeFiles/process1.dir/process1.c.o: ../src/process1/process1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lius/stduy/cmake_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/process1/CMakeFiles/process1.dir/process1.c.o"
	cd /home/lius/stduy/cmake_demo/build/src/process1 && gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/process1.dir/process1.c.o   -c /home/lius/stduy/cmake_demo/src/process1/process1.c

src/process1/CMakeFiles/process1.dir/process1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/process1.dir/process1.c.i"
	cd /home/lius/stduy/cmake_demo/build/src/process1 && gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lius/stduy/cmake_demo/src/process1/process1.c > CMakeFiles/process1.dir/process1.c.i

src/process1/CMakeFiles/process1.dir/process1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/process1.dir/process1.c.s"
	cd /home/lius/stduy/cmake_demo/build/src/process1 && gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lius/stduy/cmake_demo/src/process1/process1.c -o CMakeFiles/process1.dir/process1.c.s

# Object files for target process1
process1_OBJECTS = \
"CMakeFiles/process1.dir/process1.c.o"

# External object files for target process1
process1_EXTERNAL_OBJECTS =

../bin/process1: src/process1/CMakeFiles/process1.dir/process1.c.o
../bin/process1: src/process1/CMakeFiles/process1.dir/build.make
../bin/process1: src/process1/CMakeFiles/process1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lius/stduy/cmake_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../../../bin/process1"
	cd /home/lius/stduy/cmake_demo/build/src/process1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/process1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/process1/CMakeFiles/process1.dir/build: ../bin/process1

.PHONY : src/process1/CMakeFiles/process1.dir/build

src/process1/CMakeFiles/process1.dir/clean:
	cd /home/lius/stduy/cmake_demo/build/src/process1 && $(CMAKE_COMMAND) -P CMakeFiles/process1.dir/cmake_clean.cmake
.PHONY : src/process1/CMakeFiles/process1.dir/clean

src/process1/CMakeFiles/process1.dir/depend:
	cd /home/lius/stduy/cmake_demo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lius/stduy/cmake_demo /home/lius/stduy/cmake_demo/src/process1 /home/lius/stduy/cmake_demo/build /home/lius/stduy/cmake_demo/build/src/process1 /home/lius/stduy/cmake_demo/build/src/process1/CMakeFiles/process1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/process1/CMakeFiles/process1.dir/depend


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src

# Utility rule file for gen-2_12.

# Include the progress variables for this target.
include gf2n/CMakeFiles/gen-2_12.dir/progress.make

gf2n/CMakeFiles/gen-2_12: gf2n/libmpfq_2_12.a


gen-2_12: gf2n/CMakeFiles/gen-2_12
gen-2_12: gf2n/CMakeFiles/gen-2_12.dir/build.make

.PHONY : gen-2_12

# Rule to build all files generated by this target.
gf2n/CMakeFiles/gen-2_12.dir/build: gen-2_12

.PHONY : gf2n/CMakeFiles/gen-2_12.dir/build

gf2n/CMakeFiles/gen-2_12.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && $(CMAKE_COMMAND) -P CMakeFiles/gen-2_12.dir/cmake_clean.cmake
.PHONY : gf2n/CMakeFiles/gen-2_12.dir/clean

gf2n/CMakeFiles/gen-2_12.dir/depend:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/CMakeFiles/gen-2_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gf2n/CMakeFiles/gen-2_12.dir/depend


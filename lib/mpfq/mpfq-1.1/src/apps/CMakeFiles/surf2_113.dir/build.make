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

# Include any dependencies generated for this target.
include apps/CMakeFiles/surf2_113.dir/depend.make

# Include the progress variables for this target.
include apps/CMakeFiles/surf2_113.dir/progress.make

# Include the compile flags for this target's objects.
include apps/CMakeFiles/surf2_113.dir/flags.make

apps/CMakeFiles/surf2_113.dir/surf2_113.o: apps/CMakeFiles/surf2_113.dir/flags.make
apps/CMakeFiles/surf2_113.dir/surf2_113.o: apps/surf2_113.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object apps/CMakeFiles/surf2_113.dir/surf2_113.o"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/surf2_113.dir/surf2_113.o   -c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/surf2_113.c

apps/CMakeFiles/surf2_113.dir/surf2_113.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/surf2_113.dir/surf2_113.i"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/surf2_113.c > CMakeFiles/surf2_113.dir/surf2_113.i

apps/CMakeFiles/surf2_113.dir/surf2_113.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/surf2_113.dir/surf2_113.s"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/surf2_113.c -o CMakeFiles/surf2_113.dir/surf2_113.s

apps/CMakeFiles/surf2_113.dir/surf2_113.o.requires:

.PHONY : apps/CMakeFiles/surf2_113.dir/surf2_113.o.requires

apps/CMakeFiles/surf2_113.dir/surf2_113.o.provides: apps/CMakeFiles/surf2_113.dir/surf2_113.o.requires
	$(MAKE) -f apps/CMakeFiles/surf2_113.dir/build.make apps/CMakeFiles/surf2_113.dir/surf2_113.o.provides.build
.PHONY : apps/CMakeFiles/surf2_113.dir/surf2_113.o.provides

apps/CMakeFiles/surf2_113.dir/surf2_113.o.provides.build: apps/CMakeFiles/surf2_113.dir/surf2_113.o


# Object files for target surf2_113
surf2_113_OBJECTS = \
"CMakeFiles/surf2_113.dir/surf2_113.o"

# External object files for target surf2_113
surf2_113_EXTERNAL_OBJECTS =

apps/surf2_113: apps/CMakeFiles/surf2_113.dir/surf2_113.o
apps/surf2_113: apps/CMakeFiles/surf2_113.dir/build.make
apps/surf2_113: gf2n/libmpfq_2_113.a
apps/surf2_113: apps/CMakeFiles/surf2_113.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable surf2_113"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/surf2_113.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/CMakeFiles/surf2_113.dir/build: apps/surf2_113

.PHONY : apps/CMakeFiles/surf2_113.dir/build

apps/CMakeFiles/surf2_113.dir/requires: apps/CMakeFiles/surf2_113.dir/surf2_113.o.requires

.PHONY : apps/CMakeFiles/surf2_113.dir/requires

apps/CMakeFiles/surf2_113.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && $(CMAKE_COMMAND) -P CMakeFiles/surf2_113.dir/cmake_clean.cmake
.PHONY : apps/CMakeFiles/surf2_113.dir/clean

apps/CMakeFiles/surf2_113.dir/depend:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/CMakeFiles/surf2_113.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/CMakeFiles/surf2_113.dir/depend


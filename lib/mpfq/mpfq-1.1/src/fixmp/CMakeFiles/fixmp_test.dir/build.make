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
include fixmp/CMakeFiles/fixmp_test.dir/depend.make

# Include the progress variables for this target.
include fixmp/CMakeFiles/fixmp_test.dir/progress.make

# Include the compile flags for this target's objects.
include fixmp/CMakeFiles/fixmp_test.dir/flags.make

fixmp/fixmp_test.c: fixmp/perl/gen_mp_test.pl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating fixmp_test.c"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp && perl/gen_mp_test.pl > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp/fixmp_test.c

fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o: fixmp/CMakeFiles/fixmp_test.dir/flags.make
fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o: fixmp/fixmp_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fixmp_test.dir/fixmp_test.o   -c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp/fixmp_test.c

fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fixmp_test.dir/fixmp_test.i"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp/fixmp_test.c > CMakeFiles/fixmp_test.dir/fixmp_test.i

fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fixmp_test.dir/fixmp_test.s"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp/fixmp_test.c -o CMakeFiles/fixmp_test.dir/fixmp_test.s

fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.requires:

.PHONY : fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.requires

fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.provides: fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.requires
	$(MAKE) -f fixmp/CMakeFiles/fixmp_test.dir/build.make fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.provides.build
.PHONY : fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.provides

fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.provides.build: fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o


# Object files for target fixmp_test
fixmp_test_OBJECTS = \
"CMakeFiles/fixmp_test.dir/fixmp_test.o"

# External object files for target fixmp_test
fixmp_test_EXTERNAL_OBJECTS =

fixmp/fixmp_test: fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o
fixmp/fixmp_test: fixmp/CMakeFiles/fixmp_test.dir/build.make
fixmp/fixmp_test: fixmp/CMakeFiles/fixmp_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable fixmp_test"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fixmp_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
fixmp/CMakeFiles/fixmp_test.dir/build: fixmp/fixmp_test

.PHONY : fixmp/CMakeFiles/fixmp_test.dir/build

fixmp/CMakeFiles/fixmp_test.dir/requires: fixmp/CMakeFiles/fixmp_test.dir/fixmp_test.o.requires

.PHONY : fixmp/CMakeFiles/fixmp_test.dir/requires

fixmp/CMakeFiles/fixmp_test.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp && $(CMAKE_COMMAND) -P CMakeFiles/fixmp_test.dir/cmake_clean.cmake
.PHONY : fixmp/CMakeFiles/fixmp_test.dir/clean

fixmp/CMakeFiles/fixmp_test.dir/depend: fixmp/fixmp_test.c
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp/CMakeFiles/fixmp_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : fixmp/CMakeFiles/fixmp_test.dir/depend


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
include test/CMakeFiles/mpfq_test_2_31.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/mpfq_test_2_31.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/mpfq_test_2_31.dir/flags.make

test/mpfq_test_2_31.c: test/mpfq_test.c.meta
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mpfq_test_2_31.c"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && sed -e 's/TAG/2_31/g' < mpfq_test.c.meta > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/mpfq_test_2_31.c

test/mpfq_name_K.h: test/mk_name_k.pl
test/mpfq_name_K.h: api.pl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating mpfq_name_K.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && ./mk_name_k.pl api_file=../api.pl name=K > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/mpfq_name_K.h

test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o: test/CMakeFiles/mpfq_test_2_31.dir/flags.make
test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o: test/mpfq_test_2_31.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -DCHAR2 -msse2 -std=c99 -o CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o   -c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/mpfq_test_2_31.c

test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.i"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -DCHAR2 -msse2 -std=c99 -E /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/mpfq_test_2_31.c > CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.i

test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.s"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -DCHAR2 -msse2 -std=c99 -S /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/mpfq_test_2_31.c -o CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.s

test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.requires:

.PHONY : test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.requires

test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.provides: test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.requires
	$(MAKE) -f test/CMakeFiles/mpfq_test_2_31.dir/build.make test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.provides.build
.PHONY : test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.provides

test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.provides.build: test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o


# Object files for target mpfq_test_2_31
mpfq_test_2_31_OBJECTS = \
"CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o"

# External object files for target mpfq_test_2_31
mpfq_test_2_31_EXTERNAL_OBJECTS =

test/mpfq_test_2_31: test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o
test/mpfq_test_2_31: test/CMakeFiles/mpfq_test_2_31.dir/build.make
test/mpfq_test_2_31: gf2n/libmpfq_2_31.a
test/mpfq_test_2_31: test/CMakeFiles/mpfq_test_2_31.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable mpfq_test_2_31"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mpfq_test_2_31.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/mpfq_test_2_31.dir/build: test/mpfq_test_2_31

.PHONY : test/CMakeFiles/mpfq_test_2_31.dir/build

test/CMakeFiles/mpfq_test_2_31.dir/requires: test/CMakeFiles/mpfq_test_2_31.dir/mpfq_test_2_31.o.requires

.PHONY : test/CMakeFiles/mpfq_test_2_31.dir/requires

test/CMakeFiles/mpfq_test_2_31.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_test_2_31.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/mpfq_test_2_31.dir/clean

test/CMakeFiles/mpfq_test_2_31.dir/depend: test/mpfq_test_2_31.c
test/CMakeFiles/mpfq_test_2_31.dir/depend: test/mpfq_name_K.h
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/CMakeFiles/mpfq_test_2_31.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/mpfq_test_2_31.dir/depend


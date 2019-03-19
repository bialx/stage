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

# Utility rule file for bench.

# Include the progress variables for this target.
include benches/CMakeFiles/bench.dir/progress.make

benches/CMakeFiles/bench: benches/bench.pl
benches/CMakeFiles/bench: benches/fieldop.c
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches && ./bench.pl --keep --cflags \ -I/usr/local/include\ -I/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include\ -I/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include\ -msse2\ -DNDEBUG\ -O4 --tmpdir tmp

benches/bench.pl: benches/bench.pl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating bench.pl"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches && cp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches/bench.pl /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches/bench.pl

benches/fieldop.c: benches/fieldop.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating fieldop.c"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches && cp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches/fieldop.c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches/fieldop.c

bench: benches/CMakeFiles/bench
bench: benches/bench.pl
bench: benches/fieldop.c
bench: benches/CMakeFiles/bench.dir/build.make

.PHONY : bench

# Rule to build all files generated by this target.
benches/CMakeFiles/bench.dir/build: bench

.PHONY : benches/CMakeFiles/bench.dir/build

benches/CMakeFiles/bench.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches && $(CMAKE_COMMAND) -P CMakeFiles/bench.dir/cmake_clean.cmake
.PHONY : benches/CMakeFiles/bench.dir/clean

benches/CMakeFiles/bench.dir/depend:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches/CMakeFiles/bench.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : benches/CMakeFiles/bench.dir/depend


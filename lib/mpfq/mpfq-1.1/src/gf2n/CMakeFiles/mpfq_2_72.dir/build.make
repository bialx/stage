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
include gf2n/CMakeFiles/mpfq_2_72.dir/depend.make

# Include the progress variables for this target.
include gf2n/CMakeFiles/mpfq_2_72.dir/progress.make

# Include the compile flags for this target's objects.
include gf2n/CMakeFiles/mpfq_2_72.dir/flags.make

gf2n/mpfq_2_72.c: gf2n/gen_gf2n.pl
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/wizard/discard.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/wizard/coldstore.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/utils/bitops.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/utils/align.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/details/schoolbook.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/details/extra.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/details/basecase.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/details/kara.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x/details/sse2.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/engine/handler.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/engine/maketext.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/engine/conf.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/engine/oo.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/engine/postprocess.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/engine/utils.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/elt.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/field.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/io.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/mgy/elt.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/mgy/field.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/mgy/io.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp/mgy/codec.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2x.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfpmgy.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/trivialities.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/mul.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/field.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/linearops.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/reduction.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/io.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/inversion.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/squaring.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gf2n/utils/poly.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/gfp.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/mpi_flat.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/polygcd.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/poly.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/pow.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/flatdata.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/mul.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/conv.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/flatdata.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/addsub.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/getset.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/io.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults/vec/alloc.pm
gf2n/mpfq_2_72.c: perl-lib/Mpfq/defaults.pm
gf2n/mpfq_2_72.c: gf2n/perl/gf64.pm
gf2n/mpfq_2_72.c: gf2n/helper/helper
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mpfq_2_72.c, ../include/mpfq/mpfq_2_72.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && ./gen_gf2n.pl helper=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/helper/helper table=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2x/wizard.table output_path=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n n=72 w=64
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && mv /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/mpfq_2_72.h /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_2_72.h

include/mpfq/mpfq_2_72.h: gf2n/mpfq_2_72.c
	@$(CMAKE_COMMAND) -E touch_nocreate include/mpfq/mpfq_2_72.h

include/mpfq/mpfq_gf2n_common.h: gf2n/mpfq_gf2n_common.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../include/mpfq/mpfq_gf2n_common.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && cp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/mpfq_gf2n_common.h /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_gf2n_common.h

gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o: gf2n/CMakeFiles/mpfq_2_72.dir/flags.make
gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o: gf2n/mpfq_2_72.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -msse2 -std=c99 -o CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o   -c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/mpfq_2_72.c

gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mpfq_2_72.dir/mpfq_2_72.i"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -msse2 -std=c99 -E /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/mpfq_2_72.c > CMakeFiles/mpfq_2_72.dir/mpfq_2_72.i

gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mpfq_2_72.dir/mpfq_2_72.s"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -msse2 -std=c99 -S /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/mpfq_2_72.c -o CMakeFiles/mpfq_2_72.dir/mpfq_2_72.s

gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.requires:

.PHONY : gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.requires

gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.provides: gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.requires
	$(MAKE) -f gf2n/CMakeFiles/mpfq_2_72.dir/build.make gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.provides.build
.PHONY : gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.provides

gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.provides.build: gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o


# Object files for target mpfq_2_72
mpfq_2_72_OBJECTS = \
"CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o"

# External object files for target mpfq_2_72
mpfq_2_72_EXTERNAL_OBJECTS =

gf2n/libmpfq_2_72.a: gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o
gf2n/libmpfq_2_72.a: gf2n/CMakeFiles/mpfq_2_72.dir/build.make
gf2n/libmpfq_2_72.a: gf2n/CMakeFiles/mpfq_2_72.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libmpfq_2_72.a"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_2_72.dir/cmake_clean_target.cmake
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mpfq_2_72.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gf2n/CMakeFiles/mpfq_2_72.dir/build: gf2n/libmpfq_2_72.a

.PHONY : gf2n/CMakeFiles/mpfq_2_72.dir/build

gf2n/CMakeFiles/mpfq_2_72.dir/requires: gf2n/CMakeFiles/mpfq_2_72.dir/mpfq_2_72.o.requires

.PHONY : gf2n/CMakeFiles/mpfq_2_72.dir/requires

gf2n/CMakeFiles/mpfq_2_72.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_2_72.dir/cmake_clean.cmake
.PHONY : gf2n/CMakeFiles/mpfq_2_72.dir/clean

gf2n/CMakeFiles/mpfq_2_72.dir/depend: gf2n/mpfq_2_72.c
gf2n/CMakeFiles/mpfq_2_72.dir/depend: include/mpfq/mpfq_2_72.h
gf2n/CMakeFiles/mpfq_2_72.dir/depend: include/mpfq/mpfq_gf2n_common.h
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/CMakeFiles/mpfq_2_72.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gf2n/CMakeFiles/mpfq_2_72.dir/depend


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
include gfpe/CMakeFiles/mpfq_p_6_5_e.dir/depend.make

# Include the progress variables for this target.
include gfpe/CMakeFiles/mpfq_p_6_5_e.dir/progress.make

# Include the compile flags for this target's objects.
include gfpe/CMakeFiles/mpfq_p_6_5_e.dir/flags.make

gfpe/mpfq_p_6_5_e.c: gfpe/gen_gfpe.pl
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/wizard/discard.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/wizard/coldstore.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/utils/bitops.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/utils/align.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/details/schoolbook.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/details/extra.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/details/basecase.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/details/kara.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x/details/sse2.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/engine/handler.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/engine/maketext.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/engine/conf.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/engine/oo.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/engine/postprocess.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/engine/utils.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/elt.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/field.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/io.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/mgy/elt.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/mgy/field.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/mgy/io.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp/mgy/codec.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2x.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfpmgy.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/trivialities.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/mul.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/field.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/linearops.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/reduction.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/io.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/inversion.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/squaring.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gf2n/utils/poly.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/gfp.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/mpi_flat.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/polygcd.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/poly.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/pow.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/flatdata.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/mul.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/conv.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/flatdata.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/addsub.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/getset.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/io.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults/vec/alloc.pm
gfpe/mpfq_p_6_5_e.c: perl-lib/Mpfq/defaults.pm
gfpe/mpfq_p_6_5_e.c: gfpe/perl/elt.pm
gfpe/mpfq_p_6_5_e.c: gfpe/perl/field.pm
gfpe/mpfq_p_6_5_e.c: gfpe/perl/elt_ur.pm
gfpe/mpfq_p_6_5_e.c: gfpe/perl/io.pm
gfpe/mpfq_p_6_5_e.c: gfpe/perl/gfpe.pm
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mpfq_p_6_5_e.c, ../include/mpfq/mpfq_p_6_5_e.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && ./gen_gfpe.pl w=64 basetag=p_6_5 output_path=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && mv /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/mpfq_p_6_5_e.h /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_6_5_e.h

include/mpfq/mpfq_p_6_5_e.h: gfpe/mpfq_p_6_5_e.c
	@$(CMAKE_COMMAND) -E touch_nocreate include/mpfq/mpfq_p_6_5_e.h

include/mpfq/mpfq_gfpe_common.h: gfpe/mpfq_gfpe_common.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../include/mpfq/mpfq_gfpe_common.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && cp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/mpfq_gfpe_common.h /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_gfpe_common.h

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/flags.make
gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o: gfpe/mpfq_p_6_5_e.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o   -c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/mpfq_p_6_5_e.c

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.i"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/mpfq_p_6_5_e.c > CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.i

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.s"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/mpfq_p_6_5_e.c -o CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.s

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.requires:

.PHONY : gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.requires

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.provides: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.requires
	$(MAKE) -f gfpe/CMakeFiles/mpfq_p_6_5_e.dir/build.make gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.provides.build
.PHONY : gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.provides

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.provides.build: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o


# Object files for target mpfq_p_6_5_e
mpfq_p_6_5_e_OBJECTS = \
"CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o"

# External object files for target mpfq_p_6_5_e
mpfq_p_6_5_e_EXTERNAL_OBJECTS =

gfpe/libmpfq_p_6_5_e.a: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o
gfpe/libmpfq_p_6_5_e.a: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/build.make
gfpe/libmpfq_p_6_5_e.a: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libmpfq_p_6_5_e.a"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_p_6_5_e.dir/cmake_clean_target.cmake
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mpfq_p_6_5_e.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gfpe/CMakeFiles/mpfq_p_6_5_e.dir/build: gfpe/libmpfq_p_6_5_e.a

.PHONY : gfpe/CMakeFiles/mpfq_p_6_5_e.dir/build

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/requires: gfpe/CMakeFiles/mpfq_p_6_5_e.dir/mpfq_p_6_5_e.o.requires

.PHONY : gfpe/CMakeFiles/mpfq_p_6_5_e.dir/requires

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_p_6_5_e.dir/cmake_clean.cmake
.PHONY : gfpe/CMakeFiles/mpfq_p_6_5_e.dir/clean

gfpe/CMakeFiles/mpfq_p_6_5_e.dir/depend: gfpe/mpfq_p_6_5_e.c
gfpe/CMakeFiles/mpfq_p_6_5_e.dir/depend: include/mpfq/mpfq_p_6_5_e.h
gfpe/CMakeFiles/mpfq_p_6_5_e.dir/depend: include/mpfq/mpfq_gfpe_common.h
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/CMakeFiles/mpfq_p_6_5_e.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gfpe/CMakeFiles/mpfq_p_6_5_e.dir/depend


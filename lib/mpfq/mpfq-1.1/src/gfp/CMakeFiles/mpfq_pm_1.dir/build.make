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
include gfp/CMakeFiles/mpfq_pm_1.dir/depend.make

# Include the progress variables for this target.
include gfp/CMakeFiles/mpfq_pm_1.dir/progress.make

# Include the compile flags for this target's objects.
include gfp/CMakeFiles/mpfq_pm_1.dir/flags.make

gfp/mpfq_pm_1.c: gfp/gen_gfp.pl
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/wizard/discard.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/wizard/coldstore.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/utils/bitops.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/utils/align.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/details/schoolbook.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/details/extra.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/details/basecase.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/details/kara.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x/details/sse2.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/engine/handler.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/engine/maketext.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/engine/conf.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/engine/oo.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/engine/postprocess.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/engine/utils.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/elt.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/field.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/io.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/mgy/elt.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/mgy/field.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/mgy/io.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp/mgy/codec.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2x.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfpmgy.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/trivialities.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/mul.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/field.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/linearops.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/reduction.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/io.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/inversion.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/squaring.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gf2n/utils/poly.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/gfp.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/mpi_flat.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/polygcd.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/poly.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/pow.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/flatdata.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/mul.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/conv.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/flatdata.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/addsub.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/getset.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/io.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults/vec/alloc.pm
gfp/mpfq_pm_1.c: perl-lib/Mpfq/defaults.pm
gfp/mpfq_pm_1.c: gfp/perl/p127_1.pm
gfp/mpfq_pm_1.c: gfp/perl/p25519.pm
gfp/mpfq_pm_1.c: gfp/perl/p127_735.pm
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mpfq_pm_1.c, ../include/mpfq/mpfq_pm_1.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && ./gen_gfp.pl w=64 type=mgy n=1 output_path=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && mv /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/mpfq_pm_1.h /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_1.h

include/mpfq/mpfq_pm_1.h: gfp/mpfq_pm_1.c
	@$(CMAKE_COMMAND) -E touch_nocreate include/mpfq/mpfq_pm_1.h

include/mpfq/mpfq_gfp_common.h: gfp/mpfq_gfp_common.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../include/mpfq/mpfq_gfp_common.h"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && cp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/mpfq_gfp_common.h /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_gfp_common.h

gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o: gfp/CMakeFiles/mpfq_pm_1.dir/flags.make
gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o: gfp/mpfq_pm_1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o   -c /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/mpfq_pm_1.c

gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.i"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/mpfq_pm_1.c > CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.i

gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.s"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/mpfq_pm_1.c -o CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.s

gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.requires:

.PHONY : gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.requires

gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.provides: gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.requires
	$(MAKE) -f gfp/CMakeFiles/mpfq_pm_1.dir/build.make gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.provides.build
.PHONY : gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.provides

gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.provides.build: gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o


# Object files for target mpfq_pm_1
mpfq_pm_1_OBJECTS = \
"CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o"

# External object files for target mpfq_pm_1
mpfq_pm_1_EXTERNAL_OBJECTS =

gfp/libmpfq_pm_1.a: gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o
gfp/libmpfq_pm_1.a: gfp/CMakeFiles/mpfq_pm_1.dir/build.make
gfp/libmpfq_pm_1.a: gfp/CMakeFiles/mpfq_pm_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libmpfq_pm_1.a"
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_pm_1.dir/cmake_clean_target.cmake
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mpfq_pm_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gfp/CMakeFiles/mpfq_pm_1.dir/build: gfp/libmpfq_pm_1.a

.PHONY : gfp/CMakeFiles/mpfq_pm_1.dir/build

gfp/CMakeFiles/mpfq_pm_1.dir/requires: gfp/CMakeFiles/mpfq_pm_1.dir/mpfq_pm_1.o.requires

.PHONY : gfp/CMakeFiles/mpfq_pm_1.dir/requires

gfp/CMakeFiles/mpfq_pm_1.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp && $(CMAKE_COMMAND) -P CMakeFiles/mpfq_pm_1.dir/cmake_clean.cmake
.PHONY : gfp/CMakeFiles/mpfq_pm_1.dir/clean

gfp/CMakeFiles/mpfq_pm_1.dir/depend: gfp/mpfq_pm_1.c
gfp/CMakeFiles/mpfq_pm_1.dir/depend: include/mpfq/mpfq_pm_1.h
gfp/CMakeFiles/mpfq_pm_1.dir/depend: include/mpfq/mpfq_gfp_common.h
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/CMakeFiles/mpfq_pm_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gfp/CMakeFiles/mpfq_pm_1.dir/depend


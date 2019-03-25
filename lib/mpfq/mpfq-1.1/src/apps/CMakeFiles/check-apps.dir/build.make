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

# Utility rule file for check-apps.

# Include the progress variables for this target.
include apps/CMakeFiles/check-apps.dir/progress.make

apps/CMakeFiles/check-apps:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && echo "Testing apps binaries..."
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && ./curve25519 80807010984578203925308608286196538954626424777283028112521645237022220463139 55733833028607976699834723209716956874398376051241301282267543585006903214099 > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && echo 28900896108968887700245167342157870854207414725120603260895377618044279782516 | diff - /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && ./curve2_251 1411214224289847061698078554422268058798435593322882630984515140092457033472 2381534459352789112385117940713773459189462301512095627591936004374809288635 > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && echo 1190426708887629635264698047638771333687697766331653839518769749900108039319 | diff - /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && ./surf127eps 8989806888014370473117755397430651947838921398443070195927188591932991731478 1 125502655864557899853401523876923848672 61968963782336585200062542731328438959 85200832278915591934167993094470869032 > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && echo "1 15611645695747380114852933880187146488 75866353444389142208086070132263339889 138253729419623408912518068110282102028" | diff - /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && ./surf2_113 5913369630930828585928565323096496294573733703322036623241333262897 1 1238984503090426823044878048926908 7545492644397800203664618119174637 2148163187067577342061514160110689 > /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && echo "1 6831195734377328204627445004668410 6357295029998284436657569880444448 7403711197958053139690888451052614" | diff - /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/temp
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && echo "All tests passed."

check-apps: apps/CMakeFiles/check-apps
check-apps: apps/CMakeFiles/check-apps.dir/build.make

.PHONY : check-apps

# Rule to build all files generated by this target.
apps/CMakeFiles/check-apps.dir/build: check-apps

.PHONY : apps/CMakeFiles/check-apps.dir/build

apps/CMakeFiles/check-apps.dir/clean:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps && $(CMAKE_COMMAND) -P CMakeFiles/check-apps.dir/cmake_clean.cmake
.PHONY : apps/CMakeFiles/check-apps.dir/clean

apps/CMakeFiles/check-apps.dir/depend:
	cd /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/CMakeFiles/check-apps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/CMakeFiles/check-apps.dir/depend

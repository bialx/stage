# Install script for directory: /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mpfq" TYPE FILE FILES "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/fixmp/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfp/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2n/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/test/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/apps/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/benches/cmake_install.cmake")
  include("/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gf2x/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

# Install script for directory: /home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/gfpe/libmpfq_gfpe.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mpfq" TYPE FILE FILES
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_127_1_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_127_735_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_25519_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_1_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_1_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_2_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_2_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_3_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_3_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_4_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_4_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_6_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_6_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_7_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_7_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_8_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_8_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_9_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_9_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_0_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_0_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_1_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_1_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_2_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_2_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_3_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_3_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_4_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_4_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_5_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_5_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_6_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_6_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_7_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_7_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_p_8_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_pm_8_5_e.h"
    "/home/user/Documents/Reference_Implementation/rqc128/lib/mpfq/mpfq-1.1/src/include/mpfq/mpfq_gfpe_common.h"
    )
endif()


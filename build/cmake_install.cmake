# Install script for directory: /Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/chap-01/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/chap-02/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/chap-03/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/chap-04/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/chap-05/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/tp-01/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/tp-02/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/tp-03/cmake_install.cmake")
  include("/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/tp-04/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/hugoattal/Documents/université/M1/s2/c++/CPP_Learning_Code/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

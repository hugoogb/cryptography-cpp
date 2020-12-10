cmake_minimum_required(VERSION 3.10)

# set the project name, version and language
project(cryptography-cpp DESCRIPTION "Encrypt and decrypt messages using c++" LANGUAGES CXX)

# setting defaults
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU") OR ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang"))
  add_compile_options(-Wall)
  add_compile_options(-Wextra)
elseif(DEFINED MSVC)
  add_definitions(-DNOMINMAX)
  add_definitions(-D_USE_MATH_DEFINES)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(CRYPTOGRAPHY-CPP_TESTING "Enables building of unittests for libterminal [default: ON" ON)
option(CRYPTOGRAPHY-CPP_EMBEDDED_CATCH2 "Uses embedded catch2 for testing [default: ON]" ON)
option(CRYPTOGRAPHY-CPP_COVERAGE "Builds with codecov [default: OFF]" OFF)

# ----------------------------------------------------------------------------
# code coverage

if(CRYPTOGRAPHY-CPP_COVERAGE AND NOT MSVC)
  add_compile_options(-g --coverage)
  set(CMAKE_EXE_LINKER_FLAGS "--coverage ${CMAKE_EXE_LINKER_FLAGS}")
  set(CRYPTOGRAPHY-CPP_CODE_COVERAGE_ENABLED ON)
else()
  set(CRYPTOGRAPHY-CPP_CODE_COVERAGE_ENABLED OFF)
endif()

# ----------------------------------------------------------------------------
# 3rdparty dependencies

if(CRYPTOGRAPHY-CPP_TESTING AND CRYPTOGRAPHY-CPP_EMBEDDED_CATCH2)
  find_package(Catch2 REQUIRED)
  target_link_libraries(test Catch2::Catch2)
endif()

# ----------------------------------------------------------------------------
add_subdirectory(src/util)
add_subdirectory(src/methods)

message(STATUS "------------------------------------------------------------------------------")
message(STATUS "|                            Cryptography C++                                |")
message(STATUS "------------------------------------------------------------------------------")
message(STATUS "Build type:                  ${CMAKE_BUILD_TYPE}")
message(STATUS "Build unit tests:            ${CONTOUR_TESTING}")
message(STATUS "Enable with code coverage:   ${CONTOUR_CODE_COVERAGE_ENABLED}")
message(STATUS "------------------------------------------------------------------------------")

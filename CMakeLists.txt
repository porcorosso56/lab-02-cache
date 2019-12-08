cmake_minimum_required(VERSION 3.10.2:)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#option(BUILD_COVERAGE "Build coverage" OFF)

#set(
# HUNTER_CACHE_SERVERS
# "https://github.com/bmstu-iu8-cpp-sem-3/hunter-cache"
# CACHE STRING "Default cache server"
#)

#include("cmake/HunterGate.cmake")

#huntergate(
# URL "https://github.com/ruslo/hunter/archive/v0.23.34.tar.gz"
# SHA1 "70287b1ffa810ee4e952052a9adff9b4856d0d54"
#)

project(Experiment)

string(APPEND CMAKE_CXX_FLAGS " -pedantic -Werror -Wall -Wextra")
string(APPEND CMAKE_CXX_FLAGS " -Wno-unused-command-line-argument")
string(APPEND CMAKE_CXX_FLAGS " -Wshadow -Wnon-virtual-dtor")

add_library(Experiment STATIC
  ${CMAKE_CURRENT_SOURCE_DIR}/sources/Experiment.cpp )

add_executable(main
  ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_include_directories(Experiment PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
 )


target_link_libraries(main Experiment)

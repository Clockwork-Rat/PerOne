cmake_minimum_required(VERSION 3.9)
project(PerOne LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREAD ON)
set(Boost_USE_STATIC_RUNTIME ON)
set(CMAKE_CXX_STANDARD 11)

#find_package(OpenMP)

find_package(Boost REQUIRED COMPONENTS program_options regex filesystem iostreams)

#include_directories()

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

include_directories(${Boost_INCLUDE_DIRS})

add_executable(perone src/main.cpp)

#add_library()

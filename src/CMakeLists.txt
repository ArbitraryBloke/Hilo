cmake_minimum_required(VERSION 3.20)

include(CheckIPOSupported)

project(Hilo)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)

check_ipo_supported(RESULT IPO_SUPPORTED)
if(IPO_SUPPORTED)
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
endif()

add_subdirectory(include)

add_executable(hilo main.cpp my_utilities.cpp)

target_link_libraries(hilo PRIVATE my_utilities)
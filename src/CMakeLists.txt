cmake_minimum_required(VERSION 3.20)

include(CheckIPOSupported)

project(Hilo VERSION 0.1.0)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)

check_ipo_supported(RESULT IPO_SUPPORTED)
if (IPO_SUPPORTED)
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
endif ()
if (MSVC)
    add_compile_options(/W4)
else ()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)

endif ()

add_subdirectory(game)
add_subdirectory(my_utilities)

add_executable(hilo main.cpp)
target_include_directories(hilo PUBLIC
        "${PROJECT_BINARY_DIR}"
        )
configure_file(hilo_config.h.in hilo_config.h)

target_link_libraries(game PRIVATE my_utilities)
target_link_libraries(hilo PRIVATE game)

target_link_libraries(game PRIVATE my_utilities)
target_link_libraries(hilo PRIVATE game)
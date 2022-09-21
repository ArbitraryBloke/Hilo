cmake_minimum_required(VERSION 3.20)

add_library(game STATIC include/game.h game.cpp)

set_target_properties(game PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(game PUBLIC
        include
        "${PROJECT_BINARY_DIR}"
        )
install(TARGETS game DESTINATION lib)
install(FILES include/game.h
        TYPE INCLUDE
        )
install(FILES "${PROJECT_BINARY_DIR}/hilo_config.h"
        TYPE INCLUDE
        )
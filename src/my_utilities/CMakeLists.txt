cmake_minimum_required(VERSION 3.20)

add_library(my_utilities STATIC my_utilities.cpp include/my_utilities.h)

set_target_properties(my_utilities PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(my_utilities PUBLIC include)
install(TARGETS my_utilities DESTINATION lib)
install(FILES include/my_utilities.h
        TYPE INCLUDE
        )
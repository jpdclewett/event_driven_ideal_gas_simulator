cmake_minimum_required (VERSION 3.16.3)
project (nessie VERSION 0.1 LANGUAGES C)

#set(CMAKE_C_COMPILER "/usr/bin/gcc")
#set(CMAKE_CXX_COMPILER "/usr/bin/g++")

set(header_directories
    "includes"
)

include(${CMAKE_HOME_DIRECTORY}/libs/library_list.txt)

macro(define_target target_name)
    # add_executable( executable_name source_list )
    message("build target: ${target_name} ${${target_name}_sources}")
    add_executable(${target_name} ${${target_name}_sources})
    target_include_directories(${target_name} PUBLIC ${CMAKE_HOME_DIRECTORY}/${header_directories})
    target_link_libraries(${target_name} PUBLIC ${library_list} m SDL2 GL GLU png gomp corejson)
endmacro()


macro(define_library library_name)
    message("build library: ${library_name} ${${library_name}_sources}")
    include_directories("${JSON_INCLUDE_PUBLIC_DIRS}")
    add_library(${library_name} STATIC ${${library_name}_sources})
    target_include_directories(${library_name} PUBLIC ${CMAKE_HOME_DIRECTORY}/${header_directories})
endmacro()

macro(add_corejson)
    message("build coreJSON")
    set(library_name "corejson")
    include(${CMAKE_HOME_DIRECTORY}/coreJSON/jsonFilePaths.cmake)
    include_directories("${JSON_INCLUDE_PUBLIC_DIRS}")
    add_library(${library_name} STATIC ${JSON_SOURCES})
endmacro()

add_compile_options(-fopenmp -g3)

message("Testing?: ${TESTING}")
if(NOT TESTING)
    message("Build application...")
    add_definitions(-DDEBUG)
    add_corejson()
    add_subdirectory(libs)
    add_subdirectory(apps)
else()
    message("Testing...")
    enable_testing()
    add_subdirectory(Unity-master/)
    add_subdirectory(libs)

    foreach (library_name ${library_list})
        set(test_target "${library_name}_test")
        message("foo: ${test_target} abc ${CMAKE_HOME_DIRECTORY}/libs/${library_name}/test.c")
        add_executable(${test_target} ${CMAKE_HOME_DIRECTORY}/libs/${library_name}/test.c)
        target_link_libraries(${test_target} PUBLIC ${library_name} unity m)
        target_include_directories(${test_target} PUBLIC ${CMAKE_HOME_DIRECTORY}/${header_directories})
        add_test(NAME ${test_target} COMMAND ${test_target})
    endforeach()
endif()

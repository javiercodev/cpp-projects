cmake_minimum_required(VERSION 3.20)
project(cpp-projects LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

file(GLOB SOURCES CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*/*.cpp)

foreach(src ${SOURCES})
    get_filename_component(name ${src} NAME_WE)
    get_filename_component(folder ${src} DIRECTORY)
    get_filename_component(topic ${folder} NAME)

    add_executable(${topic}_${name} ${src})
endforeach()
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

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*.cpp)

list(FILTER SOURCES EXCLUDE REGEX "/(build|out|cmake-build-[^/]*|\\.git|\\.idea)/")

set(PROJECT_DIRS "")

foreach(src ${SOURCES})
    get_filename_component(folder ${src} DIRECTORY)
    get_filename_component(name ${src} NAME_WE)

    if(EXISTS "${folder}/main.cpp")
        list(APPEND PROJECT_DIRS ${folder})
    else()
        file(RELATIVE_PATH rel ${CMAKE_SOURCE_DIR} ${folder})
        string(REPLACE "/" "_" topic "${rel}")

        if(topic)
            set(target ${topic}_${name})
        else()
            set(target ${name})
        endif()

        add_executable(${target} ${src})
    endif()
endforeach()

list(REMOVE_DUPLICATES PROJECT_DIRS)

foreach(dir ${PROJECT_DIRS})
    file(GLOB project_sources CONFIGURE_DEPENDS ${dir}/*.cpp)
    file(RELATIVE_PATH rel ${CMAKE_SOURCE_DIR} ${dir})
    string(REPLACE "/" "_" target "${rel}")

    add_executable(${target} ${project_sources})
    target_include_directories(${target} PRIVATE ${dir})
endforeach()
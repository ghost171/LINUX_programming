cmake_minimum_required(VERSION 2.8)
project(project_name C)

set(SOURCE_FILES main.c)
add_executable(project_name ${SOURCE_FILES})

target_link_libraries(project_name PRIVATE m)
cmake_minimum_required(VERSION 3.13)
project(HelloWorld VERSION 0.1.0)

set(WUPS_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/dist")

add_subdirectory(src)
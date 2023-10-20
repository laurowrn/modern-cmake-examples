cmake_minimum_required(VERSION 3.14)
project(ExtendedProject
    VERSION 1.0
    DESCRIPTION "An simple CMake project with multiple libraries and multiple binaries"
    LANGUAGES CXX
    )

add_subdirectory(apps)
add_subdirectory(libs)
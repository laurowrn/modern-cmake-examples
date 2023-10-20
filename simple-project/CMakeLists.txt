cmake_minimum_required(VERSION 3.14)
project(SimpleProject 
	VERSION 1.0
	DESCRIPTION "An simple CMake project with one executable and one library"
	LANGUAGES CXX
	)

add_subdirectory(libs)
add_subdirectory(apps)
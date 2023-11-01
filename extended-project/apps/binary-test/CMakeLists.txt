add_library(test_library Lib1.cpp Lib1.h)
target_include_directories(test_library PUBLIC .)

add_executable(binary_test main.cpp)
target_link_libraries(binary_test test_library)
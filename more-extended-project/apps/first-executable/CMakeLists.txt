project(first_executable)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    first_lib::first_library
    second_library::first_module
)
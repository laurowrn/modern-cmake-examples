add_executable(car_autonomy main.cpp)

target_link_libraries(car_autonomy PRIVATE safe_math logging_lib)
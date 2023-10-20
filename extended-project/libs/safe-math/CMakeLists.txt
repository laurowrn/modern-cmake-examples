add_library(safe_math SafeMath.cpp SafeMath.h)

target_include_directories(safe_math PUBLIC .)

target_link_libraries(safe_math PRIVATE logging_lib)
project (first_library)

add_library(${PROJECT_NAME} 
    SHARED
    src/FirstLibrary.cpp
)
add_library(first_lib::first_library
    ALIAS 
    ${PROJECT_NAME}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
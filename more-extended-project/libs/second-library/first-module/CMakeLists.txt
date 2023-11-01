set(PARENT_PROJECT_NAME ${PROJECT_NAME})

project(first_module)

add_library(${PROJECT_NAME}
    SHARED
    src/FirstModule.cpp
)

add_library(${PARENT_PROJECT_NAME}::${PROJECT_NAME}
    ALIAS
    ${PROJECT_NAME}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
# STATIC/SHARED/MODULE
add_library(sayhello SHARED
        "hello.cpp"
        "hello.h")

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(main_program
        "main.cpp")

target_link_libraries(main_program PRIVATE sayhello)

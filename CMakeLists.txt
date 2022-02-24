cmake_minimum_required(VERSION 3.21)
project(c_plus_plus_for_dummies)

set(CMAKE_CXX_STANDARD 14)


add_executable(structure
        "1. Basics/1, Structure/hello.cpp")

add_executable(comment
        "1. Basics/2. Comments/comment.cpp")

add_executable(variable
        "1. Basics/3. Variables/variable.cpp")

add_executable(assignment
        "1. Basics/4. Assignments/assignment.cpp")

add_executable(inout
        "1. Basics/5. Input Output/inout.cpp")

add_executable(uninitialized
        "1. Basics/6. Uninitialized/uninitialized.cpp")

add_executable(conventions
        "1. Basics/7. Conventions/conventions.cpp")

add_executable(expression
        "1. Basics/10. Expressions/expression.cpp")

add_executable(multiplier
        "1. Basics/11. My Application/multiplier.cpp")

add_executable(functions_intro
        "2. Functions Files/1. Function Intro/functions_intro.cpp")


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

add_executable(str_concat
        "1. Basics/12. String Concatenation/str_concat.cpp")

add_executable(maths
        "1. Basics/13. Maths/maths.cpp")



add_executable(functions_intro
        "2. Functions Files/1. Function Intro/functions_intro.cpp")

add_executable(functions_params
        "2. Functions Files/2. Function Parameters/functions_params.cpp")

add_executable(forward_dec
        "2. Functions Files/6. Function Forward Declaration/forward_dec.cpp")

add_executable(multiple_files
        "2. Functions Files/7. Multiple Files/main.cpp"
        "2. Functions Files/7. Multiple Files/io.cpp")

add_executable(headered
        "2. Functions Files/10. Header/main.cpp"
        "2. Functions Files/10. Header/add.cpp")

add_executable(quiz
        "2. Functions Files/11. Quiz/main.cpp"
        "2. Functions Files/11. Quiz/io.cpp"
        "2. Functions Files/11. Quiz/math.cpp")



add_executable(void_datatype
        "4. Datatypes/2. Void Datatype/void_datatype.cpp")

add_executable(sizes
        "4. Datatypes/3. Size/size.cpp")

add_executable(int_division
        "4. Datatypes/4. Integer Division/int_divison.cpp")

add_executable(unsigned
        "4. Datatypes/5. Unsigned/unsigned.cpp")

add_executable(fixed_width_ints
        "4. Datatypes/6. Fixed Width Ints/fixed_width_ints.cpp")

add_executable(bools
        "4. Datatypes/9. Bools/bools.cpp")

add_executable(ifs
        "4. Datatypes/10. If/if_statements.cpp")

add_executable(casts
        "4. Datatypes/12. Casts/casts.cpp")

add_executable(consts
        "4. Datatypes/15. Const and Constexpr/consts.cpp")

add_executable(mixed
        "4. Datatypes/20. Mixed/mixed.cpp")

add_executable(strings
        "4. Datatypes/20. Strings/strings.cpp")

add_executable(arrays
        "4. Datatypes/21. Array/arrays.cpp")


add_executable(bitsets
        "20. Advanced/5. Bit Set/bitsets.cpp")

add_executable(generics
        "20. Advanced/20. Generics/generics.cpp")

add_executable(pointers
        "20. Advanced/21. Pointers/pointers.cpp")
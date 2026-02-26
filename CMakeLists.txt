cmake_minimum_required(VERSION 3.16)
project(algorithms_and_ds)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE ALGO_SOURCES algorithms/*.cpp)

add_executable(program
        main.cpp
        ${ALGO_SOURCES}
        algorithms/insertion.h
        algorithms/insertion_register.cpp
        algorithms/selection_register.cpp
        algorithms/selection.h
        algorithms/merge_register.cpp
        algorithms/merge.h
        algorithms/heap.h
        algorithms/heap_register.cpp
        algorithms/quick.h
        algorithms/quick_register.cpp
        algorithms/counting.h
        algorithms/counting_register.cpp
        algorithms/bucket.h
        algorithms/bucked_register.cpp
)

target_include_directories(program PRIVATE
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/algorithms
)

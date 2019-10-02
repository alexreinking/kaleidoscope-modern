cmake_minimum_required(VERSION 3.12)

project(Example_for_LLVM
        VERSION 1.0
        DESCRIPTION "Using modern CMake to build an LLVM JIT example")

add_subdirectory(external)

add_subdirectory(src)

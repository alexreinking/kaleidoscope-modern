cmake_minimum_required(VERSION 3.12)

add_custom_target(runtime ALL DEPENDS alignment_128.ll)

add_custom_command(OUTPUT alignment_128.ll
                   DEPENDS alignment_128.cpp
                   COMMAND Clang::clang -DDEBUG_RUNTIME -O3 -fno-vectorize -fpic -fno-ms-compatibility -ffreestanding -fno-blocks -fno-exceptions -fno-unwind-tables -std=gnu++98 -m64 -target "le64-unknown-unknown-unknown" "-I." -DCOMPILING_HALIDE_RUNTIME -DBITS_64 -emit-llvm -S ${CMAKE_CURRENT_SOURCE_DIR}/alignment_128.cpp -o alignment_128.ll
                   IMPLICIT_DEPENDS CXX alignment_128.cpp)

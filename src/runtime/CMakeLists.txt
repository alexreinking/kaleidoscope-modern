cmake_minimum_required(VERSION 3.12)

add_custom_command(OUTPUT alignment_128.ll
                   DEPENDS alignment_128.cpp
                   COMMAND Clang::clang -DDEBUG_RUNTIME -O3 -fno-vectorize -fpic -fno-ms-compatibility -ffreestanding -fno-blocks -fno-exceptions -fno-unwind-tables -std=gnu++98 -m${j} -target "le64-unknown-unknown-unknown" "-I." -DCOMPILING_HALIDE_RUNTIME -DBITS_${j} -emit-llvm -S "${SOURCE}" -o "${LL_D}"
                   IMPLICIT_DEPENDS CXX alignment_128.ll)


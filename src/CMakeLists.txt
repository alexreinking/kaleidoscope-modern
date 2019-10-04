cmake_minimum_required(VERSION 3.12)

project(Kaleidoscope
        VERSION 1.0
        DESCRIPTION "LLVM Example JIT compiler")

add_subdirectory(runtime)

add_executable(kljit)
target_sources(kljit PRIVATE "main.cpp")
target_link_libraries(kljit 
    PRIVATE LLVM::Core
            LLVM::ExecutionEngine
            LLVM::Object
            LLVM::OrcJIT
            LLVM::Support
            LLVM::native)

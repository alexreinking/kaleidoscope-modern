cmake_minimum_required(VERSION 3.12)

find_package(Clang REQUIRED CONFIG)

message(STATUS "Found Clang ${LLVM_PACKAGE_VERSION}")

project(External.Clang
        VERSION ${LLVM_PACKAGE_VERSION}
        DESCRIPTION "Clang compiler and tools")

set_target_properties(clang
                      clang-format
                      clang-import-test
                      clang-scan-deps
                      clang-rename
                      clang-refactor
           PROPERTIES IMPORTED_GLOBAL TRUE)

add_executable(Clang::clang ALIAS clang)
add_executable(Clang::clang-format ALIAS clang-format)
add_executable(Clang::clang-import-test ALIAS clang-import-test)
add_executable(Clang::clang-scan-deps ALIAS clang-scan-deps)
add_executable(Clang::clang-rename ALIAS clang-rename)
add_executable(Clang::clang-refactor ALIAS clang-refactor)


cmake_minimum_required(VERSION 3.26)
project(clang-modules-example)

# make sure c++ 20 is set
set(CMAKE_CXX_STANDARD 20)

# turn on the experimental API
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")

# turn on the dynamic depends for ninja
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(clang-modules-example)
target_link_libraries(clang-modules-example)

target_sources(clang-modules-example
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        src/hello.cppm
        )

add_executable(main src/main.cpp)
target_link_libraries(main clang-modules-example)
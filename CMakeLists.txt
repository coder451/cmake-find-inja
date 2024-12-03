cmake_minimum_required(VERSION 3.20...3.31)
project(hello_inja VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17  CACHE STRING "C++ standard")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
#message("PATH=$ENV{PATH}")

# Not the alias (is used to construct filenames)
find_package(inja CONFIG REQUIRED NO_DEFAULT_PATH)

add_executable(hello_inja main.cpp)

# With the alias
target_link_libraries(hello_inja PRIVATE pantor::inja)

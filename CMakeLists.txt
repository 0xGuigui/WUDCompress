cmake_minimum_required(VERSION 3.10)

# Set the project name
project(WudCompress)

# Add the executable and specify source files
add_executable(WudCompress 
    src/WudCompress/WudCompress/main.cpp
    src/WudCompress/WudCompress/wud.cpp
)

# Add the directory containing wud.h to the include paths
target_include_directories(WudCompress PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/WudCompress/WudCompress")

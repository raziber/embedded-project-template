# Top-level CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(laser-tag)

# Include the GTest source directory
add_subdirectory(C:/Libraries/googletest)

# Include the project's own source files and headers
add_subdirectory(src)

# Set up test directory
enable_testing()
add_subdirectory(test)

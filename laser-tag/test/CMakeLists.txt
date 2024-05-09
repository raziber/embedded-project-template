# tests/CMakeLists.txt
add_executable(irCommsFunctions irCommsFunctions.cpp)

# Link GTest libraries to the test executable
target_link_libraries(irCommsFunctions gtest gtest_main)

# Register the tests
add_test(NAME ExampleTest COMMAND irCommsFunctions)

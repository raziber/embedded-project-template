// test_foo.cpp
#include <gtest/gtest.h>
#include "irCommsFunctions.h"

// Test case for foo function
TEST(FooTests, HandlesPositiveInput) {
    EXPECT_EQ(foo(1, 2), 3);
    EXPECT_EQ(foo(10, 15), 25);
}

TEST(FooTests, HandlesNegativeInput) {
    EXPECT_EQ(foo(-2, 2), 0);
    EXPECT_EQ(foo(-10, -15), -25);
}

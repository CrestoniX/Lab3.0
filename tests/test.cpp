"Copyright [2019] <Copyright owner>"
#include <gtest/gtest.h>

#include "SharedPtr.hpp"
#include <string>

TEST(SharedPtr, End)
{
    auto result1 = counter--;
    auto result2 = counter++;
    EXPECT_EQ(ptr, nullptr);
    EXPECT_EQ(control_block, nullptr);
    EXPECT_EQ(control_block->del(), result1);
    EXPECT_EQ(control_block->add(), result2);
}






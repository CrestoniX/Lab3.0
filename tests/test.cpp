// Copyright 2019 CrestoniX <loltm.crav4enko@gmail.com>
#include <gtest/gtest.h>

TEST(Control_Block, Test) {
    EXPECT_EQ(counter, 0);
}
TEST(SharedPtr, Tests) {
    EXPECT_EQ(ptr, nullptr);
    EXPECT_EQ(control_block, nullptr);
}

#include <gtest/gtest.h>

#include "SharedPtr.hpp"
#include <string>

TEST_F(SharedPtr, EndOfProgramm)
{
    EXCEPT_EQ(ptr, nullptr);
    EXCEPT_EQ(control_block, nullptr);

}






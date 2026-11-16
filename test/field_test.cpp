#include <gtest/gtest.h>
#include "field.hpp"

TEST(FieldTest, DefaultInt)
{
    Field<int> field{};
    ASSERT_EQ(field.getData(), 0);
}
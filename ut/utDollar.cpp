#include "gtest/gtest.h"
#include "../sample/Dollar.h"

namespace {
TEST(utDollar, testMultiplcation) {
    Dollar *five = new Dollar(5);
    ASSERT_TRUE(*(new Dollar(10)) == *five->times(2));
}
TEST(utDollar, testEquality_p) {
    ASSERT_TRUE(*(new Dollar(5)) == *(new Dollar(5)));
}
TEST(utDollar, testEquality_n) {
    Dollar lhs(10);
    Dollar rhs(11);
    ASSERT_FALSE(lhs == rhs);
}
} // namespace
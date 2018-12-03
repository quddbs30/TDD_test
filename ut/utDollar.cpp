#include "gtest/gtest.h"
#include "../sample/Dollar.h"

namespace {

TEST(utDollar, testMultiplcation) {
    Dollar *five = new Dollar(5);
    ASSERT_TRUE((new Dollar(10))->equals(five->times(2)));
    ASSERT_TRUE((new Dollar(15))->equals(five->times(3)));
}

TEST(utDollar, testEquality) {
    ASSERT_TRUE((new Dollar(5))->equals(new Dollar(5)));
}
} // namespace
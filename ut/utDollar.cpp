#include "gtest/gtest.h"
#include "../sample/Dollar.h"

namespace {
TEST(utDollar, testMultiplcation) {
    Dollar *five = new Dollar(5);
    ASSERT_TRUE(*(new Dollar(10)) == *five->times(2));
    ASSERT_TRUE(*(new Dollar(15)) == *five->times(3));
}

// 아래 두 test 에서 객체 생성 방법이 다르지만, 
// == 연산자 사용 시 같은 결과를 얻는다. pointer 에 대한 이해가 필요함..
TEST(utDollar, testEqualiy_p) {
    ASSERT_TRUE(*(new Dollar(5)) == *(new Dollar(5)));
}
TEST(utDollar, testEquality_n) {
    Dollar lhs(10);
    Dollar rhs(11);
    ASSERT_FALSE(lhs == rhs);
}
} // namespace
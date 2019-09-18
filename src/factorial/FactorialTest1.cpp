#include <iostream>
#include <gtest/gtest.h>

using namespace std;

unsigned int Factorial( unsigned int number ) {
  return number <= 1 ? number : Factorial(number-1) * number;
}

class FactorialTest : public testing::Test {
};

TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(Factorial(1), 1);
  EXPECT_EQ(Factorial(2), 2);
  EXPECT_EQ(Factorial(3), 6);
  EXPECT_EQ(Factorial(8), 40320);
}

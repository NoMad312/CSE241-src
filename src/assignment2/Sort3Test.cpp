#include <gtest/gtest.h>

void Sort3(int&, int&, int&);

class Sort3Test : public testing::Test {
};

TEST(Sort3Test, test1) {
    int i = 3;
    int j = 2;
    int k = 1;
    Sort3(i, j, k);
    EXPECT_EQ(i, 1);
    EXPECT_EQ(j, 2);
    EXPECT_EQ(k, 3);    
}

TEST(Sort3Test, test2) {
    int i = 2;
    int j = 3;
    int k = 1;
    Sort3(i, j, k);
    EXPECT_EQ(i, 1);
    EXPECT_EQ(j, 2);
    EXPECT_EQ(k, 3);    
}

TEST(Sort3Test, test3) {
    int i = 1;
    int j = 2;
    int k = 3;
    Sort3(i, j, k);
    EXPECT_EQ(i, 1);
    EXPECT_EQ(j, 2);
    EXPECT_EQ(k, 3);    
}

TEST(Sort3Test, test4) {
    int i = 3;
    int j = 3;
    int k = 1;
    Sort3(i, j, k);
    EXPECT_EQ(i, 1);
    EXPECT_EQ(j, 3);
    EXPECT_EQ(k, 3);    
}

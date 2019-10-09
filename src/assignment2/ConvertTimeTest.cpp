#include <gtest/gtest.h>
#include "ConvertTime.hpp"

class ConvertTimeTest : public testing::Test {
};

TEST(ConvertTimeTest, test_am_12) {
    Time24 time24 = {1, 30};
    Time12 time12 = {1, 30, true};
    Time12* time12p = ConvertTime(time24);
    cout << "Converted " << ToString(time24) << " to " << ToString(*time12p) << '\n';
    EXPECT_TRUE(Equal(*time12p, time12));
    delete time12p;
}

TEST(ConvertTimeTest, test_pm_12) {
    Time24 time24 = {15, 30};
    Time12 time12 = {3, 30, false};
    Time12* time12p = ConvertTime(time24);
    cout << "Converted " << ToString(time24) << " to " << ToString(*time12p) << '\n';
    EXPECT_TRUE(Equal(*time12p, time12));
    delete time12p;
}

TEST(ConvertTimeTest, test_noon_12) {
    Time24 time24 = {12, 0};
    Time12 time12 = {12, 0, false};
    Time12* time12p = ConvertTime(time24);
    cout << "Converted " << ToString(time24) << " to " << ToString(*time12p) << '\n';
    EXPECT_TRUE(Equal(*time12p, time12));
    delete time12p;
}

TEST(ConvertTimeTest, test_midnight_12) {
    Time24 time24 = {0, 0};
    Time12 time12 = {0, 0, true};
    Time12* time12p = ConvertTime(time24);
    cout << "Converted " << ToString(time24) << " to " << ToString(*time12p) << '\n';
    EXPECT_TRUE(Equal(*time12p, time12));
    delete time12p;
}

TEST(ConvertTimeTest, test_am_24) {
    Time24 time24 = {1, 30};
    Time12 time12 = {1, 30, true};
    Time24* time24p = ConvertTime(time12);
    cout << "Converted " << ToString(time12) << " to " << ToString(*time24p) << '\n';
    EXPECT_TRUE(Equal(*time24p, time24));
    delete time24p;
}

TEST(ConvertTimeTest, test_pm_24) {
    Time24 time24 = {15, 30};
    Time12 time12 = {3, 30, false};
    Time24* time24p = ConvertTime(time12);
    cout << "Converted " << ToString(time12) << " to " << ToString(*time24p) << '\n';
    EXPECT_TRUE(Equal(*time24p, time24));
    delete time24p;
}

TEST(ConvertTimeTest, test_noon_24) {
    Time24 time24 = {12, 0};
    Time12 time12 = {12, 0, false};
    Time24* time24p = ConvertTime(time12);
    cout << "Converted " << ToString(time12) << " to " << ToString(*time24p) << '\n';
    EXPECT_TRUE(Equal(*time24p, time24));
    delete time24p;
}

TEST(ConvertTimeTest, test_midnight_24) {
    Time24 time24 = {0, 0};
    Time12 time12 = {0, 0, true};
    Time24* time24p = ConvertTime(time12);
    cout << "Converted " << ToString(time12) << " to " << ToString(*time24p) << '\n';
    EXPECT_TRUE(Equal(*time24p, time24));
    delete time24p;
}

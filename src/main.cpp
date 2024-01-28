#include <gtest/gtest.h>

// 테스트할 간단한 함수
int add(int a, int b) {
    return a + b;
}

// add 함수에 대한 테스트 케이스
TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-1, -2), -3);
}

TEST(AdditionTest, HandlesZero) {
    EXPECT_EQ(add(0, 0), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

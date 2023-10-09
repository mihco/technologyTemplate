#include <gtest/gtest.h>

TEST(FourPlusFour, ExampleTest) { EXPECT_EQ(4, 4+4); }

int main() {
  printf("Running main() from %s\n", __FILE__);
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}

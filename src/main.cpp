#include <stdio.h>

#include "gtest/gtest.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

int TellMeOne() {
	return 1;
}

TEST(TellMeOneTest, ReturnsRightValue) {
  EXPECT_EQ(1, TellMeOne());
}

int main(int argc, char **argv) {
	InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

	// printf("I'm telling you one: %d.\n", TellMeOne());
	// return 0;
}

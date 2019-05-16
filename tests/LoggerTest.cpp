#include "gtest/gtest.h"
#include "../sketch_may16a/Logger.cpp"

TEST(WithString, TestName) {
	Logger log;
	log.printLog("mess");
	EXPECT_TRUE(true);
}

TEST(EmptyString, TestName) {
	Logger log;
	string s;
	log.printLog(s);
	EXPECT_TRUE(true);
}
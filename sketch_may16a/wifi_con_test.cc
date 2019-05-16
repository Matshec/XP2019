#include "gtest/gtest.h"
#include <limits.h>
#include "wifiCon.h"
#include "gmock/gmock.h"  

#define WL_CONNECTED = 1 

namespace{

TEST(WifiConTest, Trivial) {
EXPECT_TRUE(connectWifi("abc"));
EXPECT_FALSE(connectWifi(""));
EXPECT_FALSE(connectWifi(NULL));
    }
}
#include "pch.h"
#include "../Silnia1/Kalkulator.h"
#include <iostream>

TEST(TestMatch, Silnia8) {

	Kalkulator kalkulator;
	EXPECT_EQ(40320, kalkulator.silnia(8));
}
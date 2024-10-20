#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify dec_to_hex function")
{
	REQUIRE("A" == decimal_to_hex(10));
	REQUIRE("AA" == decimal_to_hex(170));
	REQUIRE("FF" == decimal_to_hex(255));
}
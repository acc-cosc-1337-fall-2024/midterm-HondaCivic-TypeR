#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_hours, get_minutes, and get_seconds function_1570846218")
{
	REQUIRE(2 == get_hours(1570846218));
	REQUIRE(10 == get_minutes(1570846218));
	REQUIRE(18 == get_seconds(1570846218));
}

TEST_CASE("Verify get_hours, get_minutes, and get_seconds function_1570875018")
{
	REQUIRE(10 == get_hours(1570875018));
	REQUIRE(10 == get_minutes(1570875018));
	REQUIRE(18 == get_seconds(1570875018));
}
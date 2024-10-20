#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify show_reference_param function")
{
	int num = 2;
	show_reference_parameter(num);
	REQUIRE(num == 5);
}

TEST_CASE("Verify show_reference_param function again")
{
	int num = 100;
	show_reference_parameter(num);
	REQUIRE(num == 5);
}
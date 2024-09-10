#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */

TEST_CASE("test dividing two doubles", "shoudl return the result of dividing two doubles"){
	REQUIRE(divide_numbers(10,2) == 5);
	REQUIRE(divide_numbers(5,2) == 2.5);
}

TEST_CASE("multiply int with double", "what will it return?"){
	REQUIRE(calculater_interest(.15, 10) == 1.5);
}

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

TEST_CASE("if you can turn a char into an int with no manual casting", "should return the ascii value of the char"){
	REQUIRE(return_ascii_value('A') == 65);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/


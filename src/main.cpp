#include <stdio.h>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


int TellMeOne() {
	return 1;
}

TEST_CASE( "Let us see if one tells the true", "[Tell me one]" ) {
    REQUIRE( TellMeOne() == 1 );
}

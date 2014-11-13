#include "polygon.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "Polygon class is tested", "A brief check" ) {

	int nsides = 4;

	Polygon poly(nsides);

    REQUIRE( nsides == poly.nsides() );
}
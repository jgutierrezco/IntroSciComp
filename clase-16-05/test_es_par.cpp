#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch_test_macros.hpp"

#include "factorial.h"

TEST_CASE( "Es Par computed", "Es par" ) {
    REQUIRE( es_par(1) == false );
    REQUIRE( es_par(2) == true );
    REQUIRE( es_par(9) == true );
}
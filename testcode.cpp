#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

#include "chargingrange.h"

//TEST CASE #1: Write only the test code without the actual definition in souce file
TEST_CASE("TEST Function Not Declared") {
   vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
   REQUIRE(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 4);
}

//TEST CASE #2: Declare Function in source file, so test will fail because definition is not present
TEST_CASE("TEST NO Definition Failed Result") {
   vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
   REQUIRE(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 4);
}

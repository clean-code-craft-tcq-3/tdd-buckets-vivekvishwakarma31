
#include "chargingrange.h"

//TEST CASE #1: Write only the test code without the actual definition in souce file
void TestTDDStepFunctionNotDeclared()
{
   vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
   assert(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 4);
}

//TEST CASE #2: Declare Function in source file, so test will fail because definition is not present
void TestTDDStepNoFunctionDefinition()
{
   vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
   assert(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 4);
}

//TEST CASE #3 : Test Current Range 
void TestCurrentRange()
{
   vector <int> chargingSessionSamples_1 = {3, 3, 5, 4, 10, 11, 12};
   vector <int> chargingSessionSamples_2 = {5, 4, 10, 11};
   vector <int> chargingSessionSamples_3 = {3,10};
   vector <int> chargingSessionSamples_4;

   //Test 3-5 Current Range Where 3- Lower Bound, 5 - Upper Bound
    assert(getNumberofReadingsInRange(chargingSessionSamples_1, 3, 5) == 4);
   
    //Test 10-12 Current Range Where 10- Lower Bound, 12 - Upper Bound
    assert(getNumberofReadingsInRange(chargingSessionSamples_1, 10, 12) == 3);


}
void TestReadingForEmptySamples()
{
   vector <int> chargingSessionSamples = {};
   assert(getNumberofReadingsInRange(chargingSessionSamples_4, 3, 5) == 0);
   assert(getNumberofReadingsInRange(chargingSessionSamples_4, 10, 12) == 0);
}
void TestReadingForSingleSample()
{
   vector <int> chargingSessionSamples = {5};
   vector <int> chargingSessionSamples_2 = {12};
   assert(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 1);
   assert(getNumberofReadingsInRange(chargingSessionSamples_2, 10, 12) == 1);
}
void TestReadingForOnlyLowerandUpperSamples()
{
    vector <int> chargingSessionSamples = {3,5};
    vector <int> chargingSessionSamples_2 = {10,12};
   assert(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 2);
   assert(getNumberofReadingsInRange(chargingSessionSamples_2, 10, 12) == 2);
}

void TestReadingforOutofRangeSamples()
{
    vector <int> chargingSessionSamples = {1,15};
   assert(getNumberofReadingsInRange(chargingSessionSamples, 3, 5) == 0);
   assert(getNumberofReadingsInRange(chargingSessionSamples, 10, 12) == 0);
}

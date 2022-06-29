
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


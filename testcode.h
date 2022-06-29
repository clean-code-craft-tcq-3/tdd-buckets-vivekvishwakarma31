
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

// Test Driven Extensions
void Test12BitConversion()
{
  int convertedAmp = 0;
  convertedAmp = convert12BitSensorToAmps(0);
  assert(convertedAmp == 0);
  convertedAmp = convert12BitSensorToAmps(4094);
  assert(convertedAmp == 10);
  convertedAmp = convert12BitSensorToAmps(512);
  assert(convertedAmp == 1);
  convertedAmp = convert12BitSensorToAmps(1024);
  assert(convertedAmp == 2);
  convertedAmp = convert12BitSensorToAmps(2048);
  assert(convertedAmp == 5);
  convertedAmp = convert12BitSensorToAmps(3000);
  assert(convertedAmp == 7);
}

void Test10BitConversion()
{
  int convertedAmp = 0;
  convertedAmp = convert10BitSensorToAmps(0);
  assert(convertedAmp == 15);
  convertedAmp = convert10BitSensorToAmps(1022);
  assert(convertedAmp == 15);
  convertedAmp = convert10BitSensorToAmps(300);
  assert(convertedAmp == 6);
  convertedAmp = convert10BitSensorToAmps(511);
  assert(convertedAmp == 0);
  convertedAmp = convert10BitSensorToAmps(950);
  assert(convertedAmp == 13);
  convertedAmp = convert10BitSensorToAmps(10);
  assert(convertedAmp == 14);
}

void TestIgnoreErrorReadings()
{
     int convertedAmp = 0;
     convertedAmp = convert12BitSensorToAmps(ERROR_READING_12BIT);
     assert(convertedAmp == ERROR_READING_12BIT);
   
     convertedAmp = convert12BitSensorToAmps(ERROR_READING_10BIT);
     assert(convertedAmp == ERROR_READING_10BIT);
}

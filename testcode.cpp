
#include "testcode.h"

int main()
{
   TestTDDStepFunctionNotDeclared();
   TestTDDStepNoFunctionDefinition();
   TestCurrentRange();
   TestReadingForEmptySamples();
   TestReadingForSingleSample();
   TestReadingForOnlyLowerandUpperSamples();
   TestReadingforOutofRangeSamples();
   Test12BitConversion();
   Test10BitConversion();
   TestIgnoreErrorReadings();

}

#include <iostream>
#include<string>
#include <vector>
#include <assert.h>

#define ERROR_READING 0xFFFF
#define MAXIMUM_CURRENT_AMPS_12BIT 10
#define MINIMUM_CURRENT_AMPS_12BIT 0
#define MAXIMUM_A2D_NUMBERS_12BIT 4094

#define TOTAL_CURRENT_AMPS_10BIT 30
#define MAXIMUM_CURRENT_AMPS_10BIT 15
#define MINIMUM_CURRENT_AMPS_10BIT -15
#define MAXIMUM_A2D_NUMBERS_10BIT 1022


using namespace std;
int detectRangeCount(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
int getNumberofReadingsInRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
void printInConsole(int lowerBound, int upperBound,int readingCount);

//Test Driven Extension
int convert12BitSensorToAmps(int bitValues);
int convert10BitSensorToAmps(int bitValues);
 

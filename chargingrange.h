#include <iostream>
#include<string>
#include <vector>
using namespace std;
int detectRangeCount(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
int getNumberofReadingsInRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
void printInConsole(int lowerBound, int upperBound,int readingCount)

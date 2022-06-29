#include "chargingrange.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getNumberofReadingsInRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound) 
{
  int sizeofChargingSessionSamples = chargingSessionSamples.size();
  int rangeReadingCount = detectRangeCount(chargingSessionSamples,lowerBound,upperBound);
  printInConsole(lowerBound, upperBound,rangeReadingCount);
  return rangeReadingCount;  
}

void printInConsole(int lowerBound, int upperBound,int readingCount)
{
  cout << " Range -"<< " lowerBound : "<<lowerBound << " upperBound : " <<upperBound << " Reading Count : "<< readingCount << "\n";
}

int detectRangeCount(vector<int> chargingSessionSamples, int lowerBound, int upperBound)
{
    int countOfReadingsFromRange = 0;
    for(int i = 0; i < chargingSessionSamples.size(); i++) 
    {
      if((chargingSessionSamples[i] >= lowerBound) && (chargingSessionSamples[i] <= upperBound))
      {
        countOfReadingsFromRange++;
      }
    } 
   return countOfReadingsFromRange;
}

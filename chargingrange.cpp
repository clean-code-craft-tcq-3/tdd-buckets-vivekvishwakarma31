#include "chargingrange.h"

int getNumberofReadingsInRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound) 
{
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
    int sizeofChargingSessionSamples = chargingSessionSamples.size();
    for(int i = 0; i < sizeofChargingSessionSamples; i++) 
    {
      if((chargingSessionSamples[i] >= lowerBound) && (chargingSessionSamples[i] <= upperBound))
      {
        countOfReadingsFromRange++;
      }
    } 
   return countOfReadingsFromRange;
}

//Test Driven Extension

int convert12BitSensorToAmps(int bitValues)
{
  if(bitValues == ERROR_READING_12BIT)
  {
    return ERROR_READING ;
  }
  double convertedAmps = round( (bitValues * MAXIMUM_CURRENT_AMPS_12BIT ) / MAXIMUM_A2D_NUMBERS_12BIT  );
  return convertedAmps;
}

int convert10BitSensorToAmps(int bitValues)
{
  if(bitValues == ERROR_READING_10BIT)
  {
    return ERROR_READING ;
  }
  double convertedAmps = round( (bitValues * TOTAL_CURRENT_AMPS_10BIT  ) / MAXIMUM_A2D_NUMBERS_10BIT   );
  double getPositiveAmps = abs(convertedAmps - MAXIMUM_CURRENT_AMPS_10BIT) ;
  return getPositiveAmps;
}

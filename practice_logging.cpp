#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <limits>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

using namespace std;

//declarations of functions
void openLog();
void closeLog();
void writeLog(Memory &mem, char functionName[]);
unsigned long long getTimeMicrosec();

ofstream outfile;

/*
This function opens the log file
*/
void openLog()
{
  outfile.open(filename);
  cout << "Log has been opened." << endl;
}

/*
This function closes the log file
*/
void closeLog()
{
  outfile.close();
  cout << "Log has been closed." << endl;
}

/*
This function writes to the log file
Includes the time and date along with each function call
*/
void writeLog(Memory &mem, char functionName[])
{
  time_t sysTimeMS = time(nullptr);//gets the system time
  outfile << asctime(localtime(&sysTimeMS)) << "\t" << "Function: " << functionName << endl;
  //include logging data here
}

/*
This function gets the system time in microseconds
*/
unsigned long long getTimeMicrosec()
{
  timeval NOW;
  gettimeofday(&NOW, NULL);
  return NOW.tv_sec*1000000LL + NOW.tv_usec;
}

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <limits>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

using namespace std;

void echo(Memory &mem);

/*
This function sends output data to the Arduino via echo commands on the terminal
*/
void echo(Memory &mem)
{
  //echo
  int i;
  string s = "echo";
  string c = to_string(mem.ANYTYPEOFDATA);//output any type of data stored in the memory struct
  string p = to_string(mem.ANYTYPEOFDATA);
  string str = s + " \"" + c + p + "\" > /dev/ttyS1";
  char *cstr = new char[str.length() + 1];
  strcpy(cstr, str.c_str());

  //cout << cstr << endl;

  if(system(NULL)) puts ("Ok");
    else exit (EXIT_FAILURE);
  i = system(cstr);
}

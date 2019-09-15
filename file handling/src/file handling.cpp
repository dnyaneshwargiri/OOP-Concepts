//============================================================================
// Name        : file.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>

using namespace std;

int main()
{
 char line[20];
 int c=0;
ifstream obj("sanket.txt",ios::in);
if(obj.is_open())
{
  while(!obj.eof())
 {
     obj.getline(line,20);
    cout<<"\n"<<line;
     if(line[0]!='A' && line[0]!='\0')
         {
       // cout<<"\n"<<line[0];
         c++;
          }
     }
}
else
{cout<<"unable to open file";}
cout<<"\ncount of the line in sanket.txt file not starting with 'A' is:" <<c;
return 0;
}

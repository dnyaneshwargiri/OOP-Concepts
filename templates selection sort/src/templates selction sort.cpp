//============================================================================
// Name        : templates.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class T>
void sort()
{
    int i,j;
    T arr[20],temp;
for(i=1;i<=5;i++)
{
    cin>>arr[i];
}
for(i=1;i<=5;i++)
{
    for(j=i;j<=5;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"\n sorted list=";
for(i=1;i<=5;i++)
{
cout<<"\t"<<arr[i];
}
}
int main()
{
    int ch;
cout<<"\n 1. enter for integer array";
cout<<"\n 2. enter for float array";
while(1)
{
cout<<"\n enter choice=";
cin>>ch;
switch(ch)
{
case 1:
    sort<int>();
    break;
case 2:
    sort<float>();
    break;
default:
    cout<<"\n inavlid choice!!";
}
}
    return 0;
}

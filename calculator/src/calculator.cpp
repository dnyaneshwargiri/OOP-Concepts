//============================================================================
// Name        : calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class cal
{
    public:
    float x,y;
    void getdata();
    void add();
    void sub();
    void multiply();
    void divide();
    };
void cal::getdata()
{cout<<"\n enter 2 no=";
cin>>x>>y;
    }
void cal::add()
{cout<<"\n addition="<<x+y;
    }
void cal::sub()
{cout<<"\n subtraction="<<x-y;
    }
void cal::multiply()
{cout<<"\n multiplication="<<x*y;
    }
void cal::divide()
{cout<<"\n division="<<x/y;
    }
int main()
{
    int ch,l;
    cal p;
do
{
cout<<"\n enter 1 for addition=";
cout<<"\n enter 2 for subtraction=";
cout<<"\n enter 3 for multiplication=";
cout<<"\n enter 4 for division=";
p.getdata();
cout<<"\n enter your choice=";
cin>>ch;
switch(ch)
{case 1:p.add();
break;
case 2:p.sub();
break;
case 3:p.multiply();
break;
case 4:p.divide();
break;
default:cout<<"\n INVALID CHOICE !!!!!";
break;
}
cout<<"\n enter 1 to continue=";
cin>>l;
}
while(l==1);
    return 0;
}

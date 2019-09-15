#include <iostream>
#include<string.h>
using namespace std;
class error
{
public:
    int age;
    double salary;
    char car,name[10];
    string city;

   void getage()
    {
        cout<<"\n enter age=";
        cin>>age;
try
{
    if(age>18 && age<=55)
    {
    	cout<<age;
    }
    else  throw (age);
}
catch(int age)
{
cout<<"\n invalid age";
}
    }

void getcar()
{
	cout<<"\n do you have car (y/n)=";
	        cin>>car;
	try
	{
		if(car=='y')
		 {
			 cout<<"\n enter car name= ";
			 cin>>name;
			 cout<<"\n your car is="<<name;
		 }
		 else    throw (car);
	}
	catch(char car)
	{
	cout<<"\n you don't have  car";
	}
}

void getcity()
{
	cout<<"\n enter your city=";
	        cin>>city;
	        try
	        {
	        	if(city=="pune"||city=="mumbai" ||city=="bangalore" ||city=="chennai")
	       	    {
	   	    	 cout<<city;
	            }
	            else throw (city);
	        }
	catch(string city)
	{
	cout<<"\n invalid city";
	}
}
void getsalary()
{
	 cout<<"\n enter your income=";
	 cin>>salary;
	 try
	 {
		 if(salary>=50000 && salary<=100000)
		     {
			 cout<<salary;
		     }
		 else   throw (salary);
	 }

catch(double salary)
{
cout<<"\n invalid salary";
}
}
};
int main()
{
    int i;
error p[5];
for(i=0;i<3;i++)
{
p[i].getage();
p[i].getsalary();
p[i].getcity();
p[i].getcar();
cout<<"\n";
}
   return 0;
}

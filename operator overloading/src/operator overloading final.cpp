//============================================================================
// Name        : operator.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class complex
{
public:
	int x,y;
	friend istream &operator >> (istream &is, complex &r)
	{
	  is>>r.x;
	  is>>r.y;
	  return is;
	}

	friend ostream &operator<<(ostream &os, complex &s)
	{
	    os<<s.x;
	    os<<"+"<<s.y<<"i";
	    return os;

	}



	complex operator +(complex c)
	{
		complex t;
		t.x=x+c.x;
		t.y=y+c.y;
		return t;
	}

	complex operator *(complex m)
	{
		complex n;
		n.x=(x*m.x)-(y*m.y);
		n.y=(x*m.x)+(y*m.y);
		return n;
	}
};
/*istream &operator >>(istream &is, complex &r)
{
  is>>r.x;
  is>>r.y;
  return is;
}
ostream &operator <<(ostream &ot,complex &c)
{
    ot<<c.x;
    ot<<"+"<<c.y<<"i";
    return ot;

}*/
int main()
{
   complex c1, c2, c3, c4;
   cout<<"\nEnter the real part then imaginary part  of complex number:";
    cin>>c1;
   cout<<"\nThe entered complex number is:";
   cout<<c1;
   cout<<"\nEnter the real part then imaginary part of complex number:";
   cin>>c2;
   cout<<"\nThe entered complex number is:";
   cout<<c2;
   c3=c1+c2;
   cout<<"\nThe addition of the two complex numbers is:";
   cout<<c3;
   c4=c1*c2;
   cout<<"\nThe multiplication of the two complex numbers is:";
   cout<<c4;

   return 0;
}

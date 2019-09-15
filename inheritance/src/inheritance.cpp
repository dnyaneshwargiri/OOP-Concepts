//============================================================================
// Name        : inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class publication
{
  public:
    char title[20];
    float price;
    void gettitle();
    void getprice();
};
void publication::gettitle()
{
cout<<"\n ENTER TITLE=";
cin>>title;
}
void publication::getprice()
{
cout<<"\n ENTER PRICE=";
cin>>price;
}
class book:public publication
{
public:
int pageno;
void getpageno();
void display1();
};
void book::getpageno()
{
cout<<"\n ENTER PAGE NO. OF BOOK=";
cin>>pageno;
}
class tape:public publication
{
public:
float playtime;
void getplaytime();
void display2();
};
void tape::getplaytime()
{cout<<"\n ENTER PLAY TIME OF TAPE=";
cin>>playtime;
    }
void book::display1()
{
    cout<<"\nTITLE="<<title;
    cout<<"\n PRICE="<<price;
    cout<<"\n PAGE COUNT NO.="<<pageno;

}
void tape::display2()
{
    cout<<"\n PLAY TIME="<<playtime<<"\n";

}
int main()
{
    book p;
    tape q;
    p.gettitle();
    p.getprice();
    p.getpageno();
    q.getplaytime();
    p.display1();
    q.display2();

    return 0;
}

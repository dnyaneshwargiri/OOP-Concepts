//============================================================================
// Name        : stl.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
	
queue<int> pt;
stack<int> st;
int choice,item;
while(1)
{
cout<<"\n .................."<<endl;
cout<<"stack implimentation in stl"<<endl;
cout<<"......................"<<endl;
cout<<"1.insert element in stack"<<endl;
cout<<"2.delete element from stack"<<endl;
cout<<"3.size of stack"<<endl;
cout<<"4.top element of stack"<<endl;
cout<<"\n queue:-\n ";
cout<<"5.insert"<<endl;
cout<<"6.delete"<<endl;
cout<<"7.front"<<endl;
cout<<"8. back"<<endl;
cout<<"9. exit"<<endl;
cout<<"\n enter your choice=";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n enter value to be inserted="<<endl;
cin>>item;
st.push(item);
break;
case 2:
item=st.top();
st.pop();
cout<<"\n element\t"<<item<<"\tdeleted"<<endl;
break;
case 3:
cout<<"\n size of the stack=";
cout<<st.size()<<endl;
break;
case 4:
cout<<"\n top element of stack=";
cout<<st.top()<<endl;
break;
//queue
cout<<"\n queue:-";
case 5:
    cout<<"\n enter element to be inserted";
    cin>>item;
    pt.push(item);
    break;
case 6:
    item=pt.front();
    pt.pop();
    cout<<"deleted element is="<<item;
    break;
case 7:
    cout<<"\n front element of queue=";
    cout<<pt.front()<<endl;
    break;
case 8:
    cout<<"\n end element is=";
    cout<<pt.back();
    break;
case 9:
exit(1);
break;
default:
cout<<"\n invalid choice!!!";
}
}
return 0;
}

#include <iostream>
#include <fstream>
#include <iomanip>
#include<string.h>
using namespace std;
int i;
class tele
{
public:
    string name;
    int tele;
    void getdata()
    {
        cout<<"\n enter name=";
        cin>>name;
       cout<<"\n enter tele no=";
       cin>>tele;
    }
    void display()
    {

        cout<<i+1<<"\t"<<name<<"\t\t"<<tele<<"\n";
    }
};

int main()
{int pos,tel;
   string nam;
int no,loc,ch;
tele p[5],q;
fstream file;
file.open("telephone.txt",ios::in|ios::out|ios::binary);
for(i=0;i<3;i++)
{
p[i].getdata();
file.write((char *)&p[i],sizeof(p[i]));
}
file.seekg(0);

cout<<"\n records are=";
cout<<"\nSr.No.\t name\t \ttele no\n";
for(i=0;i<3;i++)
{
    file.read((char *)&p[i],sizeof(p[i]));
    p[i].display();
}
cout<<"\n1.Determine the telephone number of specified person";
cout<<"\n2.Determine the name if telephone number is known";
cout<<"\n3.Update the telephone number, whenever there is a change.";
while(1)
{
cout<<"\n enter your choice=";
cin>>ch;
switch(ch)
{
case 1:

cout<<"\n enter name=";
cin>>nam;
file.seekg(0,ios::beg);
pos=-1;
i=0;
while(!file.eof())
{
	file.read((char*)&p[i],sizeof(p[i]));
    if(nam==p[i].name)
    {
        pos=i;
        break;
    }
    i++;
}
if(pos==-1)
{
cout<<"\n name not found!!";
}
loc=pos*sizeof(p[i]);
file.seekp(loc);
file.read((char*)&p[i],sizeof(p[i]));
cout<<"\n tele no.="<<p[i].tele<<"\n";
file.close();
break;

case 2:
	cout<<"\n enter tele no.=";
	cin>>tel;
	file.seekg(0,ios::beg);
	pos=-1;
	i=0;
	while(!file.eof())
	{
		file.read((char*)&p[i],sizeof(p[i]));
	    if(tel==p[i].tele)
	    {
	        pos=i;
	        break;
	    }
	    i++;
	}

	loc=pos*sizeof(p[i]);
	file.seekp(loc);
	file.read((char*)&p[i],sizeof(p[i]));
	cout<<"\n name is="<<p[i].name<<"\n";
	file.close();
    break;

case 3:

cout<<"\n enter record no.to edit=";
cin>>no;
loc=(no-1)*sizeof(p[i]);
file.seekp(loc);
cout<<"\n enter New record";
q.getdata();
file.write((char*)&q,sizeof(q));
file.seekg(0);
cout<<"\n Updated list=\n";
cout<<"\nSr.No.\t name\t \ttele no\n";
for(i=0;i<3;i++)
{
file.read((char*)&p[i],sizeof(p[i]));
 p[i].display();
}
file.close();
break;
default:cout<<"\n INVALID CHOICE!!!";
}
}
    return 0;
}

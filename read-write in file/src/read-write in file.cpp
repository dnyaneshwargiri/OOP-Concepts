
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int i;
class employ
{
public:
    char name[20],depart[20],qali[20],dob[10],quali[20];
    int id,salary;
    void getdata()
    {
        cout<<"\n enter name=";
        cin>>name;
        cout<<"\n enter department=";
        cin>>depart;
        cout<<"\n enter id no=";
        cin>>id;
        cout<<"\n enter date of birth=";
        cin>>dob;
        cout<<"\n enter salary=";
        cin>>salary;
        cout<<"\n enter qualification=";
        cin>>quali;
    }
    void display()
    {

        cout<<i<<"\t"<<name<<"\t\t"<<depart<<"\t"<<id<<"\t"<<dob<<"\t"<<salary<<"\t"<<quali<<"\n";
    }
};

int main()
{
int no,loc;
employ p[5],q;
fstream file;
file.open("sanket.txt",ios::in|ios::out);
for(i=0;i<3;i++)
{
p[i].getdata();

file.write((char *)&p[i],sizeof(p[i]));
}
file.seekg(0);
cout<<"\n records are=";
cout<<"\nSr.No.\t name\t    department\tid no\tdate of birth\tsalary\tqualification\n";
for(i=0;i<3;i++)
{
    file.read((char *)&p[i],sizeof(p[i]));
    p[i].display();
}
cout<<"\n enter record no.to edit=";
cin>>no;
loc=(no-1)*sizeof(p[i]);
file.seekp(loc);
cout<<"\n enter New record";
q.getdata();
file.write((char*)&q,sizeof(q));
file.seekg(0);
cout<<"\n Updated list=\n";
cout<<"\nSr.No.\t name\t    department\tid no\tdate of birth\tsalary\tqualification\n";
for(i=0;i<3;i++)
{
file.read((char*)&p[i],sizeof(p[i]));
 p[i].display();
}
file.close();
    return 0;
}

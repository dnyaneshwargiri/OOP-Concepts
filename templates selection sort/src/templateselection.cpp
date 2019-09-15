#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>
void sort()
{
int i,j;
T n[6],temp;
cout<<"Enter the elements";
for(i=0;i<5;i++)
{
cin>>n[i];

}
for(i=0;i<4;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(n[i]>n[j])
		{
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
		}
	}
}
for(i=0;i<5;i++)
{
cout<<n[i]<<"\t";
}
}
int main()
{int ch;

	while(1)
	{
	cout<<"\n1.Sort of integers\n2.Sort of float.\nEnter your choice.";
	cin>>ch;
	switch(ch)
	{
	case 1:
		sort<int>();
		break;
	case 2:
		sort<float>();
		break;

	}
	}
	return 0;
}

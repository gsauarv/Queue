#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5],i;
	int *p[5];	
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		cout<<"\n"<<p[i];
	}
}

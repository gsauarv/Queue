#include<iostream>
#include<conio.h>
using namespace std;
struct person
	{
		string name;
		int id;
		string address;
	
	}p1;
int main()
{
	p1.name = "Bill";
	p1.id = 01;
	p1.address = "Kathmandu";
	cout<<"\nName : " <<p1.name; 
	cout<<"\nid : " <<p1.id;
	cout << "\naddress :" <<p1.address<<"\n";
}

#include<iostream>
#define size 100
using namespace std;
int a[size];
int front=-1;
int rear =-1;

void enqueue(int value)
{
	if(rear==size-1)
	{
		cout<<"\n"<<"Queue OverFlow";
	}
	else
	{
		if(front==-1)
		front++;
		rear++;
		a[rear]=value;		
	}
}

void dequeue()
{
	if(front==-1)
	{
		cout<<"\n"<<"Queue Overflow";
	}
	else
	{
		front++;
		cout<<"Value Dequeued";	
	}
}
void Front()
{
	if(front==-1)
	{
		cout<<"Queue Underflow";
	}
	cout<<"\n"<<"Front Items is " << a[front];
}
void display(int a[])
{
	int i;
	for(i=front;i<=rear;i++)
	{
		cout<<a[i];
	}
}

int main()
{
	int i,ch,value,loop=0;
	cout<<"Enter Choice";
	
	do{
		cout<<"\n 1:Enqueue \n 2:Dequeue \n 3:Display Front \n 4: Display \n 5:Exit\n";
		cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nEnter value for enqueue\n";
			cin>>value;
			enqueue(value);
			break;
			
		case 2:
			dequeue();
			break;
		case 3:
			Front();
			break;
		case 4:
			display(a);
			break;
		case 5:
			break;
		default:
			cout<<"--Invalid Input--";
	

		
				
		
	}
		cout<<"\n"<<"\n\nDo You Want to Continue ! Enter 1 ! Exit: Enter 0\n";
	cin>>loop;
}while(loop==1);
	
}


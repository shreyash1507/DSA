#include <bits/stdc++.h>
#define max 5
using namespace std;


int pri[max];
int front,rear=-1;

void check(int val)
{
	int i,j;
	for (i=0;i<=rear;i++)
	{
		if(val>=pri[i])
		{
			for(j=rear+1;j>i;j--)
			{
				pri[j]=pri[j-1];
			}
			pri[i]=val;
		}
	}
	pri[i=val];
}

void insert(int val){
	if(rear>=MAX-1)
	{
		cout<<"Overflow"<<endl;
	}
	if((front==-1)&&(rear==-1))
	{
		front++;
		rear++;
		pri[rear]=val;
	}
	else
	check(val);
	rear++;
}

void del(int val){
	int i;
	if((front==-1)&&(rear==-1))
	{
		cout<<"Queue is empty"<<endl;
	}
	for(i=0;i<=rear;i++)
	{
		if(val==pri[i])
		{
			for(;i<rear;i++)
			{
			pri[i]=pri[i+1];
		}
		pri[i]==-99;
		rear--;
		
		 
		if(rear==-1)
		front=-1;
	}
}
}

void display()
{
	if((front==-1)&&(rear==-1))
	{
		cout<<"Queue is empty"<<endl;
	}
	for(;front<=rear;front++)
	{
		cout<<pri[front];
	}
	
}

int main(){
	int k;
	cout<<"\t\tMAIN MENU"<<endl;
	cout<<"\t\t1.Insert"<<endl;	
	cout<<"\t\t2.Delete"<<endl;
	cout<<"\t\t3.Display"<<endl;
	cout<<"\t\t4.EXIT"<<endl;
	int MAX;
	cout<<"\t\tEnter MAXimum size of queue"<<endl<<"\t\t";
	cin>>MAX;
	int q[MAX];
	int choice;
	while(1)
	{
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the value to insert in the circular queue"<<endl;
			cin>>k;
			insert(k);
			break;
		case 2:
			display();
			cout<<"Enter the element you want to delete"<<endl;
			cin>>k;
			del(k);
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			
		default:
			cout<<"Invalid Input"<<endl;
			break;	
return 0;
}



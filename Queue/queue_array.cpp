#include <bits/stdc++.h>
using namespace std;

int main(){
	int front=-1,rear=-1;
	int k;
	cout<<"MAIN MENU"<<endl;
	cout<<"1.Insert"<<endl;	
	cout<<"2.Delete"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.EXIT"<<endl;
	int max;
	cout<<"Enter maximum size of queue"<<endl;
	cin>>max;
	int q[max];
	int choice;
	while(1)
	{
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the value to insert in the queue"<<endl;
			cin>>k;
			if(rear==max-1)
			{
				cout<<"Oveflow"<<endl;
				break;
			}
			if(front==-1 && rear==-1)
			front=rear=0;
			else
			rear=rear+1;
			
			q[rear]=k;
			break;
		case 2:
			if(front==-1 || front>rear)
			{
				cout<<"Underflow"<<endl;
			}
			else
			{
				k=q[front];
				front=front+1;
				cout<<k<<endl;
			}
			break;
		case 3:
			for (int i=front;i<=rear;i++)
			{
				cout<<q[i]<<" ";
			}
			cout<<endl;
			break;
		case 4:
			exit(0);
			
		default:
			cout<<"Invalid Input"<<endl;
			break;			
			
	}
	
}
	

return 0;
}


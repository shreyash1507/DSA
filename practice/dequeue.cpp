#include <bits/stdc++.h>
using namespace std;

int main(){
	int front=-1,rear=-1;
	int k;
	cout<<"\t\tMAIN MENU"<<endl;
	cout<<"\t\tDouble Ended queue"<<endl;
	cout<<"\t\t1.Insert at rear"<<endl;	
	cout<<"\t\t2.Insert at front"<<endl;	
	cout<<"\t\t3.Delete from  front"<<endl;
	cout<<"\t\t4.Delete from rear"<<endl;
	cout<<"\t\t5.Display"<<endl;
	cout<<"\t\t6.EXIT"<<endl;
	int max;
	cout<<"\t\tEnter maximum size of queue"<<endl;
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
			cout<<"Enter the value to insert in the queue"<<endl;
			cin>>k;
			if(front<=0)
			{
				cout<<"Cannot insert at the front"<<endl;
				break;
			}
			else
			{
				front=front-1;
				q[front]=k;
			}
			break;
			
		case 3:
			if(front==-1)
			{
				cout<<"Underflow"<<endl;
				break;
			}
			else
			{
				k=q[front];
				cout<<k<<endl;
				if(front==rear)
				{
					front=rear=-1;
				}
				else
				{
					front=front+1;
				}
			}
			break;
			
		case 4:
			if(rear==-1)
			{
				cout<<"Cannot delete from end"<<endl;
				break;
			}
			else
			{
				k=q[rear];
				cout<<k<<endl;
				if(front==rear)
				{
					front=rear=-1;
				}
				else
				{
					rear=rear-1;
				}
			}
			break;
			
		case 5:
			for (int i=front;i<=rear;i++)
			{
			cout<<q[i]<<" ";
			}
			cout<<endl;
			break;
		case 6:
			exit(0);
			
		default:
			cout<<"Invalid Input"<<endl;
			break;			
			
	}
	
}
	

return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
	int front=-1,rear=-1;
	int k;
	cout<<"\t\tMAIN MENU"<<endl;
	cout<<"\t\t1.Insert"<<endl;	
	cout<<"\t\t2.Delete"<<endl;
	cout<<"\t\t3.Display"<<endl;
	cout<<"\t\t4.EXIT"<<endl;
	int max;
	cout<<"\t\tEnter maximum size of queue"<<endl<<"\t\t";
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
			cout<<"Enter the value to insert in the circular queue"<<endl;
			cin>>k;
			if(front==0 &&rear==max-1)
			{
			cout<<"OVERFLOW"<<endl;
			break;
			}
			if(front==-1 && rear==-1)
			{
				front=rear=0;
			}
			else if(rear==max-1 && front!=0){
				rear=rear%max;
			}
			else{
				rear=rear+1;
			}
			q[rear]=k;
			break;
		case 2:
			if(front==-1)
			{
			cout<<"Underflow"<<endl;
			break;
			}
			k=q[front];
			if(front==rear)
			{
				front=rear=-1;
			}
			else
			{
				if(front==max-1)
				front=0;
				else
				front++;
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


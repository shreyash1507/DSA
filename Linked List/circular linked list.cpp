//REFERENCE
//http://www.btechsmartclass.com/data_structures/circular-linked-list.html

#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;

void display()
{
	struct node *ptr;
	
	if(start==NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
	ptr=start;
	while(ptr->next!=start)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	}
}

void insert_beg(int val)
{
	struct node *newnode=new struct node;
	newnode->data=val;
	struct node *temp;
	if(start==NULL)
	{
		start=newnode;
		newnode->next=start;
	}
	else
	{
	temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
	newnode->next=start;
	temp->next=newnode;
	start=newnode;
}
}


void insert_end(int val)
{

	struct node *newnode=new struct node;
	newnode->data=val;
	newnode->next=start;
	struct node *ptr;
	if(start==NULL)
	{
		start=newnode;
		newnode->next=start;
	}
	else
	{
	ptr=start;
	while(ptr->next!=start)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
}
}
void del_first()
{
	struct node *t1;
	struct node *t2;
	if(start==NULL)
	{
		cout<<"UNDERFLOW"<<endl;
		return;
	}
	t1=t2=start;
	if(t1->next==start)
	{
		
		start=NULL;
		free(t1);
	}
	else
	{
		while(t1->next!=start)
		{
			t1=t1->next;
		}
		start=t2->next;
		t1->next=start;
		free(t2);
	}
	
}

void del_end()
{
	struct node *ptr;
	struct node *preptr;
	if(start==NULL)
	{
		cout<<"UNDERFLOW"<<endl;
		return;
	}
	ptr=start;
	while(ptr->next!=start)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=start;
	free(ptr);
}



int main(){
	int k,p,n;
	cout<<"\n\n";
	cout<<"###########################################################################################################"<<endl;
	cout<<"\n\n";
	cout<<"					MAIN MENU"<<endl;
	cout<<"				1. Insert at Begining"<<endl;
	cout<<"				2. Insert at End"<<endl;
	cout<<"				3. Delete at the begining"<<endl;
	cout<<"				4. Delete at the End"<<endl;
	cout<<"				5. Display"<<endl;
	cout<<"				6. EXIT"<<endl;
	cout<<"\n\n";
	cout<<"############################################################################################################"<<endl;
	while(1){
	cout<<"Enter your Choice"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter the value to insert at begining"<<endl;
			cin>>k;
			insert_beg(k);
			break;
		case 2:
			cout<<"Enter the value to insert at End"<<endl;
			cin>>k;
			insert_end(k);
			break;
		case 3:
			del_first();
			break;
		case 4:
			del_end();
			break;
		case 5:
			display();
			break;
		case 6:
			exit(0);
		default:
			cout<<"INVALID INPUT";
			break;
			}
		}
return 0;
}

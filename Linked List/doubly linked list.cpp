#include <bits/stdc++.h>
using namespace std;

struct node{
	struct node *prev;
	struct node *next;
	int data;
};

struct node *start=NULL;

void display(){
	struct node *ptr;
	if (start==NULL){
		cout<<"List is Empty";
	}
	else
	{
		ptr=start;
		cout<<endl;
		while(ptr->next!=NULL)
		{
			cout<<ptr->data<<"->";
			ptr=ptr->next;
		}
		cout<<ptr->data<<endl;
	}
}

void insert_beg(int val)
{
	struct node *new_node=new struct node;
	new_node->data=val;
	new_node->prev=NULL;
	new_node->next=start;
	if(start!=NULL)
	{
	start->prev=new_node;
	}
	start=new_node;
	display();
}

void insert_end(int val)
{
	if(start==NULL)
	{
		insert_beg(val);
		display();
	}
	else
	{
	struct node *ptr;
	struct node *new_node=new struct node;
	new_node->data=val;
	new_node->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->prev=ptr;
	display();
}	
}

void insert_after(int val,int pos)
{
	struct node *new_node=new struct node;
	new_node->data=val;
	struct node *ptr;
	ptr=start;
	while(ptr->data!=pos)
	{
		ptr=ptr->next;
	}
	new_node->next=ptr->next;
	new_node->prev=ptr;
	ptr->next->prev=new_node;
	ptr->next=new_node;
	display();
}

void insert_before(int val,int pos)

{
	struct node *new_node=new struct node;
	new_node->data=val;
	struct node *ptr;
	ptr=start;
	while(ptr->data!=pos)
	{
		ptr=ptr->next;
	}
	new_node->next=ptr;
	new_node->prev=ptr->prev;
	ptr->prev->next=new_node;
	ptr->prev=new_node;
	display();
}

void del_first()
{
	struct node *ptr;
	if(start==NULL)
	{
		cout<<"UNDERFLOW"<<endl;
	}
	else
	{
		ptr=start;
		if(start->next==NULL)
		{
			start=NULL;
		}
		else{
		start=start->next;
		start->prev=NULL;
		}
	free(ptr);
	}
	display();
}

void del_last()
{
	struct node *ptr;
	if(start==NULL)
	{
		cout<<"Underflow"<<endl;
	}
	else if(start->next==NULL)
	{
		ptr=start;
		start=NULL;
		free(ptr);
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->prev->next=NULL;
		free(ptr);
	}
	display();
}

del_after(int pos)
{
	if(start==NULL)
	{
		cout<<"Underflow"<<endl;
	}
	else
	{
		struct node *ptr;
		ptr=start;
		while(ptr->data!=pos)
		{
			ptr=ptr->next;
		}
		struct node *temp;
		temp=ptr->next;
		ptr->next=temp->next;
		temp->next->prev=ptr;
		free(temp);
	}
	display();
}

void del_before(int pos)
{
	if(start==NULL)
	{
		cout<<"Underflow"<<endl;
	}
	else
	{
		struct node *ptr;
		ptr=start;
		while(ptr->data!=pos)
		{
			ptr=ptr->next;
		}
		struct node *temp;
		temp=ptr->prev;
		temp->prev->next=ptr;
		ptr->prev=temp->prev;
		free(temp);
	}
	display();
}

int main(){
	int k,p,n;
	cout<<"\n\n";
	cout<<"###########################################################################################################"<<endl;
	cout<<"\n\n";
	cout<<"					MAIN MENU"<<endl;
	cout<<"				1. Insert at Begining"<<endl;
	cout<<"				2. Insert at End"<<endl;
	cout<<"				3. Insert after a given num"<<endl;
	cout<<"				4. Insert before a given num"<<endl;
	cout<<"				5. Delete at the begining"<<endl;
	cout<<"				6. Delete at the End"<<endl;
	cout<<"				7. Delete after a given num"<<endl;
	cout<<"				8. Delete before a given num"<<endl;
	cout<<"				9. Display"<<endl;
	cout<<"				10. EXIT"<<endl;
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
			cout<<"Enter the value to insert and its position"<<endl;
			cin>>k>>p;
			insert_after(k,p);
			break;
		case 4:
			cout<<"Enter the value to before and its position"<<endl;
			cin>>k>>p;
			insert_before(k,p);
			break;
		case 5:
			del_first();
			break;
		case 6:
			del_last();
			break;
		case 7:
			cout<<"Enter the number after which you want to delete an element"<<endl;
			cin>>k;
			del_after(k);
			break;
		case 8:
			cout<<"Enter the number before which you want to delete an element"<<endl;
			cin>>k;
			del_before(k);
			break;
			break;
		case 9:
			display();
			break;
		case 10:
			exit(0);
		default:
			cout<<"INVALID INPUT";
			break;
			}
		}
return 0;
}


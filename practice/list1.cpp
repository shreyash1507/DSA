#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
	
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

void insert_begin(int val){
	struct node *newnode =new struct node;
	newnode->data=val;
	newnode->next=start;
	start=newnode;	
	display();
}

void insert_end(int val){
	if(start==NULL)
	{
		insert_begin(val);
	}
	else
	{
	struct node *newnode =new struct node;
	struct node *ptr;
	newnode->data=val;
	newnode->next=NULL;
	ptr=start;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=newnode;

	display();
}
}

void insert_after(int val,int pos){
	struct node *newnode =new struct node;
	struct node *ptr;
	struct node *preptr;
	newnode->data=val;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=pos)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
	display();
}

void insert_before(int val,int pos){
	struct node *newnode =new struct node;
	struct node *ptr;
	struct node *preptr;
	newnode->data=val;
	ptr=start;
	preptr=ptr;
	while(ptr->data!=pos)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
	display();
}

void del_beg(){
	if(start==NULL)
	{
		cout<<"Can not delete from empty list";
	}
	else
	{
	struct node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
}
display();
}

void del_end(){
	if(start==NULL)
	{
		cout<<"Can not delete from empty list";
	}
	else
	{
	struct node *ptr;
	struct node *preptr;
	ptr=start;
	while(ptr->next!=NULL){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
display();
}

void del_after(int pos){
	if(start==NULL)
	{
		cout<<"Can not delete from empty list";
	}
	else
	{
	struct node *ptr;
	struct node *preptr;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=pos)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
}
display();
}

void del_before(int pos){
	if(start==NULL)
	{
		cout<<"Can not delete from empty list";
	}
	else
	{
	struct node *ptr;
	struct node *preptr;
	ptr=start;
	preptr=ptr;
	while(ptr->next->data!=pos)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
}
display();
}

void del_num(int n){
	if(start==NULL)
	{
		cout<<"Can not delete from empty list";
	}
	else
	{
	struct node *ptr;
	struct node *preptr;
	ptr=start;
	preptr=ptr;
	while(ptr->data!=n)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
}
display();
}

int search(int val){
	struct node *ptr;
	int count;
	count=1; 
	ptr=start;
	while(ptr!=NULL)
	{
		if(val==ptr->data)
		return count;
		
		else
		{
		ptr=ptr->next;
		count++;
		}
	}
	return -1;
	display();
}


int n=0;

int main(){
	int k,p;
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
	cout<<"				9. Delete particular node"<<endl;
	cout<<"				10. Search a node"<<endl;
	cout<<"				11. Display"<<endl;
	cout<<"				12. EXIT"<<endl;
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
			insert_begin(k);
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
			del_beg();
			break;
		case 6:
			del_end();
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
		case 9:
			cout<<"Enter the number which you want to delete"<<endl;
			cin>>k;
			del_num(k);
			break;
		case 10:
			cout<<"Enter the number to search in a list"<<endl;
			cin>>k;
			p=search(k);
			if(p==-1){
				cout<<"No. not found";
			}
			else{
				cout<<k<<" found at location "<<p<<endl;
			}
			break;
		case 11:
			display();
			break;
		case 12:
			exit(0);
		default:
			cout<<"INVALID INPUT";
			break;
			}
		}
return 0;
}


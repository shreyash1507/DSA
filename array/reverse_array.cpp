#include<iostream>
using namespace std;
int main(){
	int i,j,n,a[100];
	cout<<"Enter the number of elements of array\n";
	cin>>n;
	cout<<"Enter the Elements of array\n";
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The Origional Array you entered is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"The Reverse of the origional array is: ";
	for(i=n;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
	
return 0;
}


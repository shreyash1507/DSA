#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int k,int n)
{
	int i,f=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		return i;
	}
	return -1;
}

int main(){
	int n,i,k;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the number to search"<<endl;
	cin>>k;
	int m=linear_search(a,k,n);
	if(m==-1)
	cout<<"Element Not found";
	else
	cout<<"Element "<<k<<" found at location "<<m+1;
return 0;
}


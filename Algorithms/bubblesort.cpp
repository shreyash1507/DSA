#include <bits/stdc++.h>
using namespace std;

void bubble(int a[],int n){
	int i,t;
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
	
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main(){
	int n;
	int a[n];
	cout<<"Enter the number of Elements of array";
	cin>>n;
	cout<<"Enter the array Elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubble(a,n);
return 0;
}


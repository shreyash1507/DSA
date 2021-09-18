#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n)
{
	int i,j,min,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		t=arr[i];
		arr[i]=arr[min];
		arr[min]=t;
	}
}
int main(){
	int n,i;
	cout<<"Enter the number of elements in the array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<n;i++){
	cin>>arr[i];
	}
	selection(arr,n);
	cout<<"Sorted array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
return 0;
}


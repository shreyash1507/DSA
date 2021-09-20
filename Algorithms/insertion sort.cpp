#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n){
	int i=0,temp,j;
	for (i=1;i<=n-1;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<=arr[j]&& j>=0)
		{
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=temp;
	}
	cout<<"Sorted array:"<<endl;
	for (i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	
}
}
int main()
{
	int n,arr[n],i;
	cout<<"Enter the number of elements in the array: "<<endl;
	cin>>n;
	cout<<"Enter the array elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion(arr,n);
}

#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[],int k,int begin,int end)
{
	int mid;
	mid=(begin+end)/2;
	if(end<begin)
	return -1;
	else
	{
		if(k==a[mid])
		{
			return mid;
		}
		else if(k<a[mid])
		{
			return binary_search(a,k,begin,mid-1);
		}
		else
		{
			return binary_search(a,k,mid+1,end);
		}
	}	

}

int main(){
	int n,i,k;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);  //inbuilt function 
	cout<<"Sorted array"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	cout<<"Enter the number to search"<<endl;
	cin>>k;
	int m=binary_search(a,k,0,n-1);
	if(m==-1)
	cout<<"Element Not found";
	else
	cout<<"Element "<<k<<" found at location "<<m+1;
return 0;
}


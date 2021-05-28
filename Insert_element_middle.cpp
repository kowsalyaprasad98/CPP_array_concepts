#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,ind,p,val;
	cout<<"Enter k value:";
	cin>>k;
	cout<<"Enter position value:";
	cin>>p;
	cout<<"Enter to insert the element in the array:";
	cin>>val;
	int arr[k];
	for(int i=0;i<k;i++)
	{
		cin>>arr[i];
	}
	ind=p-1;
	for(int s=k-1;s>=ind;s--)
	{
	   	arr[s+1]=arr[s];
	}
	arr[ind]=val;
	for(int i=0;i<=k;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

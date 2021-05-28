#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,pos=-1,cap,arr[cap];
	cin>>cap;
	for(int i=0;i<cap;i++)
	{
		cin>>arr[i];
	}
	cin>>x;
	for(int i=0;i<cap;i++)
	{
	    if(arr[i]==x)
	   {
	     	pos=i;
	    	if(pos==-1)
	    	{
			   cout<<"element not found";
		    }
		    else
		   {
		
		      for(int i=pos;i<cap;i++)
		      {
		    	arr[i]=arr[i+1];
		      }
              cap--;
        	}
        	cout<<"The elements present in the array";
	        for(int i=0;i<cap;i++)
	        {
		      cout<<arr[i]<<" ";
	        }
       } 
   
}
		
	return 0;
}

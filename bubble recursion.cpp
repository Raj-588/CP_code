#include<iostream>
using namespace std;

int bbubble(int arr[],int n,int i,int j)
{
	
	if(i==n-1)
	{
		return -1;
	}
	if(j==n-1)
	{
		 bbubble(arr,n,i+1,0);
		
	}
	else
	{
		
		if(arr[j]>arr[j+1])
        {
    	  swap(arr[j],arr[j+1]);
	    }
	
 	    bbubble(arr,n,i,j+1);
	
	}
	
	
//	for(int j=0;j<n-1;j++)
//	{
//		if(arr[j]>arr[j+1])
//		{
//			swap(arr[j],arr[j+1]);
//		}
//	}


    
}



int main()
{
	//recursion bubble
	
	int arr[]={5,4,3,2,1};
	
	int n=sizeof(arr)/sizeof(int);
	
	bbubble(arr,n,0,0);
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	return 0;
}

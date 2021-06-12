#include<iostream>
using namespace std;

int main()
{
	int arr[]={4,5,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	
	
	int key,i,j;
	
	
	for(i=0;i<n;i++)
	{
		 key=arr[i];
		
		for(j=i-1; (j>=0 and arr[j]>key);j--)
		{
			arr[j+1]=arr[j];
		}
		
		arr[j+1]=key;
	}
	
	
	for(auto x:arr)
    {
    	cout<<x<<" ";
	}


}

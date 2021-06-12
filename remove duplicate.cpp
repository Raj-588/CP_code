#include<iostream>
using namespace std;


int main()
{
	int arr[]={1,2,2,3,3,3,4};
	
	int n=sizeof(arr)/sizeof(int);
	
	
	int i,j;
	for( i=1,j=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			arr[j++]=arr[i];
		}
	}
	
	
	for(int i=0;i<j;i++)
	{
		cout<<arr[i]<<" ";
	}
}

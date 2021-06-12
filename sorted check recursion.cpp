#include<iostream>
using namespace std;

bool csort(int arr[],int n)
{
	
	if(n==0 || n==1)
	{
		return true;
	}
	
	if(arr[0]<=arr[1] && csort(arr+1,n-1)==true)
	{
		return true;   
	}
	else
	{
		return false;
	}	
}

int main()
{
	
	int arr[]={1,4,10,8,9};
	
	int n=sizeof(arr)/sizeof(int );
	if(csort(arr,n))
	{
		cout<<"sorted array";
	}
	else
	{
		cout<<"unsorted array";
	}
	
	return 0;
}

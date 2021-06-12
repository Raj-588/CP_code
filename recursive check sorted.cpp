#include<iostream>

using namespace std;
void sorted(int arr[4],int n);
int main()
{
	int arr[4];
	
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	
	int n=sizeof(arr)/sizeof(int);
	
	sorted(arr,n);
	
	return 0;
}

void sorted(int arr[],int n)
{
	if(n==0 || n==1)
	{ 
	   cout <<"true";
	}
	
	if(arr[0]<arr[1] && sorted(arr+1,n-1))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
	return 0;
	
	
}


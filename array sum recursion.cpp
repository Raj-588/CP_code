#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
	
	if(n==0)
	{
		return 0;
	}
	
     
     return arr[0]+ sum(arr+1,n-1);
	
}
int sum2(int arr[],int n)
{
	if(n==0)
	{
		return 0;
	}
	
	return arr[n-1]+sum2(arr,n-1);
	
}

// return sum3(arr,n,i+1)+arr[i]
int main()
{
	int arr[]={1,2,3,7,7,7};
	
	int n=sizeof(arr)/sizeof(int);
	
	cout<<sum(arr,n)<<endl;
	cout<<sum2(arr,n)<<endl;
	
	//sum3(arr,n,0);
}

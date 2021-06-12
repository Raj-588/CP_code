#include<iostream>
using namespace std;

int main()
{
	int n=5;
	
	int arr[4];
	
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	
	int xor1=0;
	
	for(int i=0;i<n-1;i++)
	{
		xor1=xor1^arr[i];
	}
	
	int xor2=0;
	
	for(int i=1;i<=5;i++)
	{
		xor2=xor2^i;
	}
	
	cout<<(xor1^xor2);
	
	
}

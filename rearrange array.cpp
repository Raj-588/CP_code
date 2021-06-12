#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]={4,0,2,1,3};
	
	int n=sizeof(arr)/sizeof(int);
	
	for(int i=0;i<n;i++)
	{
		arr[i]+=(arr[arr[i]]%n)*n;
	}
	
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]/n;
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

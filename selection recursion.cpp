#include<iostream>

using namespace std;

int selection(int arr[],int n,int i)
{
	if(i==n-1)
	{
		return -1;
	}
	
	
	int min_index=i;
	
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min_index])
		{
			min_index=j;
		}
	}
	
	swap(arr[min_index],arr[i]);
	
	selection(arr,n,i+1);

}

int main()
{
	int arr[]={2,5,3,6,7};
	
	int n=sizeof(arr)/sizeof(int);
	
	selection(arr,n,0);
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	
	return 0;
}

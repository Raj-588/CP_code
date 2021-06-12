#include<iostream>
using namespace std;

int main()
{
	int arr[] = {-1, 2, -3, 4,5, 6, -7, 8, 9}; 
	
	int n=sizeof(arr)/sizeof(int);
	
	
	int j=n-1;
	int i=0;
	
	while(i<=j)
	{
		if(arr[i]<0 && arr[j]>0)
		{
			swap(arr[i],arr[j]);
			i++;j--;
		}
		else if(arr[i]>0 && arr[j]<0)
		{
			i++;j--;
		}
		else if(arr[i]>0)
		{
			i++;
		}
		else if(arr[j]<0)
		{
			j--;
		}
	}
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
    j=0;         
	
	for(int i=0;i<n;i++)              
	{
		if(arr[i]>0)
		{
			j++;
			
		}	
	}
	
	for(int i=1;i<n;i=i+2)
	{
		if(arr[i]>0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	
}

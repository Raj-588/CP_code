#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,3,1,2,4};
	int n=sizeof(arr)/sizeof(int);
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	
	cout<< endl;
	
	int min_index;
	
	for(int i=0;i<n-1;i++)
    {
    	min_index=i;
    	
    	for(int j=i+1;j<n;j++)
    	{
    		if(arr[j]<arr[min_index])
    		{
    			min_index=j;
			}
		}
		
		swap(arr[min_index],arr[i]);
	}
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
}

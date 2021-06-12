#include<iostream>
using namespace std;

int main()
{
	int arr[]={5,4,3,1};
	
	int n=sizeof(arr)/sizeof(int);
	
	int i,j,temp;
	
	for(i=0;i<n-1;i++)
	{
	
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);
			}

		}
		
		for(int k=0;k<n;k++)
		{
		    cout<<arr[k]<<" ";
	    }
	    
		cout<<endl;
	}
	
	for(int k=0;k<n;k++)
	{
	    cout<<arr[k]<<" ";
    }
	
}

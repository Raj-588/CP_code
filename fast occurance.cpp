#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,5,8,8,8,8,10,12};
	
	int n=sizeof(arr)/sizeof(int);
	
	int key;
	cin>>key;
	
	int l=0,r=n-1;

	int ans =0;
	while(l<=r)
	{   
	    int mid=(l+r)/2;
	     	
	     	
		if(arr[mid]==key)
		{
			ans=mid;
			l=mid+1;
			
		}
		else if(arr[mid]>key)
		{
			r=mid-1;
		}
		else if(arr[mid]<key)
		{
			l=mid+1;
		}
		
	}
	
	cout<<ans;
	
	
	
	
	return 0;
}

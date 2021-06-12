#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={4,5,1,2,3};
	
	int n=sizeof(arr)/sizeof(int);
	
	int key ;
	cin>>key;
	
	int l=0,r=n-1,f=0;
	
	
	while(l<=r)
	{
		int mid=(l+r)/2;
		
		if(arr[mid]==key)
		{
			cout<<mid;
		    f=1;
		    break;
		}
		else if(arr[l]<=arr[mid])
		{
			if(key>=arr[l] && key<=arr[mid])
			{
				r=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
		else{
			if(key>=arr[mid]  && key<=arr[r])
			{
				l=mid+1;
			}
			else
			{
				r=mid-1;
			}
		}
		
	}
	
	if(f==0)
	{
		cout<<-1;
	}
	

	return 0;
}

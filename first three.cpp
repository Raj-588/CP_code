#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,4,-5,7};
	
	int n=sizeof(arr)/sizeof(int);
	
	
	int f=0,s=0,t=0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>f)
		{
			t=s;
			s=f;
			f=arr[i];
		}
		else if(arr[i]>s)
		{
			t=s;
			s=arr[i];
			
			
		}
		else 
		{
			t=arr[i];
		}
	}
	
	
	cout<<f<<" "<<s<<" "<<t;
}

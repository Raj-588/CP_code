#include<iostream>
using namespace std;

int main()
{
	int arr[]={0,0,0,1,0,1,1,0,0,0,1,1};
	
	
	int n=sizeof(arr)/sizeof(int);
	cout<<n<<endl;
	
	int c=0;
	
	int temp;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			temp=arr[i];
			arr[i]=arr[c];
			arr[c]=temp;
			
			c++;
		}
	}
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
}

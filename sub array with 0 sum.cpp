#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]={-3,2,3,1,6};
	
	int n=sizeof(arr)/sizeof(int);
	
	
	//c_sum another approach and using unordered set, o(n) extra space
	unordered_set<int>s;
	int ps=0;
	int f=0;
	
	for(int i=0;i<n;i++)
	{
		ps+=arr[i];
		
		if(ps==0 || s.find(ps)!=s.end())
		{
			int f=1;
			cout<<"True"<<" ";
			break;
		}
		s.insert(ps);
	}
	
	if(f==0)
	{
		cout<<"False";
	}
	
	
	
	
	
	
//	int sum;
//	for(int i=0;i<n;i++)
//	{
//		sum=0;
//		for(int j=i;j<n;j++)
//		{ 
//		    sum+=arr[j];
//			if(sum==0)
//			{
//				cout<<"True";
//				break;
//			}
//		}
//	}
	
	
	
	
	
	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i;j<n;j++)
//		{ 
//		    sum=0;
//			for(int k=i;k<=j;k++)
//			{
//				sum+=arr[k];
//			}
//			if(sum==0)
//			{
//				cout<<"true";
//			}
//		}
//	}
	
	
	
	
	return 0;
}

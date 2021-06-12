#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]={4,2,-3,1,6};
	
	int n=sizeof(arr)/sizeof(int);
	int k=4;
	
	//c_sum another approach and using unordered set, o(n) extra space
	unordered_map<int,int>m;
	int ps=0;
	int max_len=0;
	
	for(int i=0;i<n;i++)
	{
		ps+=arr[i];
		
		if(ps==k)
		{
			max_len=max(max_len, (i+1));
		}
		
		if(m.find(ps-k)!=m.end())
		{
			int j=m[ps-k];
			max_len=max(max_len,i-j);
		}
		else
		{
			m[ps]=i;
		}
		
	}
	
	cout<<max_len;
	

	return 0;
}

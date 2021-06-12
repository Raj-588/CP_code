#include<iostream>
using namespace std;

int ways(int n,int k)
{
	if(n==0)
	{
		return 1;
	}
	
	int way=0;
	
	for(int i=1;i<=k;i++)
	{
		if(n-i>=0)
		{
			way+=ways(n-i,k);
		}
		
	}
	
	return way;
}

int main()
{
	int n; cin>>n;
	
	int k; cin>>k;
	
	cout<<ways(n,k);
	
	return 0;
}

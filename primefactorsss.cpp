#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n=n/i;
			}
		}
	}
	
	if(n!=1)
	{
		cout<<n<<" ";
	}
	
	
	
	
}

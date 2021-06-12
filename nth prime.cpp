#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
	vector<bool>v(1001,true);
	vector<int>vrr;
	
	for(int i=2;i*i<1001;i++)
	{
		if(v[i]==true)
		{
			for(int j=i*i;j<1001;j+=i)
			{
				v[j]=false;
			}
		}
	}
	
	for(int i=2;i<1001	;i++)
	{
		if(v[i]==true)
		{
			vrr.push_back(i);
		}
	}
	
	return vrr[n-1];
}


int main()
{
	int n;
	cin>>n;
	
	cout<<prime(n);
	return 0;
}

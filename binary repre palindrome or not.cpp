#include<bits/stdc++.h>
using namespace std;

bool iskthbitset(unsigned int x,unsigned int k)
{
	return x & (1<<k);
}

bool palin(unsigned int x)
{
	unsigned int l=sizeof(unsigned int)*8-1;
	unsigned int r=0;
	
	while(l>r)
	{
		if(iskthbitset(x,l) != iskthbitset(x,r))
		{
			return false;
		}
		
		l--;
		r++;
	}
}

int main()
{
	unsigned int x=1<<3;
	//cin>>x;
	
	cout<<palin(x)<<endl;
	
	
	return 0;
}

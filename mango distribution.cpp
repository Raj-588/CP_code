#include<bits/stdc++.h>
using namespace std;
int b_cof(int a,int b)
{
	int res=1;
	if(b>a-b)
	{
		b=a-b;
	}
	
	for(int i=0;i<b;i++)
	{
		res*=(a-i);
		res/=(i+1);
	}
	
	
	return res;
	
}
int cal(int m,int n)
{
//	if(m<n)
//	{
//		return 0;
//	}
//	
	int ways=b_cof(m+n-1,n-1);
	
	return ways;
}

int main()
{
	int m=1,n=12;
	
	int res=cal(m,n);
	cout<<res;
	return 0;
}

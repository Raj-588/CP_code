#include<iostream>
using namespace std;

//int count(int n)
//{
//	if(n==1)
//	{
//		return 0;
//	}
//	if(n==2)
//	{
//		return 1;
//	}
//	int x=count(n-2);
//	int y=count(n-1);
//	
//	return (n-1)*(x+y);
//	
//}

int topdown(int n,int *memo)
{
	if(n==0) return 0;
	if(n==2) return 1;
	
	if(memo[n]!=-1)
	{
		return memo[n];
	}
	
	return memo[n]=(n-1)*(topdown(n-1,memo)+topdown(n-2,memo));
	
	
	
}


int bottomup(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	
	int *dp=new int[n+1];
	
	dp[1]=0;
	dp[2]=1;
	
	
	for(int i=3;i<=n;i++)
	{
		dp[i]=(i-1)*(dp[i-1] + dp[i-2]);
	}
	return dp[n];
}

int main()
{
	int n; cin>>n;
	
	//cout<<count(n)<<endl;
	int *memo=new int[n+1];
	for(int i=1;i<=n;i++)
	{
		memo[i]=-1;
	}
	cout<<topdown(n,memo)<<endl;
	cout<<bottomup(n);
	return 0;
}

#include<iostream>
using namespace std;
//not correct
int main()
{
	int n; cin>>n;
	
	int l=0,r=n,f=0;
	float ans =-1;
	
	while(l<=r)
	{
		int mid=(l+r)>>1;
		
		if(mid*mid==n)
		{
			cout<<mid;
			break;
			f==1;
			
		}
		if(mid*mid<n)
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	
	if(f!=1){
		
		   cout<<ans;
	}
 
}

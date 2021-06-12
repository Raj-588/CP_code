#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	long long int n;
	
	while(t--)
	{  
		 
		 cin>>n;
         int res=0;
		 for(int i=2;i<=n;i++)
		 {
			 if(i%2==0 || i%3==0 || i%5==0 || i%7==0 || i%9==0 || i%11==0 || i%13==0 || i%15==0 || i%17==0 || i%19==0)
			 {
				 res++;
			 }
		 }
		 cout<<res<<endl;

	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int nsum(int n);
int primefactor(int n);

int main() {

	int n;
	cin>>n;
	int ps=0,sum=0;

	ps=primefactor(n);
	sum=nsum(n);

	if(sum==ps)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

int primefactor(int n)
{   
	int psum=0;

	while (n % 2 == 0)  
    {  
        psum+=2;  
        n = n/2;  
    }  
  
	for(int i=3; i<= ( sqrt(n) ); i=i+2)
	{
		if(n%i==0)
		{
            psum+=i;
			n=n/i;
		}
	}
    

	if(n>2)
	{
		 psum+=n;
	}

	return psum;
}

int nsum(int n)
{   
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
		
	}
	return sum;
}

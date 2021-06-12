#include<iostream>
using namespace std;

int main()
{
	int n=6;
	
	int c=0;
	while(n>0)
	{
//		if(n&1)
//		{
//			c++;
//		}
//		
        n=n&(n-1); c++;
		//n=n>>1;
	}
	
	cout<<c;
}


// better way brian algoo



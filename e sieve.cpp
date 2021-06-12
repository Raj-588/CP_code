#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n=20;
        
        
        int p[20]={0};
        
        
//        for(int i=3;i<=20;i=i+2)
//        {
//        	p[i]=1;
//		}	
		
		for(int i=2;i<=20;i=i+2)
		{
			
			{
				for(int j=i*2;j<=n;j=j+i)
				{
					p[j]=1;
				}
			}
		}
		
		p[2]=1;
		p[0]=p[1]=0;
		
		
		
		for(int i=0;i<=n;i++)
		{
			if(p[i]==1)
			{
				cout<<i<<" ";
			}
		}
				
}

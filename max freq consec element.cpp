#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	
	int ans=0,cnt=1,pre=str[0];
	
	
	for(int i=1;i<str.length();i++)
	{
            if(str[i]==pre)
			{
				cnt++;
				ans=max(ans,cnt);
			}
			else
			{   
			  
				cnt=1;
				pre=str[i];
				
		   }		
	}
	
	//ans=max(ans,cnt);
	
	
	cout<<ans;
	
	
	
	
}

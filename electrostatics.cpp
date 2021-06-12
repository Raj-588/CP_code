#include<iostream>
using namespace std;

int main()
{   
    int arr[]={4,3,5};
    string s="pnp";
    int n=3;
    
    int ans=0;
    
    for(int i=0;i<3;i++)
    {
    	if(s[i]=='p')
    	{
    		ans+=arr[i];
		}
		else
		{
			ans+=(-arr[i]);
		}
	}
	
	if(ans<0)
	{
		ans=-1*ans;
	}
	
	cout<<(ans*100);
	
	return 0;
}

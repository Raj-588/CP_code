#include<bits/stdc++.h>

using namespace std;
int main()
{
	int arr[3][3]= {   {1,2,3}, 
	                   {3,4,5}, 
					   {6,7,8}  };
					   
					   
	for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<arr[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	
	int res=0;
	int c=0;
	
	for(int j=0;j<3;j++)
	{    
	    int sum=0;
		for(int i=0;i<3;i++)
		{
			sum+=arr[i][j];
		}
		
		if(res<sum)
		{
			res=sum;
			c=j+1;
		}
		
	}
	
	cout<<res<<" "<<c;
	
	
	return 0;
	
	
}

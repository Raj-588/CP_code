#include<bits/stdc++.h>

using namespace std;

int main()
{
	//tranpose of a matrix 
	//for-square
	
	int arr[4][3]= {   {1,2,3}, 
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
					   
	
	for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		if(i<j)
    		{
			
    		 swap(arr[i][j],arr[j][i]);
    	    
			} 
		}
	}
   	
   	
   	for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<arr[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
   	
   	
	
}

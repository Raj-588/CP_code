#include<bits/stdc++.h>

using namespace std;
int main()
{
	int arr[4][4]= {   {2,1,4,3}, 
	                   {1,6,3,5}, 
					   {9,7,6,6}, 
					   {4,8,3,9}};
					   
					   
	for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
    	{
    		cout<<arr[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
    	{   
    	    if(i==j)
    	    {
    	    	
    	    	cout<<arr[i][j]<<" ";
			}
    		
		}
		
		
	}
	
	cout<<endl;
	
	for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
    	{   
    	    if(i+j==3)
    	    {
    	    	
    	    	cout<<arr[i][j]<<" ";
			}
    		
		}
		
		
	}
	
	cout<<endl;
	
	for (int i = 0; i < 4; i++)
    {
        cout<<arr[i][i]<<" ";
    } 
    
    
    
    //Secondary Diagonal a[i++][j—] i=n-1,j=0


	
	
	
	
	
	return 0;
	
	
}

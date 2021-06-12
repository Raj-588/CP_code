#include<bits/stdc++.h>
using namespace std;

int transform(int x,int a,int b,int c)
{
	return a*x*x + b*x + c;
}

vector<int> sortarray(vector<int>& nums,int a,int b,int c)
{
	int i=0;
	int j=nums.size()-1;
	
	vector<int>out(nums.size());
	
	if(a>0)
	{ 
	   //+ve parabola fill from right to left
	   int k=out.size()-1;
	   
	   while(i<=j)
	   {
	   	  if(transform(nums[i],a,b,c)>transform(nums[j],a, b, c))
	      {
	      	out[k]=transform(nums[i],a,b,c);
	      	i++;
		  }
		  else
		  {
		  	out[k]=transform(nums[j],a,b,c);
	      	j--;
		  	
		  }
		  
		  k--;
	   }
	   
		
	}
	else
	{
		//-ve parabola fill from left to right
		
		int k=0;
		while(i<j)
		{
			if(transform(nums[i],a,b,c)<transform(nums[j],a,b,c) )
			{
				out[k]=transform(nums[i],a,b,c);
				i++;
			}
			else
			{
				out[k]=transform(nums[j],a,b,c);
				j--;
			}
			k++;
		}
		
		
		
	}
     	
}


int main()
{

   vector<int>nums{-4,-2,2,4};
   int a=1,b=3,c=5;
   
   vector<int>out1=sortarray(nums,a,b,c);
   
   for(auto x:out1)
   {
   	cout<<x<<" ";
   }
   
   return 0;	
}

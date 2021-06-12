#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={-10,-10,-10};
	
	int n=sizeof(arr)/sizeof(int);
	
	int curr_sum=arr[0],max_sum=INT_MIN; //for all negative element;
	//int curr_sum-0,max_sum=0; for negative positive
	
	for(int i=0;i<n;i++)
	{

		curr_sum=max(curr_sum+arr[i],arr[i]);    //only for all negative 
		
		// curr_sum+=arr[i];
		
		// if(curr_sum<0)
		// {
		// 	curr_sum=0;
		// }
		max_sum=max(curr_sum,max_sum);
		
		
	}
	
	cout<<max_sum;
	
	
	return 0;

}


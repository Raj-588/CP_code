#include<iostream>
using namespace std;

int main()
{
	int arr[]={-2,-5,-6};
	
	int n=sizeof(arr)/sizeof(int);
	
	
	
	
	int max_so_far      = INT_MIN;
	int max_ending_here = 0;
	int max_element     = INT_MIN;
	
	for (int i = 0; i < n; i++)
	{
	    max_ending_here = max(max_ending_here + arr[i], 0);
	    
	    
	    max_so_far      = max(max_ending_here, max_so_far);
	    
	    max_element     = max(max_element, arr[i]);
	}
	
	
	if (max_so_far == 0)
	  max_so_far = max_element;
	
	cout<<max_so_far;
	
	
	return 0;
	
	
	
}

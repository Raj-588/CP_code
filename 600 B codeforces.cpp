#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m=5,n=4;
	
	int arr[]={1, 3 ,5 ,7, 9};
	int brr[]={6 ,4, 2, 8};
	
	
    //long long int arr[m],brr[n];
    
    
//    for(int i=0;i<m;i++)
//    {
//    	cin>>arr[i];
//	}
//	
//	for(int i=0;i<n;i++)
//    {
//    	cin>>brr[i];
//	}
	
	sort(arr,arr+m);
	
    for(int i=0;i<n;i++)
    {
    	cout<<upper_bound(arr,arr+m,brr[i])-arr<<" ";
    	
	}
	
	
	
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,5,6};
	int brr[]={3,6,9,5,4};
	
	int n=sizeof(arr)/sizeof(int);
	int m=sizeof(brr)/sizeof(int);
	
	int carry=0;
	int i=n-1;
	int j=m-1;
	
	int crr[100];
	
	
	int k=0;
	
	while(i>=0 || j>=0)
	{
		int sum=carry;
		
		if(i>=0)
        {
           sum=sum+arr[i];	
		}		
		if(j>=0)
		{
			sum=sum+brr[j];
		}
	
	
		int rem=sum%10;
		crr[k]=rem;
		k++;
		carry=sum/10;
		i--; j--;
		
	}
	
	while(carry!=0)
	{
		crr[k]=carry%10;
		k++;
		carry=carry/10;
	}
	
	
    for(int i=k-1;i>=0;i--)
    {
    	cout<<crr[i]<<" ";
	}
	
}

#include<iostream>
using namespace std;

int main()
{
	//find missing two numbers using bitmasking
	
	int arr[100];
	
	
	int n; cin>>n;  //size including missing numbers
	
	
	//input array which contain 2 missing numbers till n
	int ans=0;
	for(int i=0;i<n-2;i++)
	{
		cin>>arr[i];
		ans^=arr[i];
	}
	
	
	for(int i=1;i<=n;i++)
	{
		ans^=i;
	}
	
	//now ans contain xor of two missing numbers
	
	//find the set bit position in ans

	int bitpos = 0;
	while ((ans & 1) != 1) {
		bitpos++;
		ans = ans >> 1;
	}
	
	int val = (1 << bitpos);
	
	int no1 = 0, no2=0; 
    for (int i = 0; i < n-2; i++) 
    { 
        if (arr[i] & val) 
            no1 ^= arr[i]; 
        else
            no2 ^= arr[i]; 
    } 
    
    
    for (int i = 1; i <= n; i++) 
    { 
        if (i & val) 
            no1 = no1 ^ i; 
                         
        else
            no2 = no2 ^ i; 
    }
   
   
   // for print missing numbers in increasing order	
   if(no1>no2)
   {
   	swap(no1,no2);
   }
    
   cout<<no1<<" "<<no2;
    
    
	
	
	
	
	
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int maxi=INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		maxi=max(maxi,arr[i]);
	}
	
	int freq[maxi+1]={0};
	
	
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	
	
	for(int i=1;i<maxi+1;i++)
	{
		while(freq[i]!=0)
		{
			cout<<i<<" ";
            freq[i]--;
		}
		
		
	}

    cout << endl;
    
	return 0;
	
}

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n; cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	unordered_map<int,int>m;
	
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
		
	}
	
	
	
	return 0;
}

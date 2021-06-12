#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	ans=INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		ans=max(ans,arr[i]);
	}
	return 0;
}

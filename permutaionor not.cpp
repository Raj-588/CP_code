#include<iostream>
using namespace  std;


int main()
{
	char arr[100]="rajj";
	char brr[100]="jjar";
	
	int freq[26]={0};
	
	for(int i=0;arr[i]!='\0';i++)
	{
		char ch=arr[i];
		
		int idx=ch-'a';
		freq[idx]++;
		
	}
	
	for(int i=0;brr[i]!='\0';i++)
	{
		char ch=brr[i];
		
		int idx=ch-'a';
		freq[idx]--;
		
	}
	
	for(auto x:freq)
	{
		cout<<x;
	}
}

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string s="aaaaaaabbbc";
	
	int freq[26]={0};
	int cnt=0;
	
	for(int i=0;i<s.length();i++)
	{
		freq[s[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(freq[i]>1)
		{
			cnt+=freq[i]-1;
		}
	}
	
	
	cout<<cnt;
	
	
	
	return 0;
}

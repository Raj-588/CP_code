#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
	int freq[256]={0};
	
	char res;
	int max=INT_MIN;
	
	for(int i=0;i<s.length();i++)
	{
		freq[s[i]]++;
		
		if(max<freq[s[i]])
		{
			max=freq[s[i]];
			res=s[i];
	    } 
	}
	
	cout<<res;
	
}

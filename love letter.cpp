#include<bits/stdc++.h>
using namespace std;

void love_rot(string s,int d)
{
	stringstream ss(s);
	string word;
	int cnt=0;
	
	while(ss>>word)
	{
		string w;
		w=word;
		//for rotate each letter in word from left to write k times
		reverse(word.begin(),word.begin()+d);
		reverse(word.begin()+d,word.begin());
		reverse(word.begin(),word.end());
		
		if(w==word)
		{
			cnt++;
		}
		
	}
	
	cout<<cnt;
}


int main()
{
	string s1="llohe ereth";
	int n=2;
	
	love_rot(s1,n);
	
	
	return 0;
	
}

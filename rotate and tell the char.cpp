//rotate string clockwise by k charecters

#include<iostream>
using namespace std;

int main()
{
	int t; cin>>t;
	string s="abcde";
	int n=s.length();
	int i=0;
	
	while(t--)
	{
		char ch;
		int u;
		
		cin>>ch>>u;
		
		if(ch=='r')
		{
			i=(i+u)%n;
			 
		}
		else
		{
			
			cout<<s[(i+u-1)%n];
			
		}
		
	}
}


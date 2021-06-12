//json parse
#include<iostream>
using namespace std;
int depth(string s)
{
	int curr_count=0;
	int max=0;
	int n=s.length();
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(' || s[i]=='[' || s[i]=='{')
		{
			curr_count++;
			if(curr_count>max)
			{
				max=curr_count;
			}
		}
		else if(s[i]==')' || s[i]==']' || s[i]=='}')
		{
			if(curr_count>0)
			{
				curr_count--;
			}
			else
			{
				return -1;
				
			}
		}
	}
	
	if(curr_count !=0)
	{
		return -1;
	}
	else
	{
		return max;
	}
}

int main()
{
	string s; 
	getline(cin,s);
	cout<<depth(s);
	
	return 0;
}


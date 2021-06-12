#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
string find(string s,string s2)
{
	if(s2.length()>s.length())
	{
		cout<<" no window present";
		return " ";
	}
	int s_count[256]={0};
	int s2_count[256]={0};

	for(int i=0;i<s2.length();i++)
	{
		s2_count[s2[i]]++;
	}
	
	int cnt=0;
	
	int start=0,start_index=-1,min_len=INT_MAX;
	
	for(int i=0;i<s.length();i++)
	{
		s_count[s[i]]++;
		
		if(s_count[s[i]] <= s2_count[s[i]] && s_count[s[i]] >0)
		{
			cnt++;
		}
		
		if(cnt==s2.length());
		{
			while(s_count[s[start]]>s2_count[s[start]] || s2_count[s[start]]==0)
			{
				
				if(s_count[s[start]]>s2_count[s[start]])
				{
					s_count[s[start]]--;
				}
				
				start++;
			}
			
			int len_window=i-start+1;
			
			if(min_len>len_window)
			{
				min_len=len_window;
				start_index=start;
				
			}
		}
		
	}
	
	if (start_index == -1)
    {
        cout << "No such window exists";
        return "";
    }
	
	
	return s.substr(start_index,min_len);
}


int main()
{
	string s="My Name is Fran";
	string s2="rim";
	cout<<find(s,s2);
	return 0;
}

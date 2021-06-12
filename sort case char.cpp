#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	string s="efXTgalACB";
	
	int n=s.length();
	
	string s1,s2;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a' and s[i]<='z')
		{
			s1.push_back(s[i]);
		}
		else
		{
			s2.push_back(s[i]);
		}
	}
	
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	cout<<s<<endl;
	
	string ans;
	
    int i=0,j=0;
    
    for(int k=0;k<n;k++)
    {
    	if(s[k]>='a' and s[k]<='z')
    	{
    		ans.push_back(s1[i++]);
		}
		else
		{
			ans.push_back(s2[j++]);
		}
	}
	
	
	cout<<ans<<endl;
	
	return 0;
}

//sir code
/* 

// SortCaseCharacters.cpp
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {

	string s = "efXTgalACB";

	string lower, upper;

	for (int i = 0 ; i < s.length() ; i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			lower.push_back(s[i]);
		}
		else {
			upper.push_back(s[i]);
		}
	}

	sort(lower.begin(), lower.end());
	sort(upper.begin(), upper.end());
	cout << s << endl;
	string ans;
	int i = 0, j = 0;
	for (int k = 0 ; k < s.length() ; k++) {
		if (s[k] >= 'a' and s[k] <= 'z') {
			ans.push_back(lower[i++]);
		}
		else {
			ans.push_back(upper[j++]);
		}
	}
	cout << ans << endl;
	return 0;
}

*/

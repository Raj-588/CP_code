#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	string s="welcome to codingblocks";
	
	vector<string>v;
	
	
	 char a[100000];
	 strcpy(a,s.c_str());
	 
	 char *ptr=strtok(a," ");
	 while (ptr != NULL)
	 { 
	 

		string x(ptr); 
		
		v.push_back(x);
		ptr = strtok(NULL, " ");
	}
    
	reverse(v.begin(),v.end());
	
	for(auto x:v)
	{
		cout<<x<<" ";
	}
}

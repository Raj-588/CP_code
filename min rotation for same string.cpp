//min rotation for same string
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string s="ababab";
	
	string s_copy=s;
	
	int n=s.length();
	s+=s;
	
	for(int i=1;i<=n;i++)
	{
		string x=s.substr(i,n);
		
		if(x==s_copy)
		{
			cout<<"rotate "<<i<<" times"<<endl;
			break;
		}
		
	}
	
	return 0;
}

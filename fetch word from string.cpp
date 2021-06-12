#include<iostream>
#include<cstring>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
	string s="welcome to raj villa";
	
	
	string word;
	stringstream iss(s);
	
	while(iss>>word)
	{
		reverse(word.begin(),word.end());
		cout<<word<<" ";
		
	}
	
	cout<<endl;
	

	
	
	char a[100005];
	strcpy(a,s.c_str());
	cout<<a<<endl;
	
	
	
	char* ptr=strtok(a," ");
	//cout<< ptr <<endl;	
	
	while(ptr!=NULL)
	{
		cout<< ptr <<endl;	
		ptr=strtok(NULL," ");
		
		
     
	}
	

	

	vector<char>v(s.length()+1);
	
	v[s.length()]='\0';
	
	for(int i=0;i<s.length();i++)
	{
		v[i]=s[i];
	}
	

	
	for(auto x:v)
	{ 
	    cout<<x;
		
	}
	
	return 0;
}

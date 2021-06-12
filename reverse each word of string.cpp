#include<cstring>
#include<iostream>
#include<algoruthm> 
using namespace std; 
 
int main() 
{ 
	string s1; 
	getline(cin,s1); 
	int len=s1.length(); 
	int j=0; 
	for(int i=0;i<len;i++) 
	{ 
		if(s1[i]==' ') 
		{ 
			reverse(s1.begin()+j,s1.begin()+i); 
			j=i+1; 
		} 
		else if(i==len-1) 
		{ 
			 
			reverse(s1.begin()+j,s1.end()); 
		} 
	} 
	cout<<s1; 
	return 0; 
} 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	
	string word;
	getline(cin,word);
	
	int cnt=0;
	
	char* p= strtok((char *)str.c_str()," "); 
	
	while(p!=NULL)
	{
		string token(p); //convert char arr to string
		if(token==word)
		{
			cnt++;
		}	
		
		p=strtok(NULL," ");
		
	}
	cout<<cnt;
	
	return 0;
}

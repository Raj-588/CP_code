#include<bits/stdc++.h>
using namespace std;

int stringtoint(char *a,int n)
{
	if(n==0)
	{
		return 0;
	}
	
	
	int digit=a[n-1]-'0';
	
	return (stringtoint(a,n-1)*10)+digit;
	
}

int main()
{
	
	char a[100];
	cin>>a;
	
	cout<<stringtoint(a,strlen(a));
	
	
	
	return 0;
}

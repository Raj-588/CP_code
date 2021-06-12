#include<iostream>
using namespace std;

int main()
{
	string a="coding";
	
	int len=6;
	
	int i=len-1;
	int k=2;
	
	
	while(i>=0)
	{
		a[i+k]=a[i];
		i--;
	}
	
	i=0;
	int j=len;
	
	while(j<len+k)
	{
		a[i]=a[j];
		i++;
		j++;
	}
	
	a[len]='\0';
	
	cout<<a;
}

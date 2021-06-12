#include<iostream>
using namespace std;

int strlen(char arr[],int l);


int main()
{
	char arr[]="6969";
	
	int l=strlen(arr);
	
	cout<<strint(arr,l);
}

int strint(char arr[],int l)
{
	if(l==0)
	{
		return 0;
	}
	
	int digit=arr[n-1]-'0';
	int small=strint(arr,l-1);
	
	return small*10 + digit;
	
	
	 
}

#include<iostream>
using namespace std;
void printspell(int n);

char words[][10]={"zero" , "one" , "two","three","four","five","six","seven","eight","nine","ten" };




int main()
{
	int n=2044;
	
	printspell(n);
}

void printspell(int n)
{
	if(n==0)
	{
		return ;
	}
	
	printspell(n/10);
	int digit=n%10;
	
	cout<<words[digit]<<" ";
	return ;
	
}

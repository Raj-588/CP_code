#include<iostream>
using namespace std;

void subsequence(char *inp,int i, char *out, int j)
{
	if(inp[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	
	
   out[j]=inp[i];
   subsequence(inp,i+1,out,j+1);
	
   subsequence(inp,i+1,out,j);
	
	
}

int main()
{
	char inp[100],out[100];
	
	cin>>inp;
	
	subsequence(inp,0,out,0);
	
	
	return 0;
}

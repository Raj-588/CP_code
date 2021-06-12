
#include<iostream>
using namespace std;


void sub(char *inp,char *out,int i,int j);

int main()
{
	char input[]="abc";
	char output[10];
	
	sub(input,output,0,0);
	
	return 0;
	
    
}

void sub(char *inp,char *out,int i,int j)
{
	if(inp[i]='\0')
	{
		out[j]='\0';
		cout<<out<<" ";
		return;
	}
	
	
	out[j]=inp[i];
	sub(inp,out,i+1,j+1);
	
	sub(inp,out,i+1,j);
	
}

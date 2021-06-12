#include<bits/stdc++.h>
using namespace std;
void permute(char *inp,int i);

int main()
{
	char arr[100];
	cin>>arr;
	
	permute(arr,0);
	return 0;
}

void permute(char *inp,int i)
{
	if(inp[i]=='\0')
	{
		cout<<inp<<" ";
		return;
	}
	
	for(int j=i;inp[j]!='\0';j++)
	{
		swap(inp[i],inp[j]);
		permute(inp,i+1);
		swap(inp[i],inp[j]);
	}
	
}

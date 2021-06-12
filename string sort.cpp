#include<bits/stdc++.h>
//#include<cstring>
using namespace std;

bool compare(string a,string b)
{ 
    int i=0,j=0;
    
    while(i<a.length() and j<b.length())
    {
    	if(a[i]>b[j])
    	{
    		return false;
		}
		else if(a[i]<a[j])
		{
			return true;
		}
	}
	
	if(j<b.length())
	{
		return false;
	}
	else
	{
		return true;
	}
	
	
	
	 
//	if(a<b) return true;
//	else if(a>b) return false;
//	
}


int main()
{
	int n; cin>>n;
	
	string str[1000];
	
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	
	cout<<endl;
	
	sort(str,str+n,compare)
	
	
//	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0; j<(str[i].length()) ;j ++)
//		{
//			cout<<str[i][j]<<" ";
//		}
//		
//		cout<<endl;
//	}
	
	return 0;
	
}

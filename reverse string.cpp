#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	char a[1000];
	char ans[1000];
	int len = 0,max_length=0;
	cin.get();
	for(int i=0;i<n;i++)
	{
	    cin.getline(a,1000);
	    len = strlen(a);
	    if(len>max_length)
	    {
	        max_length=len;
	        for(int i=0;i<strlen(a);i++)
	        {
	            ans[i]=a[i];
	        }
	        ans[i]='\0';
	    }
	}
	cout<<ans;
	return 0;
}



//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char ch1[100]="hello";
//	char ch2[100]="coding blocks";
//	char ch3[100]="code";
//	char ch4[100]="coding";
//	char ch5[100]="hello world";
//	
//	int len1=0,len2=0,len3=0,len4=0,len5=0;
//	
//	
//	for(len1=1)
//}

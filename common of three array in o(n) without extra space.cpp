#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a1[]={1,2,5,5,6};
	int a2[]={1,3,5,5,7};
	int a3[]={1,4,5,8};
	
	int n1=sizeof(a1)/sizeof(int);
	int n2=sizeof(a2)/sizeof(int);
	int n3=sizeof(a3)/sizeof(int);
	
//
//	for(int i=0;i<n1;i++)
//	{
//		for(int j=0;j<n2;j++)
//		{
//		    if(a1[i]==a2[j])
//		    {    
//		    	for(int k=0;k<n3;k++)
//		    	{
//		    		if(a1[i]==a3[k])
//		    		{
//		    			cout<<a1[i]<<" ";
//					}
//				}
//			}
//			
//		}
//	}

    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2 && k<n3)
    {
    	if(a1[i]==a2[j] && a1[i]==a3[k])
    	{
    		cout<<a1[i]<<" ";
    		i++;j++;k++;
		}
		else if(a1[i]>a2[j] && a1[i]==a3[k])
		{
			j++;
		}
		else if(a1[i]>a3[k] && a1[i]==a2[j])
		{
			k++;
			
		}
		else if(a2[j]>a1[i] && a2[j]==a3[k])
		{
			i++;
		}
		else if(a1[i]>a2[j] && a1[i]>a3[k])
		{
			j++;k++;
		}
		else if(a3[k]>a2[j] && a3[k]>a1[i])
		{
			j++;i++;
		}
		else if(a2[j]>a1[i] && a2[j]>a3[k])
		{
			i++;k++;
		}
	}
}






















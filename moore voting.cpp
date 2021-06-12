#include<iostream>
using namespace std;


int main()
{
	int arr[]={1,2,2,3,3,3,3,3,3,4};
	
	int n=sizeof(arr)/sizeof(int);
	
	
	
	//moore voting algo
	
	int cnt=0,candi;
	
	for(int i=0;i<n;i++)
	{
		if(cnt==0)
		{
			candi=arr[i];
		}
		
	    if(candi==arr[i])
	    {
	    	cnt++;
		}
		else
		{
			cnt--;
		}
	}
	
	if(cnt>n/2)
	{
		cout<<candi;
	}
	
//	for(int i=0;i<n;i++)
//	{
//		int ele=arr[i];
//		int cnt=1;
//		for(int j=i+1;j<n;j++)
//		{
//			if(arr[j]==ele)
//			{
//				cnt++;
//			}
//		}
//		
//		if(cnt>n/2)
//		{
//			cout<<ele;
//			break;
//		}
//	}

    
	
   	
   
}

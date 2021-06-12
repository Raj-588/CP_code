#include<iostream>
using namespace std;
void mergearray(int *arr,int *b,int *c,int s,int e)
{
	int mid=(s+e)/2;
	
	int i=s;
	int j=mid+1;
	int k=s;
	
	while(i<=mid && j<=e)
	{
		if(b[i]<=c[j])
		{
			arr[k++]=b[i++];
		}
		else if(c[j]<=b[i])
		{
			arr[k++]=c[j++];
		}
	}
	
	while(i<=mid)
	{
		arr[k++]=b[i++];
	}
	
	while(j<=e)
	{
		arr[k++]=arr[j++];
	}
}

void merge(int *arr,int s,int e)
{   
    if(s>=e)
    {
    	return;
	}
	int b[100],c[100];
	int mid=(s+e)/2;
	
	for(int i=0;i<=mid;i++)
	{
		b[i]=arr[i];
	}
	
	for(int i=mid+1;i<=e;i++)
	{
	    c[i]=arr[i];	
	}
	
	merge(b,s,mid);
	merge(c,mid+1,e);
	
	
	mergearray(arr,b,c,s,e);
	
}



int main()
{
	//merge sort
	int arr[]={77,5,8,4,3};
	int n=sizeof(arr)/sizeof(int);
	
	merge(arr,0,n-1);
	
	for(auto x:arr)
	{
		cout<<x<<" ";
	}
	
	
	
	
	return 0;
}

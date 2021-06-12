#include<iostream>

using namespace std;

int binarysearch(int arr[],int s,int e,int key)
{   

    if(s>e)
    {
    	return -1;
	}
	
	int mid=(s+e)/2;
	
	if(arr[mid] == key)
	{
		return mid;
	}
	else if(arr[mid]>key)
	{
		binarysearch(arr,s,mid-1,key);
	}
	else
	{
		binarysearch(arr,mid+1,e,key);
	}
	
}


int main()
{
	int arr[]={1,44,55,77};
	
	int n=sizeof(arr)/sizeof(int);
	
	int key=44;
	
	cout<<binarysearch(arr,0,n-1,key)<<endl;
}

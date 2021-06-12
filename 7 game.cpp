#include<iostream>
using namespace std;

bool pseven(int arr[],int n)
{
	if(n==0)
	{
		return false;
	}
	
	if(arr[0]==7)
	{
		return true;
	}
	
	return pseven(arr+1,n-1);	
}

int main()
{
	int arr[]={1,4,7,7,10,11,12,13,7,8,7,9};
	
	int n=sizeof(arr)/sizeof(int);
	
	if(pseven(arr,n))
	{
		cout<<"Senven is present"<<endl;
	}
	else
	{
		cout<<"seven is not present";
	}
}

/*

#include <iostream>
using namespace std;

long long int first(long long int *arr,long long int n,long long int x,long long int i)
{
    if(n==i)
    {
        return -1;
    }

    if(arr[i]==x)
    {
        return i;
    }
    else
    {

       return first(arr,n,x,i+1);
    }
}

long long int last(long long int *arr,long long int n,long long int x)
{
    if(n<=0)
    {
        return -1;
    }
    
    n--;
    if(arr[n]==x)
    {
        return n;
    }

    return last(arr,n,x);
    
}

int main() {

    long long int n,x,i; 
    
    cin>>n>>x;

    long long int arr[1000000000];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<first(arr,n,x,0);

    cout<<" ";
    cout<<last(arr,n,x);


    
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
	int **arr;
	int rows,cols;
	
	cin>>rows>>cols;
	
	arr=new int*[rows];
	
	for(int i=0;i<rows;i++)
	{
		arr[i]=new int[cols];
		
	}
	
	int number=1;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
		     arr[i][j]=number++;
		     
	    }  
		
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		
		cout<<endl;
		
	}
	
	cout<<endl;
	
	for(int i=0;i<rows;i++)
	{
		delete []arr[i];
	}
	
	delete []arr;
	arr=NULL;
	
	
	
	
	
	
	return 0;
	
}

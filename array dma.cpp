
#include<iostream>
using namespace std;
int main(){

	// int n;
	// cin>>n;
	// int arr[n]; //wrong

	// int arr[100];sma 

	int n;
	cin>>n;

	// int*arr=new int[100]; //dma 1d
	int*arr=new int[n]; //



	for (int i = 0; i < 5; ++i)
	{
		cin>>*(arr+i);
		/* code */
	}
	
	for (int i = 0; i < 5; ++i){
	
		cout<<arr[i]<<" "<<*(arr+i)<<endl;
		/* code */
	}

	cout<<endl;


	// delete array

	delete []arr;
	arr=NULL;






	return 0;
}


#include<iostream>
using namespace std;
int* f(int n){
	int *arr=new int[n];
	for (int i = 0; i < n; ++i)
	{
		// cin>>arr[i];
		cin>>*(arr+i);
	}
	return arr;
	delete []arr;
	arr=NULL;

}
int main(){

	int n;
	cin>>n;
	int*ptr=f(n);
	for (int i = 0; i < n; ++i)
	{
		cout<<ptr[i]<<" "<<*(ptr+i)<<endl;
	}
	cout<<endl;





	delete[] ptr;
	ptr=NULL;


	return 0;
}

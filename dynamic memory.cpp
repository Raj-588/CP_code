#include<iostream>
using namespace std;

int main()
{
	int *ptr=new int;
	
	*ptr=10;
	cout<<*ptr<<endl;
	

	
	float *fptr=new float;
	*fptr=78.99;
	cout<<*fptr<<endl;
	
	
	double *dptr=new double;
	*dptr=7008.99;
	cout<<*dptr<<endl;
	
	delete ptr;
	ptr=NULL;
	
	delete fptr;
	fptr=NULL;
	
	delete dptr;
	dptr=NULL;
	
	
	
	
	
	return 0;
}

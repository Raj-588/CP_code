#include<iostream>
#include<cstring>
using namespace std;

class car
{
public: 
	char name[100];
	int price;
	int model;
	int average;
};

int main()
{
	car a;
 	//a.name="audi"; will not work
	
	strcpy(a.name,"audi");
	a.price=100;
	a.average=10;
	a.model=2021;
	
	
	
	cout<<a.name<<endl;
	cout<<a.average<<endl;
	cout<<a.model<<endl;
	cout<<a.price<<endl;
		
	return 0;
}

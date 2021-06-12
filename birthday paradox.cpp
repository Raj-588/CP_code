#include<bits/stdc++.h>
using namespace std;
int main() {

	float p;
	cin>>p;

	float x=1.0;
	int people=0;
	float num=365;
	float denom=365;

	if(p==1)
	{
		cout<<366;
	}

	while(x>1-p)
	{
		x=x*(num)/denom;
		num--;
		people++;
	}

	cout<<people;
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s="rajpareekehaverajvilla";
	char ch='e';
	int i,cnt=0;
    //int ans=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='e')
		{
			cnt++;	
		}
		
		if(cnt==3)
		{
			//ans=i+1;
			break;
		}
	}
	
//	string x;
//	for (int j = i+1 ; j < s.length() ; j++) {
//		x.push_back(s[j]);
//	}
//	cout << x << endl;

    cout<<s.substr(i+1);

	
	return 0;
}

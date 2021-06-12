#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	s="welcome to raj villa.";
	
	char a[100005];
	strcpy(a,s.c_str());
	cout<<a<<endl;
	
	char* ptr=strtok(a," ");
	cout<< ptr <<endl;	
	vector<string>v;
	
	while(ptr!=NULL)
	{
	  	cout<< ptr <<endl;	
		string x(ptr);
		v.push_back(x);
     
     	
     	ptr=strtok(NULL," ");
	}
	
	sort(v.begin(),v.end());
	
	for(auto x:v)
	{ 
	    cout<<x<<" ";
		
	}
	
	
	

	

//	vector<char>a(s.length()+1);
	
//	a[s.length()]='\0';
//	
//	for(int i=0;i<s.length();i++)
//	{
//		a[i]=s[i];
//	}
//	
//	for(auto x:a)
//	{ 
//	    cout<<x;
//		
//	}

    
	
	return 0;
}


/*

// RemoveExtraSpaces.cpp
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {

	string s;
	s = "   Welcome   To    Coding Blocks";
	// "Welcome To Coding Blocks."
	string ans;
	vector<string> v;


	char a[100005];
	strcpy(a, s.c_str());
	cout << a << endl;

	char* ptr = strtok(a, " ");
	cout << ptr << endl;
	while (ptr != NULL) { // When the iteration over the entire string completes
		// strtok will return NULL
		cout << ptr << endl;
		string x(ptr); // This is how we can initialize a string using character array
		// Converted the character array to string and then insert it to the vector of strings
		v.push_back(x);

		ptr = strtok(NULL, " ");
	}

	// sort(v.begin(), v.end());
	for (int i = 0 ; i < v.size() ; i++) {
		if (i != v.size() - 1) {
			ans += v[i] + ' ';
		}
		else {
			ans += v[i];
		}
	}
	cout << ans << endl;
	return 0;
}
*/






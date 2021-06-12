#include<iostream>
using namespace std;

int main()
{ 
    string str="a3b2";
    int k=12;
    
    string expand = "";
	string temp; 
	int freq = 0; 

	for (int i=0; str[i]!='\0'; )
	{
		temp = ""; 
		freq = 0; 

		
		while (str[i]>='a' && str[i]<='z')
		{
			
			temp.push_back(str[i]);
			i++;
		}

		
		while (str[i]>='1' && str[i]<='9')
		{
			freq = freq*10 + str[i] - '0';
			i++;
		}

		
		for (int j=1; j<=freq; j++)
			expand.append(temp);
	}

	if (freq==0)
		expand.append(temp);
    
	 
	//return expand[k-1];

	
	if(k<=expand.size())
	{
		cout<<expand[k-1];
	}
	else
	{
		cout<<-1;
	}
	
	return 0;
	
}

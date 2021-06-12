#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int i;
    
    for(i=0;i<str.size();i++)
    {
        int start=i;
        while(str[i]!=' '&&str[i]!='\0')
        {
            i++;
        }
        int end=i-1;
        while(start<end)
        {
            swap(str[start],str[end]);
                start++;
                end--;
        }   
    }
    cout<<str;
}


#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int arr[] = { 1, 3, 5 }; 
    int n = sizeof (arr) / sizeof (int) ; 
    

    int ans = 0; 
    for (int i = 0; i < 32; i++) 
    { 
    
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if ((arr[j] & (1 << i))) 
                count++; 
        ans += (count * (n - count) * 2); 


        
    } 


    cout<<ans<<endl;
    return 0; 
} 

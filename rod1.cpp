#include <iostream>
#include <string>
#include <climits>
using namespace std;
 

int rodCut(int price[], int n)
{
    
    if (n == 0) {
        return 0;
    }
 
    int maxValue = INT_MIN;
 
   
    for (int i = 1; i <= n; i++)
    {
        
        int cost = price[i - 1] + rodCut(price, n - i);
 
        if (cost > maxValue) {
            maxValue = cost;
        }
    }
 
    return maxValue;
}
 
int main()
{
    
    int price [] = {0,2,1,7,3,5};
 
    
    int n = 5;
 
    cout << "Profit is " << rodCut(price+1, n);
 
    return 0;
}

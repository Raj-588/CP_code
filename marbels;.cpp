

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        ll n,r;
        cin >> n >> r;
        if(n-r < r-1) {
            r=n-r+1;
        }

        if(r == 1) {
            cout << 1 << endl;
            continue;
        }

        //Ans = (n-1)!/((r-1)! * (n-r)!)

        ll ans = 1;
        for(ll i=n-1; i>=n-r+1;i--) {
            ans = ans*i;
            ans = ans/(n-i);
        }

        cout << ans << endl;
    }



    return 0;
}

























#include<bits/stdc++.h>
using namespace std;


int binomialCoeff(int n, int k);

int main()
{
	int t;
	cin>>t;

	int n,k;


	while(t--)
	{
		cin>>n>>k;

		if(n==k)
		{
			cout<<1<<endl;
		}
		else
		{
            cout<<binomialCoeff(n-1, k-1)<<endl;
		}
	}
}


int binomialCoeff(int n, int k)
{
    // Base Cases
    if (k > n)
        return 0;

    if (k == 0 || k == n)
        return 1;
 
    // Recur
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}

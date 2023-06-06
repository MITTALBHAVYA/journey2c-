#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll int power(long long x, unsigned ll int y, ll int p)
{
   ll int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
void solve()
{
    ll int y;
    cin>>y;
    ll x=2;
    cout<<power(x,y,mod)-1<<endl;
}
int main() {
    ll test;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

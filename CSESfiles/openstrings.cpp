#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll int power(long long x, ll int y)
{
    ll int res = 1;     // Initialize result
 
    x = x % mod; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   cin>>n;
   ll x=2;
   cout<<power(x,n)<<endl;
 return 0;
}
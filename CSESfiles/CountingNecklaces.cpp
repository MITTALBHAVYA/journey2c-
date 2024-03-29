#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll exp(ll x, unsigned ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void solve(){
  ll n,m;
  cin>>n>>m;
  ll sum=0;
  for(ll i=0;i<n;i++){
    sum=(sum+exp(m,__gcd(i,n),mod))%mod;
  }
  sum=(sum*exp(n,mod-2,mod))%mod; // Corrected calculation of the average
  cout<<sum<<endl;
}

int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}

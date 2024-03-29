#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll facMod[1000001];
ll invMod[1000001];

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
ll binomialCoefficients(ll a,ll b){
    ll ans = facMod[a];
    (ans *= invMod[b]) %= mod;
    (ans *= invMod[a-b]) %= mod;
    return ans;
}
void solve(){
  ll a,b;
  cin>>a>>b;
  cout<<binomialCoefficients(a,b)<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  facMod[0] = 1;
  invMod[0] = 1;
  for (ll i = 1; i <= 1000000; i++) {
    facMod[i] = (1LL * facMod[i - 1] * i) % mod;
    invMod[i] = exp(facMod[i], mod - 2, mod);
  }
  while(test--)
  {
    solve();
  }
 return 0;
}
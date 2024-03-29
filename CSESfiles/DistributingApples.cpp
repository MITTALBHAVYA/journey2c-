#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll facMod[2000001];
ll invMod[2000001];

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
  ll looper = (a%mod + b%mod)%mod - 1;
  ll dooper = b%mod;
  cout<<binomialCoefficients(looper,dooper)<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
//   cin>>test;
  facMod[0] = 1;
  invMod[0] = 1;
  for (ll i = 1; i <= 2000000; i++) {
    facMod[i] = (1LL * facMod[i - 1] * i) % mod;
    invMod[i] = exp(facMod[i], mod - 2, mod);
  }
  while(test--)
  {
    solve();
  }
 return 0;
}
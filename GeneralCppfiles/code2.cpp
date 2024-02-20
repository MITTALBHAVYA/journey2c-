#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
 ll n, m;
    cin >> n >> m;
    m = n - m + 1;
    ll ans = 0;
    for (ll b = 30; b >= 0; b--) {
        ll click = (n / (1 << b)) - ans;
        ans += click;
        if (ans >= m) {
            ll i = (ans - m + 1);
            cout << (1 << b) * ((2 * i) - 1) << '\n';
            return;
        }
    }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}
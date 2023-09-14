#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve()
{
  ll n, k, q;
  cin >> n >> k >> q;
  ll ans = 0;
  ll count = 0;
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    if (x > q)
    {
      if (count >= k)
      {
        ll fo = count - k + 1;
        ans = ans + (fo * (fo + 1)) / 2;
        count = 0;
      }
    }
    else
    {
      count++;
    }
  }
  if (count)
  {
    ll fo = count - k + 1;
    ans = ans + (fo * (fo + 1)) / 2;
  }
  cout << ans << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int test;
  cin >> test;
  while (test--)
  {
    solve();
  }
  return 0;
}
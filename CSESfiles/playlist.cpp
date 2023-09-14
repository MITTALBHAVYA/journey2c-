#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  ll ans = 0;
  unordered_set<ll> set;
  ll i = 0, j = 0;

  while (j < n)
  {
    if (set.count(arr[j]) == 0)
    {
      set.insert(arr[j]);
      ans = max(ans, j - i + 1);
      j++;
    }
    else
    {
      set.erase(arr[i]);
      i++;
    }

    // Optimization: If the current subarray length is already smaller than the remaining elements, no need to continue.
    if (n - i <= ans)
      break;
  }

  cout << ans << endl;

  return 0;
}

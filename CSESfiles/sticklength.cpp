#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  ll med=arr[n/2];
  ll ans=0;
  for(ll i=0;i<n;i++)
  {
    ans+=abs(med-arr[i]);
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
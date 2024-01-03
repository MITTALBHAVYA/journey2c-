#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  unordered_map<ll,ll>mp;
  for(ll i=1;i<=n;i++){
    ll x;
    cin>>x;
    mp[x-i]++;
  }
  ll count=0;
  for(auto i : mp)
  {
    count+=((i.second)*(i.second-1));
  }
  cout<<count<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
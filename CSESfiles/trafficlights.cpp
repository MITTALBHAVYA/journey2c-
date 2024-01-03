#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll x,n;
  cin>>x>>n;
  vector<ll>lights(n);
  set<ll>street_pos;
  street_pos.insert(0);
  street_pos.insert(x);
  for(ll i=0;i<n;i++)
  {
    cin>>lights[i];
    street_pos.insert(lights[i]);
  }
  vector<ll>gaps(n);
  ll prev=0;
  ll max_gap=0;
  for(ll p : street_pos)
  {
    max_gap = max(max_gap,p-prev);
    prev=p;
  }
  gaps.back()=max_gap;
  for(ll i = n-1 ; i>0 ;i--)
  {
    street_pos.erase(lights[i]);
    auto high_it = street_pos.upper_bound(lights[i]);
    ll high = *high_it;
    ll low = *(--high_it);
    max_gap = max(max_gap,high-low);
    gaps[i-1]=max_gap;
  }
  for(ll i=0;i<gaps.size() - 1;i++)
  {
    cout<<gaps[i]<<" ";
  }
  cout<<gaps.back()<<endl;
}
int main()
{
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  solve();
 return 0;
}
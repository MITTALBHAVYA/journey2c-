#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  unordered_map<ll,vector<ll>>mA,mB,mC;
  for(ll i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    mA[x].push_back(i);
  }
  for(ll i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    mB[x].push_back(i);
  }
  for(ll i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    mC[x].push_back(i);
  }
  ll count=0;
  for(auto i : mB)
  {
    ll looper=(i.second.size()*mA[i.first].size());
    ll sum=1;
    // cout<<i.first<<" "<<endl;
    for(auto j : i.second)
    {
        sum*=mC[j].size();
        // cout<<j<<" ";
    }
    // cout<<endl;
    count+=(looper*sum) ;
  }
  cout<<count<<endl;
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
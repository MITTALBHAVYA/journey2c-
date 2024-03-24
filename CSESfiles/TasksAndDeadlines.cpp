#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.first==b.first){
        return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}
void solve(){
  ll n;
  cin>>n;
  vector<pair<ll,ll>>vect;
  for(ll i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    vect.push_back({x,y});
  }
  sort(vect.begin(),vect.end(),cmp);
  ll ans=0;
  ll start=0;
  for(auto i : vect){
    ans+=(i.second-i.first-start);
    start+=i.first;
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}
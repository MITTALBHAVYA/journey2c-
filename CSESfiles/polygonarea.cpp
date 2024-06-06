#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<pair<ll,ll>>vect;
  for(ll i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    vect.push_back({x,y});
  }
  ll sum=0;
  for(ll i=0;i<n;i++){
    sum+=((vect[i%n].first*vect[(i+1)%n].second) - (vect[(i+1)%n].first*vect[i%n].second));
  }
  sum=abs(sum);
  cout<<sum<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}
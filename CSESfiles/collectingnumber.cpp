#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  unordered_map<ll,ll>vect;
  for(ll int i=1;i<=n;i++)
  {
    ll x;
    cin>>x;
    vect[x]=i;
  }
  ll count=1;
  for(ll i=1;i<n;i++)
  {
    if(vect[i]>vect[i+1])
    {
        count++;
    }
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
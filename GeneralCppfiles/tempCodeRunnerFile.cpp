#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll ones=0;
  ll zeros=0;
  for(ll i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    if(x==0)
    {
      zeros++;
    }
    else
    {
      ones++;
    }
  }
  if(ones==0 || zeros==0)
  {
    cout<<0<<endl;
  }
  else
  {
    cout<<min(ones,zeros)<<endl;
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
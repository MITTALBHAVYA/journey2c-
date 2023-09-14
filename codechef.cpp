#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll even=0,odd=0,ans=1;
  for(int i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    if(x%2==0)
    {
        even++;
    }
  }
  while(even)
  {
    ans=(ans*2)%mod;
    ans=ans%mod;
    even--;
  }
  odd=n-even;
  if(odd)
  {
    cout<<ans<<endl;
  }
  else
  {
    cout<<ans-1<<endl;
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
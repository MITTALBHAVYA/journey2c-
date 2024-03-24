#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll maxi=0;
  ll sum=0;
  ll ans=0;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    maxi=max(maxi,x);
    sum+=x;
  }
  ll sum_less_max=sum-maxi;
  if(sum_less_max<maxi){
    ans=maxi*2;
  }
  else{
    ans=sum;
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
//   cin>>test;
  test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}
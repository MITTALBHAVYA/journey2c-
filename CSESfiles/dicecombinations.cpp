#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll dp[1000005];
void solve(){
  ll n;
  cin>>n;
  dp[0]=1;
  for(ll i=1;i<=n;i++){
    ll s=0,j=1;
    while(i-j>=0 && j<=6){
      s+=dp[i-j];
      j++;
    }
    dp[i]=s%mod;
  }
  cout<<dp[n]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
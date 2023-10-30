#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll dp[1000005];
void solve(){
  ll n,target;
  cin>>n>>target;
  vector<ll>coins(n);
  for(ll i=0;i<n;i++){
    cin>>coins[i];
  }
  dp[0]=1;
  for(ll i=1;i<=target;i++){
    dp[i]=0;
    for(auto j:coins){
        if(i-j>=0)
        {dp[i]=(dp[i]+dp[i-j])%mod;}
    }
  }
  cout<<dp[target]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
 solve();
 return 0;
}
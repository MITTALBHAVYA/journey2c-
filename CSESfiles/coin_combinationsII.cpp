#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll dp[1000005]={0};
void solve(){
  ll n,target;
  cin>>n>>target;
  vector<ll>coins(n);
  for(ll i=0;i<n;i++){
    cin>>coins[i];
  }
  dp[0]=1;
 for(ll i=0;i<n;i++)
 {
    ll val=coins[i];
    for(ll amount=val;amount<=target;amount++){
        dp[amount]+=dp[amount-val];
        dp[amount]%=mod;
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
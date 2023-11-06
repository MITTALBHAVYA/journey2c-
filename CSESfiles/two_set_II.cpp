#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll helper(ll target,ll x,ll n,vector<vector<ll>>&dp){
    if(x==n){
        if(target==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(target<0)
		{return 0;}
    if(dp[x][target]!=-1)
    {
      return dp[x][target];
    }
    else{
    ll incl=helper(target-x,x+1,n,dp)%mod;
    ll excl=helper(target,x+1,n,dp)%mod;
    dp[x][target] = (incl+excl)%mod;
    return dp[x][target]%mod;
    }
}
void solve(){
  ll n;
  cin>>n;
  ll sum=(n*(n+1))/2;
  if(sum%2==0){
    ll target=sum/2;
    vector<vector<ll>>dp(n + 1, vector<ll>(target + 1, -1));
    ll count=helper(target,1,n,dp);
    cout<<count<<endl;
  }
  else{
    cout<<0<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
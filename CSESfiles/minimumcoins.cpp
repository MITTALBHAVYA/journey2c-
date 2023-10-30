#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
const ll inf = INT_MAX;
ll dp[1000005];
void solve(){
  ll n,x;
  cin>>n>>x;
  vector<ll>c(n);
  for(ll i=0;i<n;i++){
    cin>>c[i];
  }
  for(ll i=1;i<=x;i++){
    dp[i]=inf;
    for(auto j:c)
    {
        if(i-j>=0){
            dp[i]=min(dp[i-j]+1,dp[i]);
        }
    }
  }
  if(dp[x]>=INT_MAX)
  {
    cout<<-1<<endl;
  }
  else
  {
    cout<<dp[x]<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
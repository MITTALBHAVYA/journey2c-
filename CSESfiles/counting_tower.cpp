#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define mxn 1000005
using namespace std;
ll dp1[1000005]={0};
ll dp2[1000005]={0};
void solve(){
    int n;
    cin>>n;
    cout<<(dp1[n]+dp2[n])%mod<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   dp1[1]=dp2[1]=1;
   for(ll i=2;i<=1000005;i++){
    dp1[i]=((dp1[i-1]*4)%mod + (dp2[i-1]))%mod;
    dp2[i]=(dp1[i-1] + (dp2[i-1]*2)%mod)%mod;
   }
  ll test;
  cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}
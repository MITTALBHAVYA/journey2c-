#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  if(n<=2){
    cout<<n-1<<endl;
  }
  else{
  ll a=0;
  ll b=1;
  ll ans=0;
  for(ll i=3;i<=n;i++){
    ans=(((a+b)%mod)*(i-1))%mod;
    a=b;
    b=ans;
  }
  cout<<ans<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
//cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}
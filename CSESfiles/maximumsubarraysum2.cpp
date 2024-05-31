#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,a,b;
  cin>>n>>a>>b;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<ll>prefix(n+1);
  for(ll i=1;i<=n;i++){
    prefix[i]=prefix[i-1]+arr[i-1];
  }
  multiset<ll>ms;
  ll ans=-2e14;
  for(ll i=a;i<=n;i++){
    if(i>b){
        ms.erase(ms.find(prefix[i-b-1]));
    }
    ms.insert(prefix[i-a]);
    auto it = ms.begin();
    ans=max(ans,prefix[i]-*it);
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}
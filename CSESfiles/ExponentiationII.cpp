#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll exp(ll x, ll y, ll pr){
    ll res=1;
    x=x%pr;
    while(y>0){
        if(y&1){
            res = ((res%pr)*(x%pr))%pr;
        }
        y>>=1;
        x=(x*x)%pr;
    }
    return res;
}
void solve(){
  ll a,b,c;
  cin>>a>>b>>c;
  ll r = exp(b,c,mod-1);
  ll ans = exp(a,r,mod);
  cout<<ans<<endl;
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
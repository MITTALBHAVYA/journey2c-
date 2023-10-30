#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll removing_number(ll inp){
    if(inp==0)
    {
        return 0;
    }
    string s=to_string(inp);
    ll sub=0;
    for(auto j:s){
        ll fool=j-'0';
        sub=max(sub,fool);
    }
    return 1+removing_number(inp-sub);
}
void solve(){
  ll inp;
  cin>>inp;
  ll ans=removing_number(inp);
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
    ll n;
    multiset<ll>ans;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        auto it = ans.upper_bound(k);
        if(it==ans.end())ans.insert(k);
        else{
            ans.erase(it);
            ans.insert(k);
        }
    }
    cout<<ans.size()<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("inpi.txt", "r", stdin);
    freopen("outpi.txt", "w", stdout);
    #endif
  solve();
 return 0;
}
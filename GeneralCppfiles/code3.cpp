#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  unordered_map<ll,ll>mp;
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(arr[i]>3){
        if(arr[i]%(arr[i]-3)==0){
            ll check = arr[i]/(arr[i]-3);
            if(check==4){
                ans+=(mp[arr[i]]*(mp[arr[i]]-1))/2;
            }
            else{
                ans+=mp[check];
            }
        }
    }
    ll mo=0;
    mp[arr[i]]=max(mo,mp[arr[i]]-1);
  }
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
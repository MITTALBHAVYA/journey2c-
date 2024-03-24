#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool check(ll mid,ll n,ll t,vector<ll>&arr){
  ll sum=0;
  for(ll i=0;i<n;i++){
    sum+=(mid/arr[i]);
    if(sum>=t){
      return 1;
    }
  }
  return 0;
}
void solve(){
  ll n,t;
  cin>>n>>t;
  ll low=1;
  ll high=0;
  ll ans=0;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    high=max(high,arr[i]);
  }
  high*=t;
  while(low<=high){
    ll mid=low + (high-low)/2;
    if(check(mid,n,t,arr)){
      ans=mid;
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
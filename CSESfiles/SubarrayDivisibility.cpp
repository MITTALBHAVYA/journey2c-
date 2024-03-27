#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll countsubarrayDivisibility(vector<ll>arr,ll n){
    ll count=0;
    ll prefixSum=0;
    ll prefixSumModu=0;
    unordered_map<ll,ll>mp;
    //for empty
    mp[0]=1;
    for(ll i=0;i<n;i++){
        prefixSum+=arr[i];
        prefixSumModu= ((prefixSum%n)+n)%n;
        if(mp.find(prefixSumModu) != mp.end()){
            count+=mp[prefixSumModu];
        }
        mp[prefixSumModu]++;
    }
    return count;
}
void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll ans = countsubarrayDivisibility(arr,n);
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
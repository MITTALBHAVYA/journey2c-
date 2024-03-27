#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll countSubarrayWithSumX(vector<ll>&arr,ll x){
    ll count=0;
    ll prefixSum=0;
    unordered_map<ll,ll>prefixSumFreq;
    prefixSumFreq[0]=1;
    for(ll i=0;i<arr.size();i++){
        prefixSum+=arr[i];
        if(prefixSumFreq.find(prefixSum-x) != prefixSumFreq.end()){
            count+=prefixSumFreq[prefixSum - x];
        }
        prefixSumFreq[prefixSum]++;
    }
    return count;
}
void solve(){
  ll n,x;
  cin>>n>>x;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll ans = countSubarrayWithSumX(arr,x);
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
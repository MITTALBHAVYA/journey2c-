#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool check(vector<ll>&arr,ll k,ll mid){
    ll subarray=1;
    ll currentSum=0;
    for(ll num : arr){
        currentSum+=num;
        if(currentSum>mid){
            subarray++;
            currentSum=num;
        }
    }
    return subarray<=k;
}
ll minMaxSumSubarray(vector<ll>&arr,ll k,ll right,ll left){
    while(left<right){
        ll mid = left + (right-left)/2;
        if(check(arr,k,mid)){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }
    return left;
}
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll>arr(n);
  ll left=0,right=0;
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    right+=arr[i];
    left=max(left,arr[i]);
  }
  ll ans=minMaxSumSubarray(arr,k,right,left);
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
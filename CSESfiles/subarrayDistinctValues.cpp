#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll countDistinctValueSubarrays(vector<ll>&arr,ll k){
    ll n = arr.size();
    ll right=0,left=0;
    ll count=0;
    unordered_map<ll,ll>freqMp;
    while(right<n){
        freqMp[arr[right]]++;
        while(freqMp.size()>k){
            freqMp[arr[left]]--;
            if(freqMp[arr[left]]==0){
                freqMp.erase(arr[left]);
            }
            left++;
        }
        count+=right-left+1;
        right++;
    }
    return count;
}
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll ans = countDistinctValueSubarrays(arr,k);
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
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
   ll n;
   cin>>n;
   unordered_map<ll,ll>mp;
   vector<pair<ll,ll>>arr;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    arr.push_back(make_pair(x,i+1));
   }
   vector<ll>sorted_swaps;
   sort(arr.begin(),arr.end());
   ll ko=1;
   for(auto i : arr){
    mp[i.second]=ko;
    sorted_swaps.push_back(i.second);
    ko++;
   }
   ll start=1;
   for(ll i=0;i<n;i++){
    
   }
   vector<ll,ll>ans;
   
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
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,x;
  cin>>n>>x;
  vector<pair<ll,ll>>arr;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    arr.push_back({x,i});
  }
  sort(arr.begin(),arr.end());
  vector<ll>ans;
  for(ll i=0;i<n-2;i++){
    ll l = i+1;
    ll r = arr.size()-1;
    bool flag=false;
    while(l<r){
        ll sum=arr[i].first+arr[l].first+arr[r].first;
        if(sum==x){
            ans.push_back(arr[i].second+1);
            ans.push_back(arr[l].second+1);
            ans.push_back(arr[r].second+1);
            flag=true;
            break;
        }
        else if(sum<x){
            l++;
        }
        else{
            r--;
        }
    }
    if(flag){
        break;
    }
  }
  if(ans.size()){
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
  }
  else{
    cout<<"IMPOSSIBLE"<<endl;
  }
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
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool combi[100005];
void solve(){
  ll n;
  cin>>n;
  vector<ll>coins(n);
  ll total=0;
  for(ll i=0;i<n;i++){
    cin>>coins[i];
    total+=coins[i];
  }
  combi[0]=1;
  for(ll i=0;i<n;i++){
    for(ll j=total+1;j>0;j--){
      if(coins[i]==j)combi[j]=1;
      if(coins[i]<=j)combi[j]=combi[j]|combi[j-coins[i]];
    }
  }
  vector<ll>ans;
  for(ll i=1;i<=total;i++){
    if(combi[i]){
      ans.push_back(i);
    }
  }
  cout<<ans.size()<<endl;
  for(auto i:ans){
    cout<<i<<" ";
  }
  cout<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}
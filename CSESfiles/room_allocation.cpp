#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<pair<ll,pair<ll,ll>>>vect;
  for(ll i=1;i<=n;i++){
    ll x,y;
    cin>>x>>y;
    vect.push_back({x,{-1,i}});
    vect.push_back({y,{1,i}});
  }
  sort(vect.begin(),vect.end());
  vector<ll>ans(200005);
  vector<ll>rooms;
  int stayed=0,room_req=0;
  int index,ent_exit;
  for(auto i : vect){
    index=i.second.second;
    ent_exit=i.second.first;
    if(ent_exit==1){
        rooms.push_back(ans[index]);
    }
    else if(stayed==rooms.size()){
        ans[index]=++room_req;
    }
    else{
        ans[index]=rooms[stayed++];
    }
  }
  cout<<room_req<<endl;
  for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
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
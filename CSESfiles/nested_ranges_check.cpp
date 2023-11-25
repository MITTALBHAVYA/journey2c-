#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool static cmp(pair<ll,pair<ll,ll>>&p1,pair<ll,pair<ll,ll>>&p2){
    if(p1.second.first!=p2.second.first){
        return p1.second.first<p2.second.first;
    }
    return p1.second.second>p2.second.second;
}
void solve(){
  ll n;
  cin>>n;
  vector<pair<ll,pair<ll,ll>>>vect;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    vect.push_back({i,{a,b}});
  }
  sort(vect.begin(),vect.end(),cmp);
 /* for(auto i : vect){
    cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
  }*/
   vector<pair<ll,ll>>ans1;
   ll mini=INT_MAX;
   for(ll i=n-1;i>=0;i--){
    if(mini<=vect[i].second.second){
        ans1.push_back({vect[i].first,1});
    }
    else{
        mini=vect[i].second.second;
        ans1.push_back({vect[i].first,0});
    }
   }
   vector<pair<ll,ll>>ans2;
   ll maxi=0;
   for(ll i=0;i<n;i++){
    if(maxi>=vect[i].second.second){
        ans2.push_back({vect[i].first,1});
    }
    else{
        ans2.push_back({vect[i].first,0});
        maxi=vect[i].second.second;
    }
   }
   sort(ans1.begin(),ans1.end());
   sort(ans2.begin(),ans2.end());
   for(auto i : ans1){
    cout<<i.second<<" ";
   }
   cout<<endl;
   for(auto i : ans2){
    cout<<i.second<<" ";
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
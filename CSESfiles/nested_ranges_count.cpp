#include <bits/stdc++.h>
#define ll long long
using namespace std;   
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update> 
bool cmp(pair<ll,pair<ll,ll>>&a,pair<ll,pair<ll,ll>>&b){
    if(a.second.first==b.second.first){
        return a.second.second>b.second.second;
    }
    return a.second.first<b.second.first;
}
int main() { 
   ll n;
   cin>>n;
   vector<pair<ll,pair<ll,ll>>>vect;//index,start,end
   for(ll i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    vect.push_back({i,{x,y}});
   }  
   sort(vect.begin(),vect.end(),cmp);
   ordered_set oset1,oset2;
   vector<ll>contains(n,0);
   for(ll i=n-1;i>=0;i--){
    auto it = vect[i];
    ll index = it.first;
    ll start = it.second.first;
    ll end = it.second.second;
    contains[index]=oset1.order_of_key({end,n});
    oset1.insert({end,index});
   }
   vector<ll>containedby(n,0);
   for(ll i=0;i<n;i++){
    auto it = vect[i];
    ll index = it.first;
    ll start = it.second.first;
    ll end = it.second.second;
    containedby[index]=oset2.size()-oset2.order_of_key({end,-1});
    oset2.insert({end,index});
   }
   for(ll i=0;i<n;i++){
    cout<<contains[i]<<" ";
   }
   cout<<endl;
   for(ll i=0;i<n;i++){
    cout<<containedby[i]<<" ";
   }
   cout<<endl;
    return 0; 
}
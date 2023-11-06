#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,x;
  cin>>n>>x;
  vector<ll>weight(n);
  for(ll i=0;i<n;i++){
    cin>>weight[i];
  }
  vector<pair<ll,ll>>best(1<<n);
  best[0]={1,0};
  for(ll s=1;s<(1<<n);s++){
    best[s]={n+1,0};
    for(ll p=0;p<n;p++){
        if(s&(1<<p)){
            auto option = best[s^(1<<p)];
            if(option.second+weight[p]<=x){
                option.second+=weight[p];
            }
            else{
                option.first++;
                option.second=weight[p];
            }
            best[s]=min(best[s],option);
        }
    }
  }
  // ll maxi=0;
  // for(ll i=0;i<=(1<<n);i++){
  //   cout<<"i = "<<i<<" "<<best[i].first<<endl;
  // }
  // // cout<<maxi<<endl;
  cout<<best[(1<<n)-1].first<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
 solve();
 return 0;
}
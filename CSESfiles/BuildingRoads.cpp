#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,m;
  cin>>n>>m;
  vector<bool>visited(n+1,false);
  unordered_map<ll,vector<ll>>mp;
  for(ll i=0;i<m;i++){
    ll x,y;
    cin>>x>>y;
    mp[x].push_back(y);
    mp[y].push_back(x);
  }
  vector<ll>starts;
  for(ll i=1;i<=n;i++){
    if(visited[i]==false){
        starts.push_back(i);
        visited[i]=true;
        queue<ll>q;
        q.push(i);
        while(!q.empty()){
            auto it  = mp[q.front()];
            q.pop();
            for(auto ele : it){
                if(visited[ele]==false){
                    visited[ele]=true;
                    q.push(ele);
                }
            }
        }
    }
  }
  if(starts.size()==1){
    cout<<0<<endl;
  }
  else{
    cout<<starts.size()-1<<endl;
    for(ll i=0;i<starts.size()-1;i++){
        cout<<starts[i]<<" "<<starts[i+1]<<endl;
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
  while(test--)
  {
    solve();
  }
 return 0;
}
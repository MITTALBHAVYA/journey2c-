#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,m;
  cin>>n>>m;
  vector<vector<char>>grid(n,vector<char>(m,'.'));
  pair<ll,ll>a,b;
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      cin>>grid[i][j];
      if(grid[i][j]=='A'){
        a={i,j};
      }
      if(grid[i][j]=='B'){
        b={i,j};
      }
    }
  }
  grid[a.first][a.second]='#';
  grid[b.first][b.second]='.';
  queue<pair<ll,ll>>q;
  ll dir[4]={1,-1,0,0};
  q.push({a.first,a.second});
  while(!q.empty()){
    auto it = q.front();
    q.pop();
    for(ll i=0;i<4;i++){
      ll dx=it.first+dir[i];
      ll dy=it.second+dir[3-i];
      if(dx>=0 && dx<n && dy>=0 && dy<m && grid[dx][dy]=='.'){
        switch (i)
        {
          case 0:grid[dx][dy]='D';
          break;
          case 1:grid[dx][dy]='U';
          break;
          case 2:grid[dx][dy]='L';
          break;
          case 3:grid[dx][dy]='R';
          break;
        }
        q.push({dx,dy});
      }
    }
  }
  // cout<<"GRID"<<endl;
  // for(ll i=0;i<n;i++){
  //   for(ll j=0;j<m;j++){
  //     cout<<grid[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  // cout<<endl;
  if(grid[b.first][b.second]=='.'){
    cout<<"NO"<<endl;
  }
  else{
  pair<ll,ll>temp=b;
  string ans="";
  while(temp!=a){
    ans+=grid[temp.first][temp.second];
    switch (grid[temp.first][temp.second])
    {
      case 'U':temp={temp.first+1,temp.second};
      break;
      case 'D':temp={temp.first-1,temp.second};
      break;
      case 'L':temp={temp.first,temp.second+1};
      break;
      case 'R':temp={temp.first,temp.second-1};
      break;
    }
  }
  reverse(ans.begin(),ans.end());
  cout<<"YES"<<endl;
  cout<<ans.size()<<endl;
  cout<<ans<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test=1;
  //cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}
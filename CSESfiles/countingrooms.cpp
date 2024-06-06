#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void dfs(vector<vector<char>>&grid,ll i,ll j){
    if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 ||grid[i][j]=='#'){
        return;
    }
    if(grid[i][j]=='.'){
        grid[i][j]='#';
    }
    //up
    dfs(grid,i-1,j);
    //down
    dfs(grid,i+1,j);
    //left
    dfs(grid,i,j+1);
    //right
    dfs(grid,i,j-1);
}
void solve(){
  ll n,m;
  cin>>n>>m;
  vector<vector<char>>grid(n,vector<char>(m,'.'));
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>grid[i][j];
    }
  }
  ll count=0;
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        if(grid[i][j]=='.'){
            count++;
            dfs(grid,i,j);
        }
    }
  }
  cout<<count<<endl;
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
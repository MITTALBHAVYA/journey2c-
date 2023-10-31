#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int dp[505][505];
void solve(){
  int width,height;
  cin>>width>>height;
  for(int w=1;w<=width;w++){
    for(int h=1;h<=height;h++){
      dp[w][h]=INT_MAX;
    }
  }
  for(int i=1;i<505;i++)
  {
    dp[i][i]=0;
  }
  for(int w=1;w<=width;w++){
    for(int h=1;h<=height;h++){
      for(int cut=1;cut<w;cut++){
        dp[w][h]=min(dp[w][h],dp[cut][h]+dp[w-cut][h]+1);
      }
      for(int cut=1;cut<h;cut++){
        dp[w][h]=min(dp[w][h],dp[w][cut]+dp[w][h-cut]+1);
      }
    }
  }
  cout<<dp[width][height]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
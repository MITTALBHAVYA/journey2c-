#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int dp[1005][1005];
void solve(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch;
        cin>>ch;
        if(ch=='*'){
            dp[i][j]=0;
        }
        else if(i*j==1){
            dp[i][j]=1;
        }
        else{
            dp[i][j]= (dp[i-1][j]+dp[i][j-1])%mod;
        }
    }
  }
  cout<<dp[n][n]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}
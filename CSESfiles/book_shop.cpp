#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int dp[100005]={0};
void solve(){
    int n,target;
    cin>>n>>target;
    vector<int>h(n),s(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=target;j>=0;j--){
            if(j>=h[i]){
                dp[j]=max(dp[j],dp[j-h[i]]+s[i]);
            }
        }
    }
    cout<<dp[target]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
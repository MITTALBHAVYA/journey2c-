#include <bits/stdc++.h>
#define ll long long
#define int ll
#define mod 1000000007
using namespace std;

int Z = 300001;
int K = 11;
vector<vector<int>> dp(K, vector<int> (Z, INT_MAX));

int minTimeToReachN(vector<int>& x, vector<int>& s, int k, int current, int target,int n) {

    if (current == target) {
        return 0;
    }

    if (k < 0) {
        return INT_MAX;
    }
    if(dp[k][current]!=INT_MAX){
        return dp[k][current];
    }
    int minTime = INT_MAX;
    for (int i = current + 1; i < n; ++i) {
        int time = s[current] * abs(x[i] - x[current]);
        int directionChange = (i < target && ((x[i] - x[current]) * (x[target] - x[i])) < 0) ? 1 : 0;

        int timeToTarget = minTimeToReachN(x, s, k - directionChange, i, target,n);
        if (timeToTarget != INT_MAX) {
            time += timeToTarget;
            minTime = min(minTime, time);
        }
    }

    dp[k][current]= minTime;
    return dp[k][current];
}

void solve(){
    for(int i=0; i<K; i++){
        for(int j=0; j<Z; j++){
            dp[i][j] = INT_MAX;
        }
    }
    int n,k;
    cin>>n>>k;
    vector<int>x(n),s(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int target = n-1; //  n is the last footballer
    k=min(10ll,k);
    int result = minTimeToReachN(x, s, k, 0, target,n);
    cout<<result<<endl;

}
int32_t main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}
#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,-1);

    dp[0]=0;
    if(a<=n)
    {
        dp[a]=1;
    }
    if(b<=n)
    {
        dp[b]=1;
    }
    if(c<=n)
    {
        dp[c]=1;
    }
    long long mi=min(a,min(b,c));
    for(long long i=mi;i<=n;i++)
    {
        if(i-a>=0&&dp[i-a]!=0)
        {
            dp[i]=max(dp[i],dp[i-a]+1);
        }
        if(i-b>=0&&dp[i-b]!=0)
        {
            dp[i]=max(dp[i],dp[i-b]+1);
        }
        if(i-c>=0&&dp[i-c]!=0)
        {
            dp[i]=max(dp[i],dp[i-c]+1);
        }
    }
    cout<<dp[n]<<endl;
}
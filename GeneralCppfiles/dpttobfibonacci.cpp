#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int timecall1=0;
int timecall2=0;
int timecall3=0;
int recfib(int n)
{
    timecall1++;
    if(n<=1)
    {
        return n;
    }
    return recfib(n-1)+recfib(n-2);
}
int dpttob(int n,vector<int>&dp)
{
    timecall2++;
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=dpttob(n-1,dp)+dpttob(n-2,dp);
    return dp[n];
}
//bottom to up approach
int bottoup(int n,vector<int>&dp)
{  
   
   dp[1]=1;dp[0]=0;
   for(int i=2;i<=n;i++)
   {
    timecall3++;
    dp[i]=dp[i-1]+dp[i-2];
   }
   return dp[n];
}
int main()
{
    cout<<"ENTER THE NUMBER"<<endl;
    int n;
    cin>>n;
    cout<<"RECURSSIVE CALL ANSWER"<<endl;
    cout<<recfib(n)<<endl;
    cout<<"time count for recurssive call :: "<<timecall1<<endl;
    timecall1=0;
    vector<int>dp(n+1);
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    cout<<"DP call answer"<<endl;
    cout<<dpttob(n,dp)<<endl;
    cout<<"time count for dp call answer"<<endl;
    cout<<timecall2<<endl;
    timecall2=0;
    cout<<"bottom up approach"<<endl;
    cout<<bottoup(n,dp)<<endl;
    cout<<"time count for botupapproach"<<endl;
    cout<<timecall3<<endl;
    return 0;
}
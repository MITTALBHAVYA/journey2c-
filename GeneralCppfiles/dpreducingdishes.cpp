#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& satisfaction, int index,int time){
        if(index==satisfaction.size())
        {
            return 0;
        }
        int include = satisfaction[index]*(time+1) + solve(satisfaction,index+1,time+1);
        int exclude = 0 + solve(satisfaction,index+1,time);
        return max(include,exclude);
}
int maxSatisfactionrec(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        return solve(satisfaction,0,0);
}
int solvebp(vector<int>& satisfaction){
    int n=satisfaction.size();
    vector<vector<int>>dp(n+1,vector<int>dp(n+1,0));
    for(int index=n-1;index>=0;index--)
    {
        for(int time=index;time>=0;time--)
        {
           int include = satisfaction[index]*(time+1) + dp[index+1][time+1];
           int exclude = 0 + dp[index+1][time];
           dp[index][time]=max(include,exclude);
        }
    }
   return dp[0][0];
}
int maxSatisfactionbp(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        return solvebp(satisfaction);
}
int solvedp(vector<int>& satisfaction, int index,int time,vector<vector<int>>&dp)
    {
        if(index==satisfaction.size())
        {
            return 0;
        }
        if(dp[index][time]!=-1)
        {
            return dp[index][time];
        }
        int include = satisfaction[index]*(time+1) + solve(satisfaction,index+1,time+1,dp);
        int exclude = 0 + solve(satisfaction,index+1,time,dp);
        dp[index][time]= max(include,exclude);
        return dp[index][time];
    }
int maxSatisfactiondp(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        solvedp(satisfaction,0,0,dp);
    }
int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF SATISFACTION VALUES"<<endl;
    cin>>n;
    vector<int>satisfaction;
    cout<<"Enter the satisfaction values here"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>satisfaction[i];
    }
    cout<<"answer by recurssion"<<endl;
    cout<<maxSatisfactionrec(satisfaction)<<endl;
    return 0;
}
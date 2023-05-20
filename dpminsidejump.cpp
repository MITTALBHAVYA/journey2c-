#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solverec(vector<int>& obstacles,int currlane,int currpos)
{
    if(currpos==obstacles.size()-1)
    {
        return 0;
    }
    if(obstacles[currpos+1]!=currlane)
    {
        return solverec(obstacles,currlane,currpos+1);
    }
    else
    {
        int ans=INT_MAX;
        for(int i=1;i<=3;i++)
        {
            if(obstacles[currpos]!=i && currlane!=i){
            ans=min(ans,1+solverec(obstacles,i,currpos));
            }
        }
        return ans;
    }
}
int minSideJumpsrec(vector<int>& obstacles) 
{
  int n=obstacles.size();
  return solverec(obstacles,2,0);
}
//TD approach
int solveTD(vector<int>& obstacles,int currlane,int currpos,vector<vector<int>>&dp)
{
    if(currpos==obstacles.size()-1)
    {
        return 0;
    }
    if(dp[currlane][currpos]!=-1)
    {
        return dp[currlane][currpos];
    }
    if(obstacles[currpos+1]!=currlane)
    {
        return solveTD(obstacles,currlane,currpos+1,dp);
    }
    else
    {
        int ans=INT_MAX;
        for(int i=1;i<=3;i++)
        {
            if(obstacles[currpos]!=i && currlane!=i){
            ans=min(ans,1+solveTD(obstacles,i,currpos,dp));
            }
        }
        dp[currlane][currpos]=ans;
        return dp[currlane][currpos];
    }
}
int minSideJumpsTD(vector<int>& obstacles) 
{
  //int n=obstacles.size();
  vector<vector<int>>dp(4,vector<int>(obstacles.size(),-1));
  return solveTD(obstacles,2,0,dp);
}
//recurcive approach
int solverec(vector<int>& obstacles,int currlane,int currpos)
{
    if(currpos==obstacles.size()-1)
    {
        return 0;
    }
    if(obstacles[currpos+1]!=currlane)
    {
        return solverec(obstacles,currlane,currpos+1);
    }
    else
    {
        int ans=INT_MAX;
        for(int i=1;i<=3;i++)
        {
            if(obstacles[currpos]!=i && currlane!=i){
            ans=min(ans,1+solverec(obstacles,i,currpos));
            }
        }
        return ans;
    }
}
int minSideJumpsrec(vector<int>& obstacles) 
{
  int n=obstacles.size();
  return solverec(obstacles,2,0);
}
int main() {
    ll test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>obstacles(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            obstacles[i]=x;
        }
        //by recurssion
        cout<<"minSideJumps by recurssion : : "<<minSideJumpsrec(obstacles)<<endl;
        //by topdown approach
        cout<<"minSideJumps by top-down approach:: "<<minSideJumpsTD(obstacles)<<endl;
    }
    return 0;
}

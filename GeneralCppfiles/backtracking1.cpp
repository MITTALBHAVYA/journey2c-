#include <bits/stdc++.h> 
#include <vector>
using namespace std;
bool isSafe(int newX,int newY,vector<vector<bool>>&visited,int n,vector<vector<int>>&arr)
{
    if((newX<n)&&(newY<n)&&(newX>=0)&&(newY>=0)&&(visited[newX][newY]==0)&&(arr[newX][newY]==1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(int newX,int newY,string path,vector<string>&ans,vector<vector<bool>>&visited,vector < vector < int >> & arr,int n)
{
    //DOWN,LEFT,RIGHT,UP{lexographical order should be followed}
    //base case
    if(newX==n-1&&newY==n-1)
    {
        ans.push_back(path);
        return;
    }
    //phele visited first karenge jha khade hai uske liye
    visited[newX][newY]=1;
    //down case::::
    if(isSafe(newX+1,newY,visited,n,arr))
    {
       solve(newX+1,newY,path+'D',ans,visited,arr,n);       
    }
    //left case::::
    if(isSafe(newX,newY-1,visited,n,arr))
    {
       solve(newX,newY-1,path+'L',ans,visited,arr,n);
    }
    //right case::::
    if(isSafe(newX,newY+1,visited,n,arr))
    {
       solve(newX,newY+1,path+'R',ans,visited,arr,n);
    }
    //up case:::::
    if(isSafe(newX-1,newY,visited,n,arr))
    {
       solve(newX-1,newY,path+'U',ans,visited,arr,n);
    }
    visited[newX][newY]=0;
    //last mai nikalte time visited 0
    
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) 
{
    vector<string>ans;
    string path="";
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    if(arr[0][0]==0)
    {
        return ans;
    }
    solve(0,0,path,ans,visited,arr,n);
    return ans;
}
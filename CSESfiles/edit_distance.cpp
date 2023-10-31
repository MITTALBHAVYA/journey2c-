#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int dp[5001][5001];
int helper(string &s1,string &s2,int i,int j)
{
    //base case
    if(i==s1.length())
    {
        return s2.length()-j;
    }
    if(j==s2.length())
    {
        return s1.length()-i;
    }
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }
    int ans=0;
    if(s1[i]==s2[j]){
        return helper(s1,s2,i+1,j+1);
    }
    else{
        //insert element
        int inseAns=1 + helper(s1,s2,i,j+1);
        //delete element
        int deleAns=1 + helper(s1,s2,i+1,j);
        //replace
        int replAns=1 + helper(s1,s2,i+1,j+1);
        //sum up
        ans=min(inseAns,min(deleAns,replAns));
        dp[i][j]=ans;
    }
    return ans;
}
void solve(){
  string s1,s2;
  cin>>s1>>s2;
  int ans=helper(s1,s2,0,0);
  cout<< ans <<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
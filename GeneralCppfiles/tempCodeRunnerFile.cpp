#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  string str;
  cin>>str;
  unordered_map<char,int>mp;
  for(int i=0;i<n;i++)
  {
    mp[str[i]]++;
  }
  int diff=n-k;
  if(diff%2!=0)
  {
    diff--;
  }
  for(auto i:mp)
  {
    if(i.second>1)
    {
      if(i.second%2==0)
      {
        diff=diff-i.second;
      }
      else
      {
        diff=diff-(i.second-1);
      }
    }
  }
  if(diff==0 || diff<0)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }

}
int main()
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
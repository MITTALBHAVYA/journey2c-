#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int n;
  cin>>n;
  vector<string>vecs(n);
  unordered_map<string,int>mp;
  for(int i=0;i<n;i++)
  {
    cin>>vecs[i];
    //cout<<vecs[i]<<endl;
    mp[vecs[i]]=0;
  }
  string ans="";
  for(int i=n-1;i>=0;i--)
  {
    if(mp[vecs[i]]==0)
    {
        ans+=vecs[i].substr(vecs[i].size()-2);
        mp[vecs[i]]=1;
    }
  }
  cout<<ans<<endl;
 return 0;
}
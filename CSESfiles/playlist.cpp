#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;

int main()
{
  int n,count,maxi,x;
  cin>>n;
  count=1;
  maxi=1;
  for(int i=1;i<=n;i++){
    cin>>x;
    if(mp[x])
    {
      count=max(count,i-maxi);
      maxi=max(maxi,mp[x]+1);
      mp[x]=i;
    }
    else{
      count=max(count,i-maxi+1);
      mp[x]=i;
    }
  }
  count=max(count,n-maxi+1);
  cout<<count<<"\n";
  return 0;
}

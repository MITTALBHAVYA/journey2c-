#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll m,n,k;
  cin>>n>>m>>k;
  vector<int>a(n);
  vector<int>b(m);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>b[i];
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int ans=0;
  int i=0,j=0;
  while(i<n&&j<m)
  {
    if(abs(a[i]-b[j])<=k)
    {
      ans++;
      i++;
      j++;
    }
    else if(a[i]<b[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
    ll int n;
    cin>>n;
    ll int a[n][n];
    for(ll int i=0;i<n;i++)
    {
        for(ll int j=0;j<n;j++)
        {
            char k;
            cin>>k;
            if(k=='1')
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    ll int count=0,upto=n;
    for(ll int i=0;i<=n/2;i++)
    {
       for(ll int j=0;j<=n/2;j++)
       {
        unordered_map<int,int>mp;
        mp[a[i][j]]++;
        mp[a[j][n-1-i]]++;
        mp[a[n-1-i][n-1-j]]++;
        mp[a[n-1-j][i]]++;
        count=count+min(mp[0],mp[1]);
       }
    }
    cout<<count<<endl;
  
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
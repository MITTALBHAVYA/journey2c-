#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  ll res=1;
  for(ll i=0;i<n&&arr[i]<=res;i++)
  {
    res=res+arr[i];
  }
  cout<<res<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
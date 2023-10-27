#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll p,q;
  cin>>p>>q;
   q++;
  ll minoper=p+q+1;
  minoper=min(minoper,n);
  vector<ll>a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  for(ll i=0;i<q)

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
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,m;
  cin>>n>>m;
  if(n%2!=0 && m%2!=0){cout<<0<<endl;}
  else{
  double pro=1;
  for(ll a=1;a<=n/2;a++){
    for(ll b=1;b<=m/2;b++){
        pro=pro * 4 * (pow(cos((M_PI*a)/(n+1)),2)+pow(cos((M_PI*b)/(m+1)),2));
    }
  }
  cout<<pro<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
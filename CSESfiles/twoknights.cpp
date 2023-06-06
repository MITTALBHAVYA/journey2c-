#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll int nCr(ll int n, ll int r) {
    long double sum=1;
    for(ll int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        return (ll int)sum;
}
void solve(){
  ll n;
  cin>>n;
  for(ll i=1;i<=n;i++)
  {
    if(i==1)
    {
        cout<<0<<endl;
    }
    else
    {
        ll x = i*i;
        ll r = 2;
        ll neg = 4*(i-1)*(i-2);
        ll pos=nCr(x,r);
        cout<<pos-neg<<endl;
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
//   int test;
//   cin>>test;
//   while(test--)
//   {
//     solve();
//   }
 solve();
 return 0;
}
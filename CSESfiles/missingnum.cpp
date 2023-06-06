#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
// void solve(){
  
// }
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  ll int test;
  cin>>test;
//   while(test--)
//   {
//     solve();
//   }
  ll sum=test*(test+1)/2;
  for(ll int i=0;i<test-1;i++)
  {
    ll x;
    cin>>x;
    sum=sum-x;
  }
  cout<<sum<<endl;
 return 0;
}
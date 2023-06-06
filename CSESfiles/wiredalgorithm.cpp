#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll int n;
  cin>>n;
  cout<<n<<" ";
  while(n>1)
  {
    if(n%2!=0)
    {
      n=3*n+1;
    }
    else
    {
      n=n/2;
    }
    cout<<n<<" ";
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
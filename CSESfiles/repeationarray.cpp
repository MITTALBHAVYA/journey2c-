#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
 ll int n;
  cin>>n;
  ll int prev;
  cin>>prev;
  ll int count=0;
  for(ll int i=1;i<n;i++)
  {
    ll int x;
    cin>>x;
    if(prev>x)
    {
        count=count+(prev-x);
    }
    else{
        prev=x;
    }
  }
  cout<<count<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
//   int test;
//   cin>>test;
//   while(test--)
//   {
//     solve();
//   }
 return 0;
}
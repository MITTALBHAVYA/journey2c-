#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  if(n==1)
  {
    cout<<1<<endl;
  }
  else if(n<=3)
  {
    cout<<"NO SOLUTION"<<endl;
  }
  else
  {
    for(int i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  k=min(k,30);
  cout<<min(n,(1<<k)-1)+ 1 <<"\n";
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
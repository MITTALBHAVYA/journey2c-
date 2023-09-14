#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void caseSolve(int n,set<int>&fact)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
          fact.insert(i);
          fact.insert(n/i);
        }
    }
}
void solve(){
  int n,m;
  cin>>n>>m;
  int a=__gcd(n-1,m-1);
  int b=__gcd(n-2,m);
  int c=__gcd(n,m-2);
  set<int>fact;
  caseSolve(a,fact);
  caseSolve(b,fact);
  caseSolve(c,fact);
  fact.insert(2);
  cout<<fact.size()<<" ";
  for(auto i:fact)
  {
    cout<<i<<" ";
  }
  cout<<endl;
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
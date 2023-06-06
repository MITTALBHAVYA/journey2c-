#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int x,k;
  cin>>x>>k;
  int check=x%k;
  int lope=x/k;
  if(check!=0||lope==0)
  {
    cout<<1<<endl;
    cout<<x<<endl;
  }
  else
  {
    cout<<2<<endl;
    cout<<k+1<<" "<<x-(k+1)<<endl;
  }
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
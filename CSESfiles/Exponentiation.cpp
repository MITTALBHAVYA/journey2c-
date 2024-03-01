#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll a,b;
  cin>>a>>b;
  long long res=1;
  while(b>0){
    if(b&1){
        res=((res%mod)*(a%mod))%mod;
    }
    a=((a%mod)*(a%mod))%mod;
    b>>=1;
  }
  cout<<res<<endl;
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
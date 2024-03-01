#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll helper(ll n,ll k){
  if(n==1){
    return 1;
  }
  if(k<=(n+1)/2){
    if(2*k>n){
      return 2*k%n;
    }
    else{
      return 2*k;
    }
  }
  ll c = helper(n>>1,k - (n+1)/2);
  if(n&1){
    return 2*c + 1;
  }
  else{
    return 2*c - 1;
  }
}
void solve(){
  ll n,k;
  cin>>n>>k;
  cout<<helper(n,k)<<endl;
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
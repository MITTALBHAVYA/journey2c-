#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define ll long long
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
using namespace std;
void solve(){
  ll n;
  cin>>n;
 ll a=1,b=0;
 while(n>0){
  for(ll i=2;i<=n;i+=2){
    cout<<a*i + b<<" ";
  }
  if(n&1){
    cout<<a+b<<" ";
    b+=a;
  }
  else{
    b-=a;
  }
  a<<=1;
  n>>=1;
 }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
    solve();
 return 0;
}
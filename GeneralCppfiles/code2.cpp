#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>a(n);
  vector<ll>b(n);
  ll prev=0;
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  for(ll i=0;i<n;i++){
    cin>>b[i];
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end(),greater<ll>());
  bool flag=0;
  for(ll i=0;i<n-1;i++){
    if(a[i]+b[i]!=a[i+1]+b[i+1]){
        flag=1;
        break;
    }
  }
  if(!flag){
    for(auto i :a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : b){
        cout<<i<<" ";
    }
    cout<<endl;
  }
  else{
    cout<<-1<<endl;
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
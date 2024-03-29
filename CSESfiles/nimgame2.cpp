#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll  ans=0;
  for(ll i=0;i<n;i++){
    ans^=(arr[i]%4);
  }
  if(ans==0){
    cout<<"second"<<endl;
  }
  else{
    cout<<"first"<<endl;
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
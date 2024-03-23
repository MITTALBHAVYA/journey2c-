#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  ll count=0;
  ll adjCount=0;
  for(ll i=1;i<=n;i++){
    cin>>arr[i-1];
    if(i==arr[i-1]){
      count++;
    }
  }
  ll start=0;
  while(start<n){
    if(start+1<n && arr[start]==start+1 && arr[start+1]==start+2){
      adjCount++;
      start+=2;
    }
    else{
      start++;
    }
  }
  cout<<count-adjCount<<endl;

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
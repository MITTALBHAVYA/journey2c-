#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  string str;
  cin>>str;
  ll count=0;
  for(ll i=0;i<n-2;i++){
    if(str[i]==str[i+1]&&str[i+1]==str[i+2]){
      continue;
    }
    else{
      count++;
    }
  }
  ll extra=0;
  for(ll i=0;i<n-3;i++){
    if(str[i]==str[i+1] && str[i+1]==str[i+3] && str[i]!=str[i+2]){
      extra++;
    }
  }
  cout<<count-extra<<endl;
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
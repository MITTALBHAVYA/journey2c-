#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  if(n%3==0){
    cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
  }
  else{
    if(n%2==0){
      cout<<-1<<endl;
    }
    else{
      ll oppo=(n-1)/2;
      cout<<1<<" "<<1<<" "<<oppo<<endl;
    }
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
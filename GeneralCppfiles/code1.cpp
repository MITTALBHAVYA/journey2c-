#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,x,y;
  cin>>n>>x>>y;
  ll ycon=y/3;
  ll count=0;
  ll xcon=0;
  if(ycon>x){
    xcon=x;
  }
  else{
    xcon=ycon;
  }
  count=xcon;
  ll xleft=x-xcon;
  ll xlar=xleft/2;
  count+=xlar;
  if(count>=n){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
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
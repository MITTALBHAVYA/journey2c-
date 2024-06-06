#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  pair<ll,ll>p1,p2,p3;
  cin>>p1.first>>p1.second>>p2.first>>p2.second>>p3.first>>p3.second;
  pair<ll,ll>a={p3.first-p1.first,p3.second-p1.second};
  pair<ll,ll>b={p3.first-p2.first,p3.second-p2.second};
  ll crosspro = (a.first*b.second) - (b.first*a.second);
  if(crosspro==0){
    cout<<"TOUCH"<<endl;
  }
  else if(crosspro<0){
    cout<<"RIGHT"<<endl;
  }
  else{
    cout<<"LEFT"<<endl;
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
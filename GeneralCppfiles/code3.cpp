#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n,x;
  cin>>n>>x;
  if(n==1 || n==2){
    if(x>0){
        cout<<-1<<endl;
    }
    else{
        if(n==1)
        {cout<<1<<endl;}
        else{
            cout<<1<<" "<<2<<endl;
        }
    }
  }
  else
  {
    if(x>n-2){
        cout<<-1<<endl;
    }
    else
    {
        for(ll i=n;i>=x+2;i--){
            cout<<i<<" ";
        }
        for(ll i=1;i<x+2;i++){
            cout<<i<<" ";
        }
        cout<<endl;
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
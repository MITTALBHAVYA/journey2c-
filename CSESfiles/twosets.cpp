#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll n;
  cin>>n;
  ll sum=n*(n+1)/2;
  if(sum%2==0)
  {
    cout<<"YES"<<endl;
    int p1=n/2;
    int p2=n-p1;
    int pp1=p1/2;
    int pp2=p1-pp1;
    cout<<p1<<endl;
    for(int i=1;i<=pp2;i++)
    {
        cout<<n-i+1<<" ";
    }
    for(int i=1;i<=pp1;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<p2<<endl;
    for(int i=pp1+1;i<=n-pp2;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}
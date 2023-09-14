#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  ll q;
  cin>>q;
  while(q--)
  {
    ll n,k;
    cin>>n>>k;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<(2*k)%n<<endl;
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
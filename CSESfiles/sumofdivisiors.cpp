#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
      sum+=((n/i) * i)%mod;
    }
    cout<<sum%mod<<endl;
    return 0;
}
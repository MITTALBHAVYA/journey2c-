#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int i;
    cin>>i;
    for(int n=1;n<=i;n++){
    cout<<(1+n)*n/2<<endl;
    }
}
int main() {

    ll test;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
 
#define int long long
using namespace std;
 
const int N = 2e5+9;
int a[N];
 
int n;
 
void sieve()
{
    for (int i = 1; i <= 200001; ++i)
    {
        int r = 0;
        int d = i;
        while(d)
        {
            r += d%10;
            d /= 10;
        }
        a[i] = a[i-1] + r;
    }
}
 
signed main()
{
    sieve();
    int t = 1;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<a[n]<<'\n';
    }
}
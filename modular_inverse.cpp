ll modinv(ll p, ll q)
{
    ll mod = 1000000007, ex;
    ex = mod - 2;
    while (ex)
    {

        if (ex & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        ex >>= 1;
    }
    return p;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll modinv(ll p, ll q)
{
    ll mod = 1000000007, ex;
    ex = mod - 2;
    while (ex)
    {

        if (ex & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        ex >>= 1;
    }
    return p;
}

int main()
{
    ll n, i, k = 100000, mod = 1000000007, j;
    cin >> n;
    ll a[n][2];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    ll fact[k + 1];
    fact[1] = 1;
    for (i = 2; i <= k; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    map<ll, ll> m;
    ll q = fact[n], ch, p = 1;
    for (i = 0; i < n; i++)
        m[a[i][0]]++;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        ch = it->second;
        if (ch > 1)
        {
            p = (p * fact[ch]) % mod;
        }
    }
    cout << modinv(p, q) << endl;
    return 0;
}

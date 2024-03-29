#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll facMod[1000001];
ll invMod[1000001];

ll exp(ll x, unsigned ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll binomialCoefficients(ll a, ll b) {
    ll ans = facMod[a];
    (ans *= invMod[b]) %= mod;
    (ans *= invMod[a - b]) %= mod;
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // Precompute factorials and their inverses
    facMod[0] = 1;
    invMod[0] = 1;
    for (ll i = 1; i <= 1000000; i++) {
        facMod[i] = (1LL * facMod[i - 1] * i) % mod;
        invMod[i] = exp(facMod[i], mod - 2, mod);
    }
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2 != 0) {
        cout << 0 << endl; // If length of prefix is odd, no valid sequences possible
        return 0;
    }

    int open = 0, close = 0;
    for (char c : s) {
        if (c == '(') open++;
        else close++;
        if (close > open) {
            cout << 0 << endl; // Invalid prefix
            return 0;
        }
    }

    // Calculate remaining open and close brackets required
    int remaining_open = n / 2 - open;
    int remaining_close = n / 2 - close;
    if(remaining_close <0 || remaining_open<0){
        cout<<0<<endl;
        return 0;
    }
    // Calculate the number of valid sequences
    ll ans = binomialCoefficients(remaining_open + remaining_close, remaining_open);

    // Subtract invalid ways: taking more left brackets than right
    ans = (ans - binomialCoefficients(remaining_open + remaining_close, remaining_open - 1) + mod) % mod;

    cout << ans << endl;

    return 0;
}

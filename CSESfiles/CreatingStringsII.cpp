#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll facMod[1000001];
ll invMod[1000001];
ll alphaFreq[26] = {0};

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

void solve() {
    string s;
    cin >> s;
    for (auto i : s) {
        alphaFreq[i - 'a']++;
    }
    ll ans = facMod[s.size()];
    for (ll i = 0; i < 26; i++) {
        (ans *= invMod[alphaFreq[i]]) %= mod;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test = 1;
    facMod[0] = 1;
    invMod[0] = 1;

    // Initialize the facMod array
    for (ll i = 1; i <= 1000000; i++) {
        facMod[i] = (1LL * facMod[i - 1] * i) % mod;
        invMod[i] = exp(facMod[i], mod - 2, mod);
    }
    
    while (test--) {
        solve();
    }
    return 0;
}

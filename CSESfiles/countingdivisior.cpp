#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool primes[1000001] = {0};
bool primeSquares[1000001] = {0};
vector<ll> primeNumbers;

void priming() {
    for (ll i = 2; i * i <= 1000000; i++) {
        if (!primes[i]) {
            for (ll j = i * i; j <= 1000000; j += i) {
                primes[j] = 1;
            }
        }
    }
    primes[1] = 1;
    for (ll i = 2; i <= 1000000; i++) {
        if (!primes[i]) {
            primeNumbers.push_back(i);
            if (i * i <= 1000000) {
                primeSquares[i * i] = 1;
            }
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    ll ans = 1;
    for (auto i : primeNumbers) {
        if (i * i * i > n) {
            break;
        }
        int count = 1;
        while (n % i == 0) {
            n = n / i;
            count++;
        }
        ans = ans * count;
    }
    if (!primes[n]) {
        ans = ans * 2;
    } else if (primeSquares[n]) {
        ans = ans * 3;
    } else if (n != 1) {
        ans = ans * 4;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priming();
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

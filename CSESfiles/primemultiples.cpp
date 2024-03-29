#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

ll countDivisibleByPrimes(const vector<ll>& primes, int n) {
    ll count = 0;
    for (ll mask = 1; mask < (1 << primes.size()); mask++) {
        ll lcmValue = 1, bits = 0;
        for (ll j = 0; j < primes.size(); j++) {
            if (mask & (1 << j)) {
                lcmValue = lcm(lcmValue, primes[j]);
                bits++;
            }
        }
        if (bits % 2 == 1) // If odd number of bits are set
            count += n / lcmValue;
        else // If even number of bits are set
            count -= n / lcmValue;
    }
    return count;
}

int main() {
    ll n, k;
    // cout << "Enter the number of distinct prime numbers (k): ";
    cin >>n>>k ;
    vector<ll> primes(k);
    for (ll i = 0; i < k; i++) {
        cin >> primes[i];
    }
    // cout << "Enter the value of n: ";
    // cin >> n;
    ll result = countDivisibleByPrimes(primes, n);
    cout <<result << endl;
    return 0;
}

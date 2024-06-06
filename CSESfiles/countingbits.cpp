#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// Memoization map to store computed values of a(n)
unordered_map<ll, ll> dp;

ll helper(ll n) {
    if (n == 0) {
        return 0;
    }
    
    // Stack for iterative computation
    stack<ll> s;
    while (n > 0 && dp.find(n) == dp.end()) {
        s.push(n);
        ll m = static_cast<ll>(log2(n));
        n = n - (1LL << m);
    }

    while (!s.empty()) {
        n = s.top();
        s.pop();
        ll m = static_cast<ll>(log2(n));
        ll r = n - (1LL << m);
        dp[n] = m * (1LL << (m-1)) + r + 1 + dp[r];
    }
    
    return dp[n];
}

void solve() {
    ll n;
    cin >> n;
    cout << helper(n) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int test = 1;  // Set test cases count
    while (test--) {
        solve();
    }
    return 0;
}

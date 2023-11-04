#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll dp[5005][5005];

ll solve(vector<ll>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        dp[i][i] = arr[i];
    }

    for (int len = 2; len <= n; len++) {
        for (int l = 0; l <= n - len; l++) {
            int r = l + len - 1;
            ll s1 = arr[l] - dp[l + 1][r];
            ll s2 = arr[r] - dp[l][r - 1];
            dp[l][r] = max(s1, s2);
        }
    }

    return dp[0][n - 1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    ll ans = solve(arr);
    cout << (ans + sum) / 2 << endl;
    return 0;
}

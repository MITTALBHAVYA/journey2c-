#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dists(vector<vector<ll>>& w, string& word) {
    int n = word.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int count[26] = {0};
            for (int k = i; k <= j; k++) {
                count[word[k] - 'a']++;
            }
            int maxDist = 0;
            for (int c = 0; c < 26; c++) {
                maxDist = max(maxDist, count[c]);
            }
            w[i][j] = maxDist;
        }
    }
}

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> w(26, vector<ll>(26, 0));

    while (n--) {
        string word;
        cin >> word;
        dists(w, word);
    }

    ll ans = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            ll temp = 0;
            for (int k = 0; k < 26; k++) {
                temp = max(temp, w[i][k] + w[k][j]);
            }
            ans = max(ans, temp + w[i][i] * (q - 1));
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

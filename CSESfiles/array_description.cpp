#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(j) fixed<<setprecision(j)
#define p_q priority_queue
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mod = 1e9 + 7;

int n, m;
vector<vector<int>> memo;

int fun(vector<int>& v, int i, int j) {
    // Base case
    if (i == 0) {
        return (v[i] == 0 || v[i] == j) ? 1 : 0;
    }

    // Check if already computed
    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    // If the value at index i is known and not equal to j, return 0
    if (v[i] != 0 && v[i] != j) {
        return memo[i][j] = 0;
    }

    // Recursive case: sum of ways to fill previous position with j-1, j, and j+1
    int res = 0;
    if (j > 1) {
        res = (res + fun(v, i - 1, j - 1)) % mod;
    }
    res = (res + fun(v, i - 1, j)) % mod;
    if (j < m) {
        res = (res + fun(v, i - 1, j + 1)) % mod;
    }

    return memo[i][j] = res;
}

int main() {
    fast_io;

    cin >> n >> m;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // Initialize memo table with -1
    memo = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));

    int res = 0;
    // Calculate the number of ways for all possible values at the last position
    for (int j = 1; j <= m; j++) {
        res = (res + fun(v, n, j)) % mod;
    }

    cout << res << endl;

    return 0;
}

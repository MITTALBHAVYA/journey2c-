
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define forn(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define F first
#define S second
int solve(bool is_max, vector<pair<int, int>>& a, int i, vector<int>& dp) {
    if (i >= (int)a.size()) {
        return 0;
    }
    int id = is_max ? 0 : 1e5;
    int ans = 0, tmp;
    if (dp[i] != -1)return dp[i];
    for (int j = i; j < (int)a.size(); j++) {
        if (is_max) {
            if (id < a[j].F) {
                id = a[j].F;
                tmp = a[j].S;
            }
        } else {
            if (id > a[j].F) {
                id = a[j].F;
                tmp = a[j].S;
            }
        }
        ans = max(ans, tmp + solve(is_max, a, j + 1, dp));
    }
    return dp[i] = ans;
}

int main() {
    int n;
    vector<pair<int, int>> vp;
    int ans = 0;
    cin >> n;
    vector<int> dp1(n + 1, -1), dp2(n + 1, -1);
    forn(i, n) {
        string s;
        cin >> s;
        int colonPos = s.find(":");
        int id = stoi(s.substr(0, colonPos));
        int rating = stoi(s.substr(colonPos + 1));
        vp.pb({id, rating});

    }
    int x = solve(true, vp, 0, dp1);
    int y = solve(false, vp, 0, dp2);
    ans = max(x,y);
    cout << ans;
    return 0;
}
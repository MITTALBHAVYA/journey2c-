#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<priority_queue<pair<int, int>>> p(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        vec[i]--;
    }

    vector<int> dp(n + 1, 0);
    for (int i = 0; i < n; i++) {
        dp[i + 1] = dp[i];
        if (!p[vec[i]].empty()) {
            int j = p[vec[i]].top().second;
            dp[i + 1] = max(dp[i + 1], dp[j] - j + i + 1);
        }
        p[vec[i]].push({ dp[i] - i, i });
    }
    int ans=dp[n];
    cout << ans << endl;
    }

    return 0;
} 
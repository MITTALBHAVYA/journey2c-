#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
#define mod 1000000007
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> strarr;
    unordered_map<string, int> mp; 
    string ans = "";

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        mp[x]++;
        strarr.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int flag = 0;
        string currStr = strarr[i];  

        for (int j = 1; j < currStr.size(); j++) {
            string prefix = currStr.substr(0, j);   
            string suffix = currStr.substr(j);

            if (mp[prefix] > 0 && mp[suffix] > 0) {
                ans += '1';
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            ans += '0';
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;

    while (test--) {
        solve();
    }

    return 0;
}

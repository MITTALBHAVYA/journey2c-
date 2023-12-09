#include <bits/stdc++.h>
using namespace std;

int maxPoints(vector<int>& chocolates, int initial_chocolates) {
    sort(chocolates.begin(), chocolates.end());

    int l = 0, r = chocolates.size() - 1;
    int points = 1;
    int maxPoint = INT_MIN;

    while (l < r) {
        if (chocolates[l] <= initial_chocolates) {
            initial_chocolates -= chocolates[l];
            points++;
            maxPoint = max(maxPoint, points);
            l++;
        } else {
            initial_chocolates += chocolates[r];
            points--;
            maxPoint = max(maxPoint, points);
            r--;
        }
    }

    if (l == r) {
        if (chocolates[l] <= initial_chocolates) {
            points++;
        }
    }

    return max(maxPoint, points);
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> chocolates_list;
    int chocolate;
    
    while (ss >> chocolate) {
        chocolates_list.push_back(chocolate);
    }

    int initial_chocolates;
    cin >> initial_chocolates;

    int result = maxPoints(chocolates_list, initial_chocolates);
    cout << result;

    return 0;
}

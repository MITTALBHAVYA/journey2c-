#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int maximizeGems(int n, string dishes) {
    stringstream ss(dishes);
    vector<pair<int, int>> dishList;
    int dishId, dishValue;

    while (ss >> dishId >> dishValue) {
        dishList.emplace_back(dishId, dishValue);
    }

    sort(dishList.begin(), dishList.end());

    int maxSumWithMinIds = 0;
    int maxSumWithMaxIds = 0;
    int currentGroupMin = dishList[0].second;
    int currentGroupMax = dishList[0].second;

    for (int i = 1; i < n; ++i) {
        if (dishList[i].first == dishList[i - 1].first + 1) {
            currentGroupMin = min(currentGroupMin, dishList[i].second);
            currentGroupMax = max(currentGroupMax, dishList[i].second);
        } else {
            maxSumWithMinIds += currentGroupMin;
            maxSumWithMaxIds += currentGroupMax;
            currentGroupMin = dishList[i].second;
            currentGroupMax = dishList[i].second;
        }
    }

    maxSumWithMinIds += currentGroupMin;
    maxSumWithMaxIds += currentGroupMax;

    return max(maxSumWithMinIds, maxSumWithMaxIds);
}

int main() {
    int n = 6;
    string dishes = "3:-6 5:17 6:3 1:-9 2:-12 9:10";
    int result = maximizeGems(n, dishes);
    cout << result << endl;

    return 0;
}

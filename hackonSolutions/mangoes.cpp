#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int countWaysToDivideGarden(int N, vector<int> &mangoes)
{
    int totalWays = 0;
    vector<int> cumulativeSum(N, 0);

    // Calculate the cumulative sum of mangoes from left to right
    cumulativeSum[0] = mangoes[0];
    for (int i = 1; i < N; ++i)
    {
        cumulativeSum[i] = cumulativeSum[i - 1] + mangoes[i];
    }

    // Iterate through possible split points
    for (int splitPoint = 1; splitPoint < N - 1; ++splitPoint)
    {
        int sumS1 = cumulativeSum[splitPoint];
        int sumS3 = cumulativeSum[N - 1] - cumulativeSum[splitPoint];

        // Check if sumS1 + sumS3 > sumS2
        if (sumS1 + sumS3 > cumulativeSum[splitPoint])
        {
            totalWays++;
        }
    }

    return totalWays;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> mangoes(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> mangoes[i];
        }

        int ways = countWaysToDivideGarden(N, mangoes);
        cout << ways << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define li long long
#define mod 1000000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    li x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                li r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                li r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                li r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                li r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int arr[n];
        int ones = 0, zeros = 0;
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                if (x == 1)
                {
                    ones++;
                }
                if (x == 0)
                {
                    zeros++;
                }
            }
            if (zeros == n)
            {
                cout << -1 << endl;
            }
            else
            {
                if (zeros > ones)
                {
                    int diff = zeros - ones;
                    cout << diff / 2 << endl;
                }
                else
                {
                    int diff = ones - zeros;
                    int to_check = diff / 2;
                    if (to_check % 2 != 0)
                    {
                        cout << (to_check + 3) / 2 << endl;
                    }
                    else
                    {
                        cout << to_check / 2 << endl;
                    }
                }
            }
        }
    }
    // your code goes here
    return 0;
}
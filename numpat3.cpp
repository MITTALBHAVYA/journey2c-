#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // row
    for (int i = 1; i <= n; i++)
    {
        // column
        for (int j = 1; j <= 2 * n; j++)
        {
            if ((j <= i) || (j >= (2 * n - i + 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        // column
        for (int j = 1; j <= 2 * n; j++)
        {
            if ((j <= i) || (j >= (2 * n - i + 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        cout << endl;
    }
    return 0;
}
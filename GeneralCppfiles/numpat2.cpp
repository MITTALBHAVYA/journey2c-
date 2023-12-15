#include <iostream>
using namespace std;

int main()
{
    int n, a = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", a);
            a++;
        }
        cout << endl;
    }
    return 0;
}
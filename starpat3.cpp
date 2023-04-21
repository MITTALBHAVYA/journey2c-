#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = n, i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf(" * ");
        }
        a--;
        cout << endl;
    }
    return 0;
}
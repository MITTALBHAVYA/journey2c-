#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int x[t], k[t], diff[t];
    if ((t >= 1) && (t <= 100))
    {
        for (int i = 0; i < t; i++)
        {
            scanf("%d %d", &k[i], &x[i]);
        }
        for (int i = 0; i < t; i++)
        {
            if ((k[i] > x[i]) && (x[i] >= 1) && (k[i] <= 1000))
            {
                diff[i] = k[i] - x[i];
                printf("%d\n", diff[i]);
            }
        }
    }
    return 0;
}
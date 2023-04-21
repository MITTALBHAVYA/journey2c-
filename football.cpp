#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int x[t], y[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    if ((t >= 1) && (t <= 100))
    {
        for (int i = 0; i < t; i++)
        {
            int a = 1;
            if ((x[i] == 0) || (y[i] == 0) || (x[i] != y[i]))
            {
                a = 0;
            }
            if (a == 0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    // your code goes here
    return 0;
}
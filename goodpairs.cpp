#include <iostream>
using namespace std;

long int gdc(long int a, long int b)
{
    long int hcf;
    for (long int i = 1; i <= a && i <= b; i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int t;
    long int n, hcf, l;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%ld", &n);
        long int a[n], count = 0;
        for (long int j = 0; j < n; j++)
        {
            scanf("%ld", &a[j]);
        }
        long int w = 1;
        for (long int p = 0; p < n; p++)
        {
            for (long int q = w; q < n; q++)
            {
                hcf = gdc(a[p], a[q]);
                l = (a[p] * a[q]) / hcf;
                if (hcf == l)
                {
                    count++;
                }
            }
            w++;
        }
        cout << count << endl;
    }
    return 0;
}
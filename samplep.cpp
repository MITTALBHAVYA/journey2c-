#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int n, m;
        scanf("%ld %ld", &n, &m);
        long int c[n], sum = 0, rem;
        for (long int j = 0; j < n; j++)
        {
            scanf("%ld", &c[j]);
            sum = sum + c[j];
        }
        rem = sum % m;
        cout << rem << endl;
    }
    return 0;
}
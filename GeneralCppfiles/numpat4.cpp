#include <iostream>
using namespace std;

int fac(int x)
{
    int pro = 1;
    if (x >= 1)
    {
        for (int i = x; i >= 1; i--)
        {
            pro = pro * i;
        }
    }
    return pro;
}
int combination(int n, int m)
{
    int c;
    if (n >= m)
    {
        c = (fac(n) / (fac(m) * fac(n - m)));
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        cout << endl;
    }
    return 0;
}
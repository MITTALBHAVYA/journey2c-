#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//*Policy-based data structures
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
bool cmpfloat(double a, double b)
{
    if (abs(a - b) < 1e-9)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <typename T>
T modpower(T x, T n, T m)
{
    if (n == 0) // base case
        return 1 % m;
    T u = modpower(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1) // when 'n' is odd
        u = (u * x) % m;
    return u;
}

template <typename T>
T sumupton(T n)
{
    return n * (n + 1) / 2;
}

template <typename T>
T sumsqupton(T n)
{
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

template <typename T>
T sumcubeupton(T n)
{
    T boo = n * (n + 1) / 2;
    T poo = pow(boo, 2);
    return poo;
}

template <typename T>
T faulhaberFormula(T n, T p)
{
    T sum = 0;
    for (T k = 0; k <= p; ++k)
    {
        T coeff = 1;
        for (T i = 0; i < k; ++i)
        {
            coeff *= (n - i);
            coeff /= (i + 1);
        }
        sum += coeff * pow(n, p - k);
    }
    return sum;
}

// Arithmetic Progression
// first term=a, number of terms = n, common difference = d, nth term l
template <typename T>
T nthAPterm(T a, T n, T d)
{
    return a + ((n - 1) * d);
}

template <typename T>
T nooftermsAP(T a, T l, T d)
{
    T p = (l - a) / d;
    return p + 1;
}

template <typename T>
T sumuptonAP(T a, T d, T n)
{
    T p = n * (2 * a + (n - 1) * d);
    return p / 2;
}

// Geometric Progression (double)
// first term a, common ratio r , number of terms n, nth term l
template <typename T>
T nthterm(T a, T r, T n)
{
    T mul = pow(r, n - 1);
    return mul * a;
}

template <typename T>
T sumofgp(T a, T r, T l)
{
    T doom = (l * r - a) / (r - 1);
    return doom;
}
template <typename T>
T infisumgp(T a, T k)
{
    T ans = a / (1 - k);
    return T;
}
int binetformula(int n)
{
    double phi = (1 + sqrt(5)) / 2; // Golden ratio
    double psi = (1 - sqrt(5)) / 2; // Negative golden ratio

    double nthFibonacci = (pow(phi, n) - pow(psi, n)) / sqrt(5);
    return static_cast<int>(nthFibonacci);
}
//*counting tiling formula
//* hamming
int hamming(int a, int b)
{
    return __builtin_popcount(a ^ b);
}
//*  inter  pow efficient
int int_pow(int x, unsigned int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        // Call your implementation or remove the loop if not needed
    }
    return 0;
}

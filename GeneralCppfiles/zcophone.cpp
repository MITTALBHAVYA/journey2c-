#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60
Input format
Line 1 : N, the total number of potential customers.
Lines 2 to N+1: Each line has the budget of a potential customer.
Output format
The output consists of a single integer, the maximum possible revenue you can earn from selling your app.
*/
/*
algo
1.lets scan the number of potential costumer,{n}.
initiate two int vector {bud,rev}
2.loop from 0 to n,  get the budget in bud vector
3.sort bud vector
4.k=n, i=0
::: LOOP FROM i=0 to i=n-1 :::
5.rev vector = bud[i]*k;
6.i++::k--;
7.check the max and print...
*/
int main()
{
    long long n, k, revnue;
    // long long max = INT_MIN;
    scanf("%lld", &n);
    k = n;
    vector<long long> bud;
    // vector<long long> rev;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        bud.push_back(x);
    }
    sort(bud.begin(), bud.end());
    long long max = k * bud[0];
    for (long long i = 1; i < bud.size(); i++)
    {
        revnue = (k - 1) * bud[i];
        k--;
        if (revnue > max)
        {
            max = revnue;
        }
    }
    cout << max << endl;
    return 0;
}
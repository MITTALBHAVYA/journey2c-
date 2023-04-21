// LONGEST ARRITHMETIC SUBARRAY
// ARRAY CHALLENGE
#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY" << endl;
    cin >> n;
    int a[n];
    /*cin.ignore();

      working with example::10  7  4  6  8  10  11
                              -3 -3  2  2  2   1
                              continue difference subarray  1.[10,7,4]{-3}
                                                            2.[4,6,8,10]{2}
                                                            3.[10,11]{1}
        output :: 4 (longest length of array)
        what we get to know
        minimum or atleast output is "2"
        start with a min count = 2
        *******codition to be checked******
        ans=2
        cd=a[1]-a[0];
        count 2
        cd=a[i]-a[i-1];
        loop(2 to n)
        if((a[i]-a[i-1])==cd)
        {
            count++;
        }
        else
        {
            cd=a[i]-a[i-1];
            count=2
        }
        ans=max(ans,count);
        i++

    */
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d ", &a[i]);
    }
    int ans = 2, count = 2;
    int cd = a[1] - a[0];
    for (int i = 2; i < n; i++)
    {
        if (cd == a[i] - a[i - 1])
        {
            count++;
        }
        else
        {
            cd = a[i] - a[i - 1];
            count = 2;
        }
        ans = max(ans, count);
    }
    cout << "the answer is :::: " << ans << endl;
    return 0;
}
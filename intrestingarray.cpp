/*
You are given an array AA of length NN.
The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray.
Find the minimum and maximum interesting value over all subarrays for the given array.Note: A subarray is obtained by deletion of several (possibly zero) elements from the beginning of the array and several (possibly zero) elements from the end of the array.
*/
/*
INPUT                   OUTPUT
2
2
2 2                      4 4
3                        0 81
5 0 9
*/
/*
1)LOOP FOR NO. OF ENTRIES
  (INT T)
2)LONG N,LONG ARRAY A WITH LENGTH N
3)get the elements
4)max from array ::: min from array
5)0 to in ----->maxop=max*max;minop=min*min;
6)-in to -1 --->maxop=min*min;minop=max*max;
7)-in to in ----> if abs(min)>abs(max){maxop=min*min; minop=min*max;}
                     abs(max)>abs(min){maxop=max*max; minop=min*max;}
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int n, maxop, minop;
        long int a[n];
        for (long int y = 0; y < n; y++)
        {
            scanf("%ld", &a[y]);
        }
        sort(a, a + n);
        if ((a[0] < 0) && (a[n] < 0))
        {
            maxop = a[0] * a[0];
            minop = a[n] * a[n];
        }
        if ((a[0] < 0) && (a[n] > 0))
        {
            if (abs(a[0]) > abs(a[n]))
            {
                maxop = a[0] * a[0];
                minop = a[0] * a[n];
            }
            if (abs(a[0]) < abs(a[n]))
            {
                maxop = a[n] * a[n];
                minop = a[0] * a[n];
            }
        }
        else
        {
            minop = a[0] * a[0];
            maxop = a[n] * a[n];
        }
        printf("%ld %ld", minop, maxop);
    }
    return 0;
}
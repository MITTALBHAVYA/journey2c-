/*
Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
*/
/*
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
*/
#include <iostream>
using namespace std;

int main()
{
    int len, count;
    printf("ENTER THE LENGTH OF THE ARRAY ::: ");
    scanf("%d", &len);
    count = len;
    int arr[len], fre[len];
    for (int i = 0; i < len; i++)
    {
        fre[i] = -1;
    }
    for (int j = 0; j < len; j++)
    {
        printf("ENTER THE %d element of array :: ", j + 1);
        scanf("%d", &arr[j]);
    }
    for (int k = 0; k < len; k++)
    {
        int i = arr[k];
        // fre[i]=k;
        if (fre[i] != -1)
        {
            count = min(count, fre[i]);
        }
        else
        {
            fre[i] = k;
        }
    }
    printf("%d", count + 1);
    return 0;
}
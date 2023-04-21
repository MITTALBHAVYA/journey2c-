#include <iostream>
using namespace std;
/*
  here with bit_manipulation--->>
  let consider number of element n-->{a1,a2,a3,a4,a5.........an}
  [0,0,0,0,0,0,0,0,0,0,....]for no element
  [0,0,0,0,0,0,0,0,0,0,...1]for presence of last element
  let's do it.
*/
int subsets(long int arr[], long int n)
{
    for (long int i = 0; i < (1 << n); i++)
    {
        for (long int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    long int t, len;
    cout << "ENTER THE NUMBER OF TEST CASES" << endl;
    scanf("%ld", &t);
    for (long int i = 0; i < t; i++)
    {
        cout << "ENTER THE LENGTH OF ARRAY" << endl;
        scanf("%ld", &len);
        long int arr[len];
        cout << "enter the elements" << endl;
        for (long int j = 0; j < len; j++)
        {
            scanf("%ld", &arr[j]);
        }
        subsets(arr, len);
    }
    return 0;
}

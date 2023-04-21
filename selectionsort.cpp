#include <iostream>
using namespace std;

int selectionsort(int arr[], int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int len;
    cout << "ENTER THE LENGTH OF ARRAY" << endl;
    scanf("%d", &len);
    cin.ignore();
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter the %d element", i + 1);
        cin >> arr[i];
    }
    selectionsort(arr, len);
    printf("sorted array   ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
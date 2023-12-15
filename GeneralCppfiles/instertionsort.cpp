#include <iostream>
using namespace std;

int insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j;
        for (j = i - 1; (key < arr[j]) && (j >= 0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
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
    insertionsort(arr, len);
    printf("sorted array   ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
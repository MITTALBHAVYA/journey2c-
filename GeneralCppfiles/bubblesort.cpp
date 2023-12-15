#include <iostream>
using namespace std;

int bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag++;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    printf("ENTER THE RANGE OF ARRAY:::: ");
    scanf("%d", &n);
    int arr[n];
    // cin.ignore();
    for (int i = 0; i < n; i++)
    {
        // cout << endl;
        scanf("%d ", &arr[i]);
    }
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
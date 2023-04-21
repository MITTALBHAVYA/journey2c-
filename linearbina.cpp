#include <iostream>
using namespace std;

/*int linearsearch(int n, int arr[], int key)
{
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = i;
        }
    }
    return flag;
}*/
/*int binarySearch(int arr[], int i, int l, int key)
{
    if (l >= l) {
        int mid = i + (l - i) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, i, mid - 1, key);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, l, key);
    }

    // We reach here when element is not
    // present in array
    return -1;
}*/

int binarysearch(int arr[], int i, int l, int key)
{
    if (l >= 1)
    {
        int mid = (i + l) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            binarysearch(arr, mid + 1, l, key);
        }
        else if (arr[mid] > key)
        {
            binarysearch(arr, i, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    int n, key, a = 0;
    printf("ENTER THE RANGE OF ARRAY:: ");
    scanf("%d", &n);
    int arr[n];
    cin.ignore();
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d ", &arr[i]);
    }
    printf("Enter the number to be searched :: \n");
    cin.ignore();
    cin >> key;
    // int l = linearsearch(n, arr, key);
    int m = binarysearch(arr, a, n - 1, key);
    /*if (l == -1)
    {
        printf("notfound\n\n\n");
    }
    else
    {
        printf("%d", l);
    }*/
    if (m == -1)
    {
        printf("notfound\n\n\n");
    }
    else
    {
        printf("%d", m);
    }

    return 0;
}
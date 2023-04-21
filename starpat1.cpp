#include <iostream>
using namespace std;

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    for (int n = 1; n <= row; n++)
    {
        for (int i = 1; i <= col; i++)
        {
            printf("*");
        }
        cout << endl;
    }
    return 0;
}
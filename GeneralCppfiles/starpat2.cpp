#include <iostream>
using namespace std;

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i == 1) || (j == 1) || (i == row) || (j == col))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        cout << endl;
    }

    return 0;
}
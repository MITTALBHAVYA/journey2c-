/*
  working with example ::::
    [1 2 3 4 5]    ----------->>>>>    [1 2 3 4 5]
    [6 7 8 9 10]   ----------->>>>>  [16 17 18 19 6]
  [11 12 13 14 15] ----------->>>>>  [15 24 25 20 7]
  [16 17 18 19 20] ----------->>>>>  [14 23 22 21 8]
  [21 22 23 24 25] ----------->>>>>  [13 12 11 10 9]
   ***INPUT***                        ***OUTPUT***

   spiral approach ::
   input with 2D matrix arr[i][j] {i->rows, j->column}
   rows=m columns=n here (5,5)
   row_start=0,col_start=0,row_end=n-1,col_end=m-1
   row_start++,col_start++,row_end--,col_end--
   loop upto row_start<=row_end and col_start<=col_end
*/
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    printf("ENTER THE ROWS AND COLUMNS :: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int row_start = 0, col_start = 0, row_end = rows - 1, col_end = cols - 1;
    while ((row_start <= row_end) && (col_start <= col_end))
    {
        // row start
        for (int i = col_start; i <= col_end; i++)
        {
            cout << mat[row_start][i] << " ";
        }
        row_start++;
        // col end
        for (int j = row_start; j <= row_end; j++)
        {
            cout << mat[j][col_end] << " ";
        }
        col_end--;

        // row end
        for (int i = col_end; i >= col_start; i--)
        {
            cout << mat[row_end][i] << " ";
        }
        row_end--;

        // col start
        for (int j = row_end; j >= row_start; j--)
        {
            cout << mat[j][col_start] << " ";
        }
        col_start++;
    }
    return 0;
}
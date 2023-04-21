#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// i am using red as 0 and blue as 1 and dot as -1
int rowcheck(int a[8][8])
{
    int m = 0, answer = -1;
    for (int i = 0; i < 8; i++)
    {
        if (m == 8)
        {
            break;
        }
        if (a[m][i] == -1)
        {
            m++;
            i = -1;
        }
        else
        {
            if (a[m][0] == a[m][1] == a[m][2] == a[m][3] == a[m][4] == a[m][5] == a[m][6] == a[m][7])
            {
                answer = a[m][0];
                break;
            }
            else
            {
                m++;
                i = -1;
            }
        }
    }
    return answer;
}
int COLcheck(int a[8][8])
{
    int m = 0, answer = -1;
    for (int i = 0; i < 8; i++)
    {
        if (m == 8)
        {
            break;
        }
        if (a[i][m] == -1)
        {
            m++;
            i = -1;
        }
        else
        {
            if (a[0][m] == a[1][m] == a[2][m] == a[3][m] == a[4][m] == a[5][m] == a[6][m] == a[7][m])
            {
                answer = a[0][m];
                break;
            }
            else
            {
                m++;
                i = -1;
            }
        }
    }
    return answer;
}
int main()
{
    int a[8][8];
    cout << "ENTER THE GRID HERE" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
        }
    }
    int x = rowcheck(a);
    int y = COLcheck(a);
    cout << x << " " << y << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int ref[t];
    for (int i = 0; i < t; i++)
    {
        for (int x = 0; x < 4; x++)
        {
            scanf("%d", ref[x]);
        }
        for (int y = 0; y < 4; y++)
        {
            if (ref[y] == 1)
            {
                printf("OUT");
                break;
            }
        }
        printf("IN");
    }
    // your code goes here
    return 0;
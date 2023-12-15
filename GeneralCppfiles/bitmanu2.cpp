#include <iostream>
using namespace std;

int noof1bits(long int n)
{
    int count = 0;
    while (1)
    {
        count++;
        if ((n & n - 1) == 0)
        {
            break;
        }
        n = n & n - 1;
    }
    return count;
}
int main()
{
    int t;
    printf("ENTER NUMBER OF TEST CASES :::: ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int num;
        printf("ENTER THE NUMBER \n");
        scanf("%ld", &num);
        int x = noof1bits(num);
        cout << "number of 1 bits is " << x << endl;
    }
    return 0;
}
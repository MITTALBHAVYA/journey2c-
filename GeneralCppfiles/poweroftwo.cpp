#include <iostream>
using namespace std;

bool ispowerof2(long int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int num;
    printf("ENTER THE NUMBER :: ");
    scanf("%ld", &num);
    if (ispowerof2(num))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NOPE_NEVER" << endl;
    }
    // cout << ispowerof2(num) << endl;
}
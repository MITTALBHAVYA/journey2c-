#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        if(n/10%10<n%10)
        {
            cout<<n/100 * 10 + n%10 <<endl;
        }
        else
        {
            cout<<n/10<<endl;
        }
    }
    return 0;
}
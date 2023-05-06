#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll y;
        cin>>y;
        for(int i=2;i<=y;i++)
        {
            ll peep=pow(2,i);
            ll two=peep-1;
            if(y%two==0)
            {
                cout<<y/two<<endl;
                break;
            }
        }
    }
    return 0;
}
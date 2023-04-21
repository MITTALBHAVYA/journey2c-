#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    if(n%2!=0 && m%2!=0)
    {
       cout<<(((n-1)*m)/2 + m/2)<<endl;
    }
    else
    {
        cout<<(m*n)/2<<endl;
    }
}
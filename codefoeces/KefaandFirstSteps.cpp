#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long count=0,top=0,mx=1;
    for(long long int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>=top)
        {
            count++;
            top=x;
        }
        else
        {
            top=x;
            mx=max(mx,count);
            count=1;
        }
    }
    mx=max(mx,count);
    cout<<mx<<endl;
}
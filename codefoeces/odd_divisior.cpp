#include <bits/stdc++.h>
using namespace std;

int main()
{
   long double t;
   cin>>t;
   long double n;
   while(t--)
   {
    cin>>n;
    long double ans=log2(n);
    long long int ans2=(int)ans;
    if(ans==ans2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
   } 
    return 0;
}
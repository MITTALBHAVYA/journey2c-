#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,a;
   cin>>n>>m>>a;
   long long int q1=n/a;
   long long int rem1=n%a;
   if(rem>0)
   {
    q1++;
   }
   long long int q2=m/a;
   long long int rem2=m%a;
   if(rem>0)
   {
    q2++;
   }
   cout<<q1*q2<<endl;
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  for(int i=1;i<=test;i++)
  {
    int s,d,k;
    cin>>s>>d>>k;
    int buns=2*s + 3*d;
    int patties=1*s + 2*d;
    int cheez=1*s + 2*d;
    if(buns>=k+1 && patties>=k && cheez>=k)
    {
        cout<<"Case #"<<i<<": Yes"<<endl;
    }
    else
    {
        cout<<"Case #"<<i<<": No"<<endl;    
    }
  }
 return 0;
}
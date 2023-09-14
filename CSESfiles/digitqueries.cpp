#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
long long int int_pow(long long int x, unsigned int y)
{
    long long int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

void solve(){
  long long int te;
  cin>>te;
  while(te--)
  {
    long long int n;
    cin>>n;
    long long int c=1;
    for(long long int i=9;(n-i)>0;i=9*c*int_pow(10,c-1))
    {
      n-=i;
      c++;

    }
    n--;
    long long int q=n/c;
    long long int rem=n%c;
    long long int ans=int_pow(10,c-1) + q;
    string str=to_string(ans);
    cout<<str[rem]<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
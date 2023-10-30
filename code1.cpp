#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  bool zerodetect=0;
  ll count=0;
  string str;
  cin>>str;
  for(ll i=0;i<str.size();i++)
  {
    if(str[i]=='?')
    {
      count++;
    }
    else if(str[i]=='0')
    {
      zerodetect=1;
      count++;
      break;
    }
    else
    {
      count=1;
    }
  }
  cout<<count<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int test;
  cin>>test;
  while(test--)
  {
    solve();
  }
 return 0;
}
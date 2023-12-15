#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
    int n;
    cin>>n;
  string s;
  cin>>s;
  for(int i=n-3;i>=0;i--)
  {
    if(s[i]=='1')
    {
        s[i+1]='0';
        s[i+2]='0';
    }
  }
  cout<<s<<endl;
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
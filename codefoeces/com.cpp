#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  char prev=str[0];
  int count=1,maxi=1;
  for(int i=1;i<n;i++)
  {
     if(str[i]==prev)
     {
        count++;
     }
     else
     {
        prev=str[i];
        maxi=max(maxi,count);
        count=1;
     }
  }
  maxi=max(maxi,count);
  cout<<maxi+1<<endl;
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
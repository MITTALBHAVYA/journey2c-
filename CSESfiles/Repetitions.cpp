#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  string str;
  cin>>str;
  int count=1;
  int maxi=1;
  char prev=str[0];
  for(int i=1;i<str.size();i++)
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
  cout<<maxi<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}
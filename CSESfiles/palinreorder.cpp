#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  string str;
  cin>>str;
  unordered_map<char,int>mp;
  string oddchar="";
  string str1="",str2="";
  for(int i=0;i<str.size();i++)
  {
     mp[str[i]]++;
  }
  int odds=0;
  for(auto i:mp)
  {
    if(i.second%2!=0)
    {
        odds++;
        string f(i.second,i.first);
        oddchar=f;
    }
    if(odds>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    if(i.second%2==0)
    {
        string p(i.second/2,i.first);
       str1=p+str1;
       str2=str2+p;
    }
  }
  cout<<str1+oddchar+str2<<endl;
  return;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
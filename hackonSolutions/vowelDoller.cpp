#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
string addDollarAfterVowels(string s) {
    unordered_map<char,int>mp;
    mp['a']=1;
    mp['e']=1;
    mp['i']=1;
    mp['o']=1;
    mp['u']=1;
    string str = "";
    int n = s.length();
    int count=0;
    for (int i = 0; i < n; i++) {
        if(mp[s[i]]==1)
        {
            count++;
            str+=s[i];
        }
        else
        {
            if(count==2)
            {
                str+='$';
            }
            count=0;
            str+=s[i];
        }
    }
    if(count==2)
    {
        str+='$';
    }
    return str;
}
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  cout<<addDollarAfterVowels(s)<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0); 
   solve();
 return 0;
}
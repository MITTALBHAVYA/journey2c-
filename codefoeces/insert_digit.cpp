#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
   int n;
   cin>>n;
   string str;
   cin>>str;
   unordered_map<string,int>mp;
   for(int i=0;i<n-1;i++)
   {
    mp[str.substr(i,2)]++;
   }
   cout<<mp.size()<<endl;
}
int main() {
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

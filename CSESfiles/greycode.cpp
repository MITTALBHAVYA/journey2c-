#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int t;
  cin>>t;
   for(int i=0;i<(1<<t);i++)
   {
    int val=i^(i>>1);
    bitset<32> r(val);
    string s=r.to_string();
    cout<<s.substr(32-t)<<endl;
   }
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}
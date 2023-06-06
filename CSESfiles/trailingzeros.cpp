#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n;
  cin>>n;
  int count=0;
  for(int i=n;i>=1;i=i/5)
  {
    count=count + i/5 ;
  }
  cout<<count<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}
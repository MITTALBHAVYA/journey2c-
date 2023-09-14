#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll ways;
bool col[16],dia1[16],dia2[16],reserved[8][8];
void search(ll r)
{
  if(r==8)
  {
    ways++;
    return;
  }
  for(ll c=0;c<8;c++)
  {
    if(col[c]||dia1[r+c]||dia2[r-c+7]||reserved[r][c])
    {
      continue;
    }
    col[c]=dia1[r+c]=dia2[r-c+7]=true;
    search(r+1);
    col[c]=dia1[r+c]=dia2[r-c+7]=false;
  }
}
void solve(){
  for(ll i=0;i<16;i++)
  {
    col[i]=dia1[i]=dia2[i]=false;
  }
  string x;
  for(ll j=0;j<8;j++)
  {
    cin>>x;
    for(ll k=0;k<8;k++)
    {
      reserved[j][k]=x[k]!='.';
    }
  }
  search(0);
  cout<<ways<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
 return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  multiset<int,greater<int>>tickets;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    tickets.insert(x);
  }
  while(m--)
  {
    int op;
    cin>>op;
    auto it=tickets.lower_bound(op);
    if(it==tickets.end())
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<*it<<endl;
        tickets.erase(it);
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
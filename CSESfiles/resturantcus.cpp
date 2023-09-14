#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>>vect;
  while(n--)
  {
    int x,y;
    cin>>x>>y;
    vect.push_back(make_pair(y,x));
  }
  sort(vect.begin(),vect.end());
  int total=0,curr_end=0;
  for(auto i:vect)
  {
    if(i.second>=curr_end)
    {
        curr_end=i.first;
        total++;
    }
  }
  cout<<total<<endl;

}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}
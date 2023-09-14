#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve(){
  int n,x;
  cin>>n>>x;
  vector<pair<int,int>>vect(n);
  for(int i=0;i<n;i++)
  {
    cin>>vect[i].first;
    vect[i].second=i+1;
  }
  sort(vect.begin(),vect.end());
  int i=0,j=n-1;
  while(i<j)
  {
    if(vect[i].first+vect[j].first == x)
    {
        cout<<vect[i].second<<" "<<vect[j].second<<endl;
        return;
    }
    if(vect[i].first+vect[j].first > x)
    {
        j--;
    }
    if(vect[i].first+vect[j].first < x)
    {
        i++;
    }
  }
  cout<<"IMPOSSIBLE"<<endl;
  return;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
 return 0;
}